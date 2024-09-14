#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"lxir_main"};
        author = QAUTHOR;
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
