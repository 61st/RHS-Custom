#include "script_component.hpp"

// Reporting AI
[
    "LXIR_AI_Reporting",
    "CHECKBOX",
    ["Spawn Reporting", "Receive a systemchat message for any groups or vehicles that fail to spawn."],
    COMPONENT_NAME,
    false,
    true,
    {

    }
] call CBA_Settings_fnc_init;

// Set DynSim
[
    "LXIR_AI_DynSim",
    "CHECKBOX",
    ["Set Dynamic Simulation", "If enabled, all units in the mission file and all new units placed by Zeus and Spawn AI will automatically have Dynamic Simulation turned on."],
    COMPONENT_NAME,
    true,
    true,
    {}
] call CBA_Settings_fnc_init;

// Initial AI
[
    "LXIR_AI_InitialAI",
    "CHECKBOX",
    ["Apply AI Skill", "This will automatically apply the below skills to AI Spawns and Zeus-placed AI. If enabled, it will also apply them to any Editor placed AI at mission start."],
    COMPONENT_NAME,
    true,
    true,
    {
        if (_this && { isserver }) then  { call lxir_ai_fnc_SetInitialAI};
    }
] call CBA_Settings_fnc_init;

// AI Aiming Accuracy
[
    "LXIR_AI_AimingAccuracy",
    "SLIDER",
    ["Min Aiming Accuracy", "Higher value means the AI will be more likely to hit the target."],
    COMPONENT_NAME,
    [0, 1, 0.10, 2, true],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI Aiming Shake
[
    "LXIR_AI_AimingShake",
    "SLIDER",
    ["Min Aiming Shake", "Higher value means the AI will be more precise."],
    COMPONENT_NAME,
    [0, 1, 0.45, 2, true],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI Aiming Speed
[
    "LXIR_AI_AimingSpeed",
    "SLIDER",
    ["Min Aiming Speed", "Higher value means the AI can rotate and stabilize its aim faster."],
    COMPONENT_NAME,
    [0, 1, 0.30, 2, true],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI Commanding
[
    "LXIR_AI_Commanding",
    "SLIDER",
    ["Commanding", "Higher value means the AI can report targets faster."],
    COMPONENT_NAME,
    [0, 1, 1.00, 2, true],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI Courage
[
    "LXIR_AI_Courage",
    "SLIDER",
    ["Courage", "Higher value means the AI is less likely to flee."],
    COMPONENT_NAME,
    [0, 1, 1.00, 2, true],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI General
[
    "LXIR_AI_General",
    "SLIDER",
    ["General", "Higher value improves the AI's decision making and general ability."],
    COMPONENT_NAME,
    [0, 1, 1.00, 2, true],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI Min Reload Speed
[
    "LXIR_AI_ReloadSpeed",
    "SLIDER",
    ["Min Reload Speed", "Higher value means the AI can switch or reload weapons faster."],
    COMPONENT_NAME,
    [0, 1, 0.50, 2, true],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI Min Spot Distance
[
    "LXIR_AI_SpotDistance",
    "SLIDER",
    ["Min Spot Distance", "Higher value means the AI is better at spotting targets."],
    COMPONENT_NAME,
    [0, 1, 0.40, 2, true],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// AI Min Spot Time
[
    "LXIR_AI_SpotTime",
    "SLIDER",
    ["Min Spot Time", "Higher value means the AI will react faster to death, damage or enemies."],
    COMPONENT_NAME,
    [0, 1, 0.20, 2, true],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// CivAI Courage
[
    "LXIR_AI_CivCourage",
    "SLIDER",
    ["Civilian Courage", "Higher value means the AI is less likely to flee. Only applies to Civilian units!"],
    COMPONENT_NAME,
    [0, 1,1, 2, true],
    true,
    {

    }
] call CBA_Settings_fnc_init;

// CivAI Fleeing
[
    "LXIR_AI_CivFleeing",
    "CHECKBOX",
    ["Civilian Fleeing", "Prevent Civilian units from fleeing."],
    COMPONENT_NAME,
    false,
    true,
    {

    }
] call CBA_Settings_fnc_init;


[
    "LXIR_Zeus_Module_AISpawnsEast",
    "CHECKBOX",
    ["Zeus Module - AI Spawn - East", "Enable the Spawn AI - East Zeus module for use with ZEN"],
    COMPONENT_NAME,
    true,
    true,
    {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["61st Mechanized Infantry Battalion", "AI Spawn - East", {_this call FUNC(moduleAISpawnsEastZeus)}, "\z\lxir\addons\media\images\Icons\AI_EAST.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_Settings_fnc_init;

[
    "LXIR_Zeus_Module_AISpawnsIndep",
    "CHECKBOX",
    ["Zeus Module - AI Spawn - Independent", "Enable the Spawn AI - Independent Zeus module for use with ZEN"],
    COMPONENT_NAME,
    true,
    true,
    {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["61st Mechanized Infantry Battalion", "AI Spawn - Independent", {_this call FUNC(moduleAISpawnsIndepZeus)}, "\z\lxir\addons\media\images\Icons\AI_INDEP.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_Settings_fnc_init;

[
    "LXIR_Zeus_Module_AISpawnsWest",
    "CHECKBOX",
    ["Zeus Module - AI Spawn - West", "Enable the Spawn AI - West Zeus module for use with ZEN"],
    COMPONENT_NAME,
    true,
    true,
    {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["61st Mechanized Infantry Battalion", "AI Spawn - West", {_this call FUNC(moduleAISpawnsWestZeus)}, "\z\lxir\addons\media\images\Icons\AI_WEST.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_Settings_fnc_init;

// CivilianSpawns Module
[
    "LXIR_Zeus_Module_CivilianSpawns",
    "CHECKBOX",
    ["Zeus Module - AI Spawn - Civilian", "Enable the Spawn AI Civilians Zeus module for use with ZEN"],
    COMPONENT_NAME,
    true,
    true,
    {
        params ["_value"];
        if ((!isClass (configFile >> "CfgPatches" >> "zen_main")) || (!_value)) exitWith {};

        ["61st Mechanized Infantry Battalion", "AI Spawn - Civilian", {_this call FUNC(moduleCivilianSpawnsZeus)}, "\z\lxir\addons\media\images\Icons\AI_CIV.paa"] call zen_custom_modules_fnc_register;
    }
] call CBA_Settings_fnc_init;
