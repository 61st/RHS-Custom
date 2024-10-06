#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "lxir_main"
        };
        author = QAUTHOR;
        authors[] = {"veteran29"};
        VERSION_CONFIG;
    };
};

class CfgCommands {
    allowedHTMLLoadURIs[] += {
        URL
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgMainMenuSpotlight.hpp"
#include "CfgMenus.hpp"
#include "gui.hpp"
