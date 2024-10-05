#include "script_component.hpp"
// not documented: called by setting

if (!isserver) exitwith {};
{
    _class = typeOf (_x);

    _result  = call {
        if (_class isKindOf "Man") exitWith {
            private _Group = call {
                if ((typeName _x) isEqualTo "GROUP") exitWith { _x };
                if ((typeName _x) isEqualTo "OBJECT") exitWith { group _x };
                _x;
            };

            [_Group, "LXIM Default"] remoteExec ["LXIM_ai_fnc_SetUnitSkill",2];

            if (LXIM_AI_DynSim) then {
                [_Group, true] remoteExec ["enableDynamicSimulation",2];
            };
        };

        if (_class isKindOf "AllVehicles") exitWith {
            {
                [_x, "LXIM Default"] remoteExec ["LXIM_ai_fnc_SetUnitSkill",2];
            } forEach crew _x;

            if (LXIM_AI_DynSim) then {
                [group _x , true] remoteExec ["enableDynamicSimulation",2];
            };
        };
    };
} foreach Allunits;