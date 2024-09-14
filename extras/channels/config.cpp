#include "script_component.hpp"

class CfgPatches {
    class lxirFundamentals_channels {

        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
        VERSION_CONFIG;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};

class Extended_PreInit_EventHandlers {
    class lxirFundamentals_channels_Event {
        init = "call compile preprocessFileLineNumbers 'z\lxir\addons\channels\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class lxir_AI_Event {
        init = "call compile preprocessFileLineNumbers 'z\lxir\addons\channels\XEH_postInit.sqf'";
    };
};