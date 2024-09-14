#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QGVAR(optic_ISM1400A7),
            QGVAR(optic_ISM1400A7_tan),
            QGVAR(optic_ISM1400A7_od),
            QGVAR(optic_ISM1400A7_green)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "lxir_main",
            "A3_UI_F",
            "cba_main",
            "cba_xeh",
            "ace_vector",
            "A3_Weapons_F",
            "cba_jr",
            "ace_xm157",
            "CUP_Weapons_West_Attachments"
        };
        skipWhenMissingDependencies = 1;
        authorUrl = URL;
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "jr_classes.hpp"