#include "\z\lxir\addons\adminmenu\script_component.hpp"

disableSerialization;

createDialog QGVAR(adminEyeDialog);

GVAR(Triggers) = allMissionObjects "EmptyDetector";
GVAR(WaveSpawners) = allMissionObjects "lxir_ai_wavespawn";
GVAR(Garrison) = (allMissionObjects "lxir_ai_garrison" + allMissionObjects "lxir_ai_garrisonQuantity");


GVAR(adminEyeSelectedObj) = objNull;
//FUTURE - Area
