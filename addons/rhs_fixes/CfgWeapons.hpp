class Mode_FullAuto;

class rhs_russian_ak_barrel_slot;

class CfgWeapons {
    class H_HelmetB;
    class ItemCore;
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };
    class UnderBarrelSlot_rail;
    class asdg_MuzzleSlot_556;
    
    class InventoryOpticsItem_Base_F;
    class rhs_acc_scope_base;
    class asdg_OpticRail1913_long;
    

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
};
