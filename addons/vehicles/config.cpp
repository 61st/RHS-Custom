#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "lxim_outlaw_Unarmed_d",
            "lxim_outlaw_Unarmed_g",
            "lxim_outlaw_d",
            "lxim_outlaw_d_V21",
            "lxim_outlaw_d_V22",
            "lxim_outlaw_d_Vhq",
            "lxim_outlaw_g",
            "lxim_outlaw_g_V21",
            "lxim_outlaw_g_V22",
            "lxim_outlaw_g_Vhq",
            "lxim_outlaw_repair_d",
            "lxim_outlaw_repair_g",
            "lxim_thunder_d",
            "lxim_thunder_d_V26",
            "lxim_thunder_g",
            "lxim_thunder_g_V26"
        };
        weapons[] = {"missiles_titan_aa_2Rnd_Pan"};
        magazines[]={"2Rnd_Titan_long_missiles_Pan"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "lxim_main",
            "A3_Static_F",
            "A3_Static_F_Gamma",
            "A3_Weapons_F_Exp",
            "A3_Weapons_F_Launchers_Titan",
            "A3_Data_F",
            "A3_Air_F",
            "A3_Armor_F",
            "A3_Soft_F",
            "A3_Armor_F_APC_Wheeled_03",
            "A3_Armor_F_Gamma"
        };
        authorUrl = URL;
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"