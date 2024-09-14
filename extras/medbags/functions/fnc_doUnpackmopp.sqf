#include "..\script_component.hpp"
/*

 * \lxir_medical\supplies\functions\fn_doUnpackDrugKit.sqf
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
 * [player] call lxir_medical_supplies_fnc_doUnpackDrugKit;
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
        playSound QGVAR(Medical_MedicKit_Open_1);
    } else {
        private _pitch = random [0.6, 1, 1.4];
        playSound3D ["z\lxir\addons\medbags\data\sounds\medickit_open_1.ogg", _unit]
    };

    lxir_MEDICAL_SUPPLIES_UNPACK_SUCCESS = false;
    lxir_MEDICAL_SUPPLIES_UNPACK_FAILURE = false;

    [
        2,
        [], 
        { lxir_MEDICAL_SUPPLIES_UNPACK_SUCCESS = true; }, 
        { lxir_MEDICAL_SUPPLIES_UNPACK_FAILURE = true; },
        Hint "Unpack MOPP Bag....",
        {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;

    waitUntil {if ((lxir_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (lxir_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};

    if (lxir_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {

        _unit removeItem "lxir_medbags_mopp";

        private _order = [3,2,1];
        private _overflow = true;

        [_unit, "lxir_uniform_mopp", 1, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "M40_Gas_mask_nbc_f2_d", 1, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
        [_unit, "ACE_adenosine", 4, _order, _overflow] call EFUNC(common,addItem);
        sleep 0.3;
    };
};