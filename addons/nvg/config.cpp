#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "lxir_common",
            "cba_main",
            "ace_nightvision",
            "tweed_uaf_21_cfg"
        };
        author = "lxir";
        authors[] = {"YONV"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgEffects.hpp"
#include "CfgWeapons.hpp"
#include "XtdGear.hpp"
