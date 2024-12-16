class Mode_FullAuto;

class rhs_russian_ak_barrel_slot;

class CfgWeapons {
    class H_HelmetB;
    class ItemCore;
    class UniformItem;
    class Rifle;
    class Uniform_Base;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };
    class UnderBarrelSlot_rail;
    class asdg_MuzzleSlot_556;
    
    class InventoryOpticsItem_Base_F;
    class rhs_acc_scope_base;
    class asdg_OpticRail1913_long;
    class GVAR(moppsuit): Uniform_Base {
        author = QAUTHOR;
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        displayName = "[61ST] MOPP Suit";
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\uniform\rhs_uniform_gorka_r_g_ca.paa";
        hiddenSelections[]={"camo1", "camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\mopp_mc.paa), QPATHTOF(data\mopp_gloves.paa)};
        class ItemInfo : UniformItem {
            uniformModel="-";
            uniformClass= QGVAR(moppsuit_item);
            containerClass="Supply80";
            mass=40;
        };
    };

    #include "weapons\CfgWeapAK.hpp"
    #include "weapons\CfgWeapAK556.hpp"
    #include "weapons\CfgWeapAKMisc.hpp"
    #include "weapons\CfgWeapAR15.hpp"
    #include "weapons\CfgWeapDMR.hpp"
    #include "weapons\CfgWeapM14.hpp"
    #include "weapons\CfgWeapMisc.hpp"
    #include "weapons\CfgWeapMisc556.hpp"
    #include "weapons\CfgWeapMuzzle.hpp"
    #include "weapons\CfgWeapSAW.hpp"
    #include "weapons\CfgWeapSCAR.hpp"
    #include "weapons\CfgLaunchers.hpp"

    class Vest_Camo_Base;
    class rhs_6b23: Vest_Camo_Base {
        class ItemInfo;
    };
    class rhs_6b43: rhs_6b23 {
        scope = 2;
        class ItemInfo: ItemInfo {
            containerClass = "Supply140";
            mass = 100;
        };
    };
    
    class rhsusf_acc_sniper_base;
    class rhsusf_acc_LEUPOLDMK4_2: rhsusf_acc_sniper_base {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class pso1_scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class rhsusf_acc_premier: rhsusf_acc_LEUPOLDMK4_2 {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class pso1_scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class rhsusf_acc_M8541: rhsusf_acc_premier {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[] = {};
                };
            };
        };
    };
    class rhsusf_acc_nxs_3515x50_base: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class nxs_scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class rhsusf_acc_nxs_3515x50f1_base: rhsusf_acc_sniper_base {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class nxs_scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class rhsusf_acc_nxs_5522x56_base: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class nxs_scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class rhsusf_acc_ACOG_MDO: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ACOGMDO {
                    visionMode[] = {};
                };
            };
        };
    };
    class rhsusf_acc_g33_xps3: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MAG {
                    visionMode[] = {};
                };
            };
        };
    };

    class opscore_sf_black: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_arid: opscore_sf_black {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_arid_amp: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_arid_full: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_black_amp: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_black_full: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_mc: opscore_sf_black {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_mc_amp: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_mc_full: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_od: opscore_sf_black {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_od_amp: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_od_full: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_rgr: opscore_sf_black {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_rgr_amp: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_rgr_full: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_tan: opscore_sf_black {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_tan_amp: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class opscore_sf_tan_full: ItemCore {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };

    class rhsusf_ach_helmet_ocp;
    class rhsusf_ach_helmet_ESS_ocp;
    class rhsusf_ach_helmet_headset_ocp;
    class rhsusf_ach_helmet_headset_ess_ocp;
    class rhsusf_ach_helmet_ocp_norotos;

    class bcb_ach_helmet_wht: rhsusf_ach_helmet_ocp {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class bcb_ach_helmet_ess_wht: rhsusf_ach_helmet_ESS_ocp {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class bcb_ach_helmet_headset_wht: rhsusf_ach_helmet_headset_ocp {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class bcb_ach_helmet_headset_ess_wht: rhsusf_ach_helmet_headset_ess_ocp {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };
    class bcb_ach_helmet_wht_norotos: rhsusf_ach_helmet_ocp_norotos {
        scope = 2;
        ace_hearing_protection = 0.7;
        ace_hearing_lowerVolume = 0.05;
    };

    //tier1
    /* 
    class Tier1_Razor_Gen2_16: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Razor_Gen2_16_ADM: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Razor_Gen2_16_Geissele: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Razor_Gen2_16_Geissele_Docter: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Razor_Gen3_110_ADM: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Razor_Gen3_110_ADM_T2: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Razor_Gen3_110_Geissele: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Razor_Gen3_110_Geissele_Docter: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_LeupoldM3A_ADM_Desert: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_LeupoldM3A_ADM_T2_Desert: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_LeupoldM3A_Geissele_Desert: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_LeupoldM3A_Geissele_Docter_Desert: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Shortdot_ADM_Black: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Shortdot_Geissele_Black: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Shortdot_Geissele_Docter_Black: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_ATACR18_ADM_Black: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_ATACR18_ADM_T1_Black: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_ATACR18_Geissele_Black: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_ATACR18_Geissele_Docter_Black: optic_lrps {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech551_3xMag_Black_Up: ItemCore  {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech551_L3_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech551_3xMag_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech551_L3_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech551_3xMag_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech551_L3_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech551_3xMag_Riser_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech551_L3_Riser_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech553_3xMag_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech553_L3_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech553_3xMag_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Eotech553_L3_TanBlack_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Eotech551 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_3xMag_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_G33_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_3xMag_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_G33_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_3xMag_Tano_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_G33_Tano_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_3xMag_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_G33_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_3xMag_Riser_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_G33_Riser_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_3xMag_Riser_Tano_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_EXPS3_0_G33_Riser_Tano_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class EXPS3 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT1_Leap_3xMag_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT1 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT1_Leap_3xMag_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT1 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT1_Leap_3xMag_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT1 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT1_Leap_3xMag_Riser_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT1 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_3xMag_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT1 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_G33_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_3xMag_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_G33_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_G33_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_3xMag_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_G33_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_3xMag_Riser_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_G33_Riser_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_G33_Riser_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_3xMag_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_3xMag_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_TanBlack_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_3xMag_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_3xMag_Riser_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_Riser_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_Riser_TanBlack_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_MicroT2_Leap_G33_Riser_Desert_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class MicroT2 {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCQ_G33_Riser_TanBlack_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCQ_G33_Riser_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCQ_G33_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCQ_G33_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCQ_G33_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCD_G33_Riser_TanBlack_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCD_G33_Riser_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCD_G33_Riser_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCD_G33_TanBlack_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCD_G33_Tan_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    class Tier1_Romeo4T_BCD_G33_Black_Up: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Romeo4T {
                    visionMode[] = {};
                };
            };
        };
    };
    */  
};
