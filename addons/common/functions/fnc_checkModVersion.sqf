#include "\z\lxir\addons\common\script_component.hpp"
/*
 * Name: lxir_common_fnc_checkModVersion
 * Author: Snippers
 *
 * Arguments:
 *  Array - Version to check
 *
 * Return:
 * Boolean
 *
 * Description:
 * Checks if lxir Mission version is larger than the input version;
 */

params [
    ["_input",[0,0,0]]
];

private _lxirersion = getMissionConfigValue ["lxir_version",[0,0,0]];

([_lxirersion,_input] call EFUNC(common,checkVersionArray));

