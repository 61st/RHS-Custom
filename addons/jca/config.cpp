#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "lxim_main",
            "Weapons_F_JCA_IA",
            "Weapons_F_JCA_IA_Accessories",
            "Weapons_F_JCA_IA_LongRangeRifles_AWM",
            "Weapons_F_JCA_IA_Pistols_P226",
            "Weapons_F_JCA_IA_Pistols_P320",
            "Weapons_F_JCA_IA_Rifles_M4A1",
            "Weapons_F_JCA_IA_Rifles_M4A4",
            "Weapons_F_JCA_IA_Rifles_SR10",
            "Weapons_F_JCA_IA_Rifles_SR25",
            "Weapons_F_JCA_IA_SMGs_MP5"
        };
        authorUrl = URL;
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "Cfgammo.hpp"
#include "Cfgmagazines.hpp"
#include "xtd.hpp"