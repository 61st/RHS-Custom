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
 * [[bob, ted], false] call lxim_main_fnc_example
 *
 * Public: No
 */

class XtdGearModels {
    class CfgWeapons {    
        class sigm7 {
            options[] = { "grip", "color" };
            label="SIG M7";
            class grip {
                label="Vertical Foregrip";
                values[] = { "none", "YES" };
                alwaysSelectable=1;
            };
            class color {
                label = "Color";
                values[] = { "Solid_Tan", "Solid_Black" };
                alwaysSelectable=1;
                class Solid_Black {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Solid_Tan {
                    label = "Tan-ish ?";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
        };
        class sigm250 {
            options[] = { "color" };
            label="SIG M250";
            class color {
                label = "Color";
                values[] = { "Solid_Tan", "Solid_Black" };
                alwaysSelectable=1;
                class Solid_Black {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Solid_Tan {
                    label = "Tan-ish ?";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class lxim_sig_XM7 {
            model = "sigm7";
            grip = "none";
            color = "Solid_Tan";
        };
        class lxim_sig_XM7_BLK {
            model = "sigm7";
            grip = "none";
            color = "Solid_Black";
        };
        class lxim_sig_XM7_G {
            model = "sigm7";
            grip = "YES";
            color = "Solid_Tan";
        };
        class lxim_sig_XM7_BLK_G {
            model = "sigm7";
            grip = "YES";
            color = "Solid_Black";
        };
        class lxim_sig_M250 {
            model = "sigm250";
            color = "Solid_Tan";
        };
        class lxim_sig_M250_BLK {
            model = "sigm250";
            color = "Solid_Black";
        };
    };
};
