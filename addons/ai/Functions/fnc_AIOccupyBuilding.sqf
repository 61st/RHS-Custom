#include "script_component.hpp"
/*
Function: call lxim_ai_fnc_AIOccupyBuilding


Description:
    Garrison function used to garrison AI inside buildings.

Arguments:
    _startingPos - The building(s) nearest this position are used <POSITION 3D>
    _buildingTypes - Limit the building search to those type of building <ARRAY OF STRINGS>
    _unitsArray - Units that will be garrisoned <ARRAY OF UNITS>
    _fillingRadius - Radius to fill building(s) <SCALAR, defaults to 50>
    _fillingType - even filling, 1: building by building, 2: random filling <SCALAR, defaults to 0>
    _topDownFilling - True to fill building(s) from top to bottom <BOOLEAN, defaults to False>
    _maxFill - max number of positions to fill in any given building, <SCALAR, defaults to 0 (all positions)>
    _excludes - List of positions to exclude <ARRAY OF STRINGS>

Return Value:
    Array of units not garrisoned <ARRAY OF UNITS>

Example:
    (begin example)
        [position, nil, [unit1, unit2, unit3, unitN], 200, 1, false] call lxim_ai_fnc_AIOccupyBuilding
    (end)

Author:
    alganthe, modified by Mokka
*/

params [
    ["_startingPos",[0,0,0], [[]], 3],
    ["_buildingTypes", ["Building"], [[]]],
    ["_unitsArray", [], [[]]],
    ["_fillingRadius", [0, 50], [[]]],
    ["_fillingType", 0, [0]],
    ["_topDownFilling", false, [true]],
    ["_maxFill", 0, [0]],
    ["_excludes", [], [[]]]
];

_origUnits  = _unitsArray + [];
_unitsArray = _unitsArray select {alive _x && {!isPlayer _x}};

if (_startingPos isEqualTo [0,0,0]) exitWith {
    diag_log "[lxim_ai_fnc_AIOccupyBuilding] Error: Position provided is invalid";
    systemChat "[lxim_ai_fnc_AIOccupyBuilding] Error: Position provided is invalid";
};

if (count _unitsArray == 0 || {isNull (_unitsArray select 0)}) exitWith {
    diag_log "[lxim_ai_fnc_AIOccupyBuilding] Error: No unit provided";
    systemChat "[lxim_ai_fnc_AIOccupyBuilding] Error: No unit provided";
};

private _buildings = [];

if ((_fillingRadius select 1) < 30) then { _fillingRadius set [1,30]; };

_buildings =
    nearestObjects [_startingPos, _buildingTypes, _fillingRadius select 1] select {
        _x distance2D _startingPos > (_fillingRadius select 0) && {!(_x in _excludes)}
    };

_buildings = _buildings call BIS_fnc_arrayShuffle;

if (count _buildings == 0) exitWith {
    diag_log "[lxim_ai_fnc_AIOccupyBuilding] Error: No valid building found";
    systemChat "[lxim_ai_fnc_AIOccupyBuilding] Error: No valid building found";
    _unitsArray
};

private _buildingsIndexes = [];

if (_topDownFilling) then {
    {
        private _buildingPos = (_x buildingPos -1) select { !(_x in _excludes) };

        // Those reverse are necessary, as dumb as it is there's no better way to sort those subarrays in sqf
        {
            reverse _x;
        } forEach _buildingPos;

        _buildingPos sort false;

        {
            reverse _x;
        } forEach _buildingPos;

        if (_maxFill > 0) then {
            _buildingsIndexes pushBack (_buildingPos select [0, _maxFill]);
        } else {
            _buildingsIndexes pushBack _buildingPos;
        };

    } forEach _buildings;
} else {
    {
        if(_maxFill > 0) then {
            _buildingsIndexes pushBack ((((_x buildingPos -1) select { !(_x in _excludes) }) call BIS_fnc_arrayShuffle) select [0,_maxFill]);
        } else {
            _buildingsIndexes pushBack ((_x buildingPos -1) select { !(_x in _excludes) });
        };
    } forEach _buildings;
};

