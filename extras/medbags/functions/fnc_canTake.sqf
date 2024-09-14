#include "..\script_component.hpp"
/*

 * \lxir_medical\supplies\functions\fn_canUnpackFirstAid.sqf
 * by YonV
 *
 * check if medical supplies can be unpacked
 *
 * Arguments:
 * 0: unit - <OBJECT>
 *
 * Return:
 * <BOOLEAN>
 *
 * Example:
 * [player] call lxir_medical_supplies_fnc_canUnpackFirstAid;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_unit"];

_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {false};

// -------------------------------------------------------------------------------------------------

private _return = false;

_return = (
    ("lxir_medbags_FirstAid" in items _unit) &&
    (_unit getVariable ["ace_isUnconscious", false]) &&
    (Not visibleMap)
);

_return;
