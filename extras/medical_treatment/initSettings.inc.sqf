#include "script_component.hpp"

[
    QGVAR(fatalInjuriesCardiacArrestTimeCoefficient),
    "SLIDER",
    ["Fatal Injuries Cardiac Arrest Time Coefficient", "Coefficient for controlling the Cardiac Arrest Time on fatal injuries when 'Fatal Injuries' is NOT 'Always'."],
    COMPONENT_NAME,
    [0.01, 1, 0.2, 2],
    true // isGlobal
] call CBA_fnc_addSetting;