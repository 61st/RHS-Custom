#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"lxir_common"};
        author = "lxir";
        authors[] = {"PabstMirror"};
        authorUrl = "https://github.com/BourbonWarfare/lxir";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "Interrupt_adminComs.hpp"
