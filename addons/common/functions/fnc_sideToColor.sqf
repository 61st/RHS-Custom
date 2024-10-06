/*
 * Name: lxir_common_fnc_sideToColor
 * Author: Snippers
 *
 * Arguments:
 * side
 *
 * Return:
 * array: color array
 *
 * Description:
 * Will return the color of the inputted side.
 */

//Cache vars for speed
if (isNil "lxir_common_blufor_color") then {
    lxir_common_blufor_color = [blufor] call bis_fnc_sideColor;
    lxir_common_opfor_color = [opfor] call bis_fnc_sideColor;
    lxir_common_indep_color = [independent] call bis_fnc_sideColor;
    lxir_common_civ_color = [civilian] call bis_fnc_sideColor;
    lxir_common_empty_color = [sideUnknown] call bis_fnc_sideColor;
};

switch _this do {
    case blufor: {lxir_common_blufor_color};
    case opfor: {lxir_common_opfor_color};
    case independent: {lxir_common_indep_color};
    case civilian: {lxir_common_civ_color};
    default {lxir_common_empty_color};
};
