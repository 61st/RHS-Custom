#include "script_component.hpp"
/*
 * Author: AUTHOR
 * Function description
 *
 * Arguments:
 * 0: Objects <ARRAY>
 * 1: All <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[bob, ted], false] call lxir_main_fnc_example
 *
 * Public: No
 */

[
    QGVAR(showNotifcations),
    "CHECKBOX",
    ["Show 61st system chat notifications", "False should disable most notifcations, can use to make clean recordings."],
    [COMPONENT_NAME, "Admin Chat"],
    true
] call cba_settings_fnc_init;
