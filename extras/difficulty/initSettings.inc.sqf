[
    QGVAR(armorAccuracyFactor),
    "SLIDER",
    [LSTRING(armorAccuracyFactor_DisplayName), LSTRING(armorAccuracyFactor_Description)],
    format ["61st %1", QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 2, 0.5, 2],
    true
] call CBA_fnc_addSetting;
