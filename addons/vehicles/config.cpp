#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "lxim_outlaw_base_F",
            "lxim_outlaw_d",
            "lxim_outlaw_d_V26",
            "lxim_outlaw_d_V11",
            "lxim_outlaw_d_V12",
            "lxim_outlaw_d_Vhq",
            "lxim_outlaw_g",
            "lxim_outlaw_g_rino",
            "lxim_outlaw_d_rino",
            "lxim_outlaw_g_V26",
            "lxim_outlaw_g_V11",
            "lxim_outlaw_g_V12",
            "lxim_outlaw_g_Vhq",
            "lxim_outlaw_unarmed_base_F",
            "lxim_outlaw_Unarmed_d",
            "lxim_outlaw_Unarmed_g",
            "lxim_outlaw_repair_d",
            "lxim_outlaw_repair_g",
            "lxim_outlaw_AA_d_V26",
            "lxim_outlaw_AA_d_V11",
            "lxim_outlaw_AA_d_V12",
            "lxim_outlaw_AA_d_Vhq",
            "lxim_outlaw_AA_g_V26",
            "lxim_outlaw_AA_g_V11",
            "lxim_outlaw_AA_g_V12",
            "lxim_outlaw_AA_g_Vhq",
            "lxim_B_RHINO_UP_26_G",
            "lxim_B_RHINO_UP_26_D"
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