#include "..\script_component.hpp"
/*

 * \lxir_medical\supplies\functions\fn_doUnpackFirstAid.sqf
 * by YonV
 *
 * unpack medical supplies
 *
 * Arguments:
 * 0: unit - <OBJECT>
 *
 * Return:
 * nothing
 *
 * Example:
 * [player] call lxir_medical_supplies_fnc_doUnpackFirstAid;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_unit"];

_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {};

// -------------------------------------------------------------------------------------------------

[_unit] spawn {

    params ["_unit"];

    _unit playAction "Gear";

    if (vehicle _unit != _unit) then {
        playSound QGVAR(Medical_FirstAid_Open_1);
    } else {
        private _pitch = random [0.6, 1, 1.4];
        playSound3D ["z\lxir\addons\medbags\data\sounds\FirstAid_Open_1.ogg", _unit]
    };

    lxir_MEDICAL_SUPPLIES_UNPACK_SUCCESS = false;
    lxir_MEDICAL_SUPPLIES_UNPACK_FAILURE = false;

    [
        2,
        [],
        { lxir_MEDICAL_SUPPLIES_UNPACK_SUCCESS = true; },
        { lxir_MEDICAL_SUPPLIES_UNPACK_FAILURE = true; },
        Hint "Unpacking Boo Boo Bag....",
        {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;

    waitUntil {if ((lxir_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (lxir_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};

    if (lxir_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {

        _unit removeItem "lxir_medbags_FirstAid";

        private _order = [1,2,3];
        private _overflow = true;

        [_unit, "ACE_fieldDressing", 6, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_quikClot", 6, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_tourniquet", 2, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_EarPlugs", 1, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_salineIV_500", 1, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_splint", 1, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_painkillers", 2, _order, _overflow] call EFUNC(common,addItem);
    };

    if (lxir_MEDICAL_SUPPLIES_UNPACK_FAILURE) exitWith {
        [_unit, QGVAR(Medical_FirstAid_Open_1)] call EFUNC(common,stop3dSound);
    };
};