// Remove buildings without positions
{
    _buildingsIndexes deleteAt (_buildingsIndexes find _x);
} forEach (_buildingsIndexes select {count _x == 0});

// Warn the user that there's not enough positions to place all units
private _count = 0;
{_count = _count + count _x;} forEach _buildingsIndexes;
private _leftOverAICount = (count _unitsArray) - _count;
if (_leftOverAICount > 0) then {
    diag_log "[lxim_ai_fnc_AIOccupyBuilding] Warning: not enough positions to place all units";
    systemChat "[lxim_ai_fnc_AIOccupyBuilding] Warning: not enough positions to place all units";
};

private _placedUnits = [];

// Do the placement
switch (_fillingType) do {
    case 0: {
        while {count _unitsArray > 0} do {
            if (count _buildingsIndexes == 0) exitWith {};

            private _building = _buildingsIndexes select 0;

            if (_building isEqualTo []) then {
                _buildingsIndexes deleteAt 0;
            } else {
                private _pos = _building select 0;

                private _nearestUnits = (_pos nearEntities ["CAManBase", 1]);
                if (count _nearestUnits  > 0 && {count (_nearestUnits select {getPos _x select 2 == _pos select 2}) > 0}) then {
                    _buildingsIndexes set [0,  _building - [_pos]];

                } else {
                    private _unit = _unitsArray select 0;
                    _unit setPos _pos;
                    _placedUnits pushBack _unit;
                    _unitsArray deleteAt (_unitsArray find _unit);
                    _building deleteAt 0;
                    _buildingsIndexes deleteAt 0;
                    _buildingsIndexes pushBackUnique _building;
                };
            };
        };
    };

    case 1: {
        while {count _unitsArray > 0} do {
            if (count _buildingsIndexes == 0) exitWith {};

            private _building = _buildingsIndexes select 0;

            if (_building isEqualTo []) then {
                _buildingsIndexes deleteAt 0;
            } else {
                private _pos = _building select 0;

                private _nearestUnits = (_pos nearEntities ["CAManBase", 1]);
                if (count _nearestUnits  > 0 && {count (_nearestUnits select {getPos _x select 2 == _pos select 2}) > 0}) then {
                    _buildingsIndexes set [0, _building - [_pos]];

                } else {
                    private _unit = _unitsArray select 0;
                    _unit setPos _pos;
                    _placedUnits pushBack _unit;
                    _unitsArray deleteAt (_unitsArray find _unit);
                    _buildingsIndexes set [0, _building - [_pos]];
                };
            };
        };
    };

    case 2: {
        while {count _unitsArray > 0} do {
            if (count _buildingsIndexes == 0) exitWith {};

            private _building = selectRandom _buildingsIndexes;

            if (_building isEqualTo []) then {
                _buildingsIndexes deleteAt (_buildingsIndexes find _building);
            } else {
                private _pos = selectRandom _building;

                private _nearestUnits = (_pos nearEntities ["CAManBase", 1]);
                if (count _nearestUnits  > 0 && {count (_nearestUnits select {getPos _x select 2 == _pos select 2}) > 0}) then {
                    _buildingsIndexes set [(_buildingsIndexes find _building), _building - [_pos]];

                } else {
                    private _unit = _unitsArray select 0;
                    _unit setPos _pos;
                    _unitsArray deleteAt (_unitsArray find _unit);
                    _placedUnits pushBack _unit;
                    _buildingsIndexes set [(_buildingsIndexes find _building), _building - [_pos]];
                };
            };
        };
    };
};

{
    _x disableAI "AUTOCOMBAT";
    _x disableAI "PATH";
    if !(dynamicSimulationEnabled (group _x)) then {(group _x) enableDynamicSimulation true;};

} forEach _placedUnits;

_origUnits - _placedUnits
