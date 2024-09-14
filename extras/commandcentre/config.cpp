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
        authorUrl = URL;
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "GUI\defines.hpp"
#include "GUI\DialogStationaryRadio.hpp"
#include "GUI\DialogScreen.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"

