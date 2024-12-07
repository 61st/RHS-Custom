#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "rhs_weap_m16a3_carryhandle", "rhs_weap_m16a3_carryhandle_grip", "rhs_weap_m16a3_carryhandle_grip2", "rhs_weap_m16a3_carryhandle_grip3",
            "rhs_weap_m16a3_carryhandle_M203", "rhs_weap_m16a3_carryhandle_M203_grip",
            "rhs_weap_ak101", "rhs_weap_ak101_folded", "rhs_weap_ak101_npz",
            "rhs_weap_ak101_zenitco01", "rhs_weap_ak101_zenitco01_afg", "rhs_weap_ak101_zenitco01_grip1",
            "rhs_weap_ak101_zenitco01_b33", "rhs_weap_ak101_zenitco01_b33_afg", "rhs_weap_ak101_zenitco01_b33_grip1",
            "rhs_weap_ak101_zenitco01_npz", "rhs_weap_ak101_zenitco01_npz_afg", "rhs_weap_ak101_zenitco01_npz_grip1",
            "rhs_weap_ak102", "rhs_weap_ak102_folded", "rhs_weap_ak102_npz",
            "rhs_weap_ak102_zenitco01", "rhs_weap_ak102_zenitco01_b33", "rhs_weap_ak102_zenitco01_afg",
            "rhs_weap_ak102_zenitco01_grip1", "rhs_weap_ak102_zenitco01_b33_afg", "rhs_weap_ak102_zenitco01_b33_grip1",
            "rhs_weap_ak102_zenitco01_npz", "rhs_weap_ak102_zenitco01_npz_afg", "rhs_weap_ak102_zenitco01_npz_grip1"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "lxim_main",
            "wb_rhs_main_prep",
            "cba_main",
            "rhs_main_loadorder",
            "rhsgref_main_loadorder",
            "rhssaf_main_loadorder",
            "rhsusf_main_loadorder"
        };
        author = QAUTHOR;
        authors[] = {
            "johnb43",
            "ThePointForward",
            "NeilZar"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgAcc.hpp"
#include "CfgAmmo.hpp"
#include "CfgAmmoBelts.hpp"
#include "CfgMagazineWells.hpp"

class CfgFunctions {
    class RHS {
        class functions {
            class acc_mtz {
                file = PATH_TO_FUNC(rhs_mtz);
            };
            class acc_mtz_handler {
                file = PATH_TO_FUNC(rhs_mtz_dismount);
            };

            class acc_npz {
                file = PATH_TO_FUNC(rhs_npz);
            };
            class acc_npz_handler {
                file = PATH_TO_FUNC(rhs_npz_dismount);
            };

            class accGripod {
                file = PATH_TO_FUNC(accGripod);
            };
            class accGripod_change {
                file = PATH_TO_FUNC(accGripod_change);
            };

            class fold_PP {
                file = PATH_TO_FUNC(rhs_fold);
            };
            class fold_weapon {
                file = PATH_TO_FUNC(rhs_fold);
            };
        };
    };
};

class CfgMagazines {
    class CA_Magazine;
    class 30Rnd_556x45_Stanag;
    class rhs_mag_30Rnd_556x45_M855_Stanag;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag;
    class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red;
    class rhs_mag_30Rnd_556x45_Mk262_Stanag;
    class rhs_mag_30Rnd_556x45_Mk318_Stanag;

    #include "magazines\CfgMagAK.hpp"
    #include "magazines\CfgMagNATO556.hpp"
    #include "magazines\CfgMagAK556.hpp"
    #include "magazines\CfgMagMisc.hpp"
    #include "magazines\CfgMagRifleMisc.hpp"
};

class BettIR_Config {
    class CompatibleAttachments {
        delete rhs_acc_perst3_2dp_light_h;

        class __base_rightSiderailPointer;
        class rhs_acc_perst1ik: __base_rightSiderailPointer {};
        class rhs_acc_perst1ik_ris: __base_rightSiderailPointer {};
        class rhs_acc_perst3_2dp_h: __base_rightSiderailPointer {};
    };

    class CompatibleNightvisionGoggles {
        class NVGoggles;
        class rhsusf_ANVIS: NVGoggles {};
        class rhsusf_anvis_nvg_bc_caps: NVGoggles {};
    };
};