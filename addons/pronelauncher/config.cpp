#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_common",
            "lxir_main",
            "lxir_common"
        };
        author = QAUTHOR;
        authors[] = {"PiZZADOX"};
        url = URL;
        VERSION_CONFIG;

    };
};

#include "CfgEventHandlers.hpp"
#include "CfgMovesBasic.hpp"
#include "CfgMovesMaleSdr.hpp"
