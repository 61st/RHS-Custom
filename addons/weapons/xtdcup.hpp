/*
 * Author: AUTHOR
 * Function description
 *
 * Arguments:
 * 0: Objects <ARRAY>
 * 1: All <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[bob, ted], false] call lxir_main_fnc_example
 *
 * Public: No
 */


class XtdGearModels {
    class CfgWeapons {    
        class cupm1014_entry {
            options[] = { "grip" };
            label="M1014 Entry";
            class grip {
                label="Vertical Foregrip";
                values[] = { "none", "YES" };
                alwaysSelectable=1;
            };
        };
        class cupm1014 {
            options[] = { "grip", "stock" };
            label="M1014";
            class grip {
                label="Vertical Foregrip";
                values[] = { "none", "YES" };
                alwaysSelectable=1;
            };
            class stock {
                label = "Stock";
                values[] = { "telescopic", "solid" };
                alwaysSelectable=1;
                class telescopic {
                    label = "Telescopic";
                };
                class solid {
                    label = "Solid";
                };
            };
        };
        class cupscar {
            options[] = { "Caliber", "Camo", "Variant", "Under" };
            label = "SCAR-H";
            class Camo {
                alwaysSelectable = 1;
                values[] = {
                    "Tan",
                    "Black",
                    "Woodland"
                };
                class Tan {
                    label = "Tan";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Woodland {
                    label = "Woodland";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class Black {
                    label = "Black";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
            };
            class Variant {
                alwaysSelectable = 1;
                values[] = {
                    "Standard",
                    "CQC",
                    "SV"
                };
            };
            class Under {
                alwaysSelectable = 1;
                values[] = {
                    "None",
                    "Grip",
                    "EGLM",
                    "AFG"                    
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class CUP_sgun_M1014_Entry {
            model = "cupm1014_entry";
            grip = "none";
        };
        class CUP_sgun_M1014_Entry_vfg {
            model = "cupm1014_entry";
            grip = "YES";
        };
        class CUP_sgun_M1014 {
            model = "cupm1014";
            grip = "none";
            stock = "telescopic";
        };
        class CUP_sgun_M1014_vfg {
            model = "cupm1014";
            grip = "YES";
            stock = "telescopic";
        };
        class CUP_sgun_M1014_solidstock {
            model = "cupm1014";
            grip = "none";
            stock = "solid";
        };
        class CUP_arifle_Mk17_CQC {
            model = "cupscar";
            camo = "Tan";
            variant = "CQC";
            under = "None";
        };
        class CUP_arifle_Mk17_CQC_black {
            model = "cupscar";
            camo = "Black";
            variant = "CQC";
            under = "None";
        };
        class CUP_arifle_Mk17_CQC_woodland {
            model = "cupscar";
            camo = "Woodland";
            variant = "CQC";
            under = "None";
        };
        class CUP_arifle_Mk17_CQC_AFG {
            model = "cupscar";
            camo = "Tan";
            variant = "CQC";
            under = "AFG";
        };
        class CUP_arifle_Mk17_CQC_AFG_black {
            model = "cupscar";
            camo = "Black";
            variant = "CQC";
            under = "AFG";
        };
        class CUP_arifle_Mk17_CQC_AFG_woodland {
            model = "cupscar";
            camo = "Woodland";
            variant = "CQC";
            under = "AFG";
        };
        class CUP_arifle_Mk17_CQC_FG {
            model = "cupscar";
            camo = "Tan";
            variant = "CQC";
            under = "Grip";
        };
        class CUP_arifle_Mk17_CQC_FG_black {
            model = "cupscar";
            camo = "Black";
            variant = "CQC";
            under = "Grip";
        };
        class CUP_arifle_Mk17_CQC_FG_woodland {
            model = "cupscar";
            camo = "Woodland";
            variant = "CQC";
            under = "Grip";
        };
        class CUP_arifle_Mk17_CQC_SFG {
            model = "cupscar";
            camo = "Tan";
            variant = "CQC";
            under = "Surefire";
        };
        class CUP_arifle_Mk17_CQC_SFG_black {
            model = "cupscar";
            camo = "Black";
            variant = "CQC";
            under = "Surefire";
        };
        class CUP_arifle_Mk17_CQC_SFG_woodland {
            model = "cupscar";
            camo = "Woodland";
            variant = "CQC";
            under = "Surefire";
        };
        class CUP_arifle_Mk17_CQC_EGLM {
            model = "cupscar";
            camo = "Tan";
            variant = "CQC";
            under = "EGLM";
        };
        class CUP_arifle_Mk17_CQC_EGLM_black {
            model = "cupscar";
            camo = "Black";
            variant = "CQC";
            under = "EGLM";
        };
        class CUP_arifle_Mk17_CQC_EGLM_woodland {
            model = "cupscar";
            camo = "Woodland";
            variant = "CQC";
            under = "EGLM";
        };
        class CUP_arifle_Mk17_STD {
            model = "cupscar";
            camo = "Tan";
            variant = "Standard";
            under = "None";
        };
        class CUP_arifle_Mk17_STD_black {
            model = "cupscar";
            camo = "Black";
            variant = "Standard";
            under = "None";
        };
        class CUP_arifle_Mk17_STD_woodland {
            model = "cupscar";
            camo = "Woodland";
            variant = "Standard";
            under = "None";
        };
        class CUP_arifle_Mk17_STD_AFG {
            model = "cupscar";
            camo = "Tan";
            variant = "Standard";
            under = "AFG";
        };
        class CUP_arifle_Mk17_STD_AFG_black {
            model = "cupscar";
            camo = "Black";
            variant = "Standard";
            under = "AFG";
        };
        class CUP_arifle_Mk17_STD_AFG_woodland {
            model = "cupscar";
            camo = "Woodland";
            variant = "Standard";
            under = "AFG";
        };
        class CUP_arifle_Mk17_STD_FG {
            model = "cupscar";
            camo = "Tan";
            variant = "Standard";
            under = "Grip";
        };
        class CUP_arifle_Mk17_STD_FG_black {
            model = "cupscar";
            camo = "Black";
            variant = "Standard";
            under = "Grip";
        };
        class CUP_arifle_Mk17_STD_FG_woodland {
            model = "cupscar";
            camo = "Woodland";
            variant = "Standard";
            under = "Grip";
        };
        class CUP_arifle_Mk17_STD_SFG {
            model = "cupscar";
            camo = "Tan";
            variant = "Standard";
            under = "Surefire";
        };
        class CUP_arifle_Mk17_STD_SFG_black {
            model = "cupscar";
            camo = "Black";
            variant = "Standard";
            under = "Surefire";
        };
        class CUP_arifle_Mk17_STD_SFG_woodland {
            model = "cupscar";
            camo = "Woodland";
            variant = "Standard";
            under = "Surefire";
        };
        class CUP_arifle_Mk17_STD_EGLM {
            model = "cupscar";
            camo = "Tan";
            variant = "Standard";
            under = "EGLM";
        };
        class CUP_arifle_Mk17_STD_EGLM_black {
            model = "cupscar";
            camo = "Black";
            variant = "Standard";
            under = "EGLM";
        };
        class CUP_arifle_Mk17_STD_EGLM_woodland {
            model = "cupscar";
            camo = "Woodland";
            variant = "Standard";
            under = "EGLM";
        };
        class CUP_arifle_Mk20 {
            model = "cupscar";
            camo = "Tan";
            variant = "SV";
            under = "None";
        };
        class CUP_arifle_Mk20_black {
            model = "cupscar";
            camo = "Black";
            variant = "SV";
            under = "None";
        };
        class CUP_arifle_Mk20_woodland {
            model = "cupscar";
            camo = "Woodland";
            variant = "SV";
            under = "None";
        };
    };
};