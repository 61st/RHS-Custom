class XtdGearModels {
    class CfgWeapons {
        class w28OCPSummer {
            options[] = { "flag","sleeve","Knee","tuck","blouse","fpock"};
            label = "OCP Summer";
            class flag {
                label = "Flag";
                alwaysSelectable = 1;
                values[] = {"None","US"};
                class None {image = "";};
                class US {image = "z\lxim\addons\media\images\patches\usflag.paa";};
            };
            class sleeve {
                label = "Sleeves";
                alwaysSelectable = 1;
                values[] = {"full","NOE","hass"};
                class full {label = "Full";};
                class NOE {label = "No Effort";};
                class hass {label = "Half Ass";};
            };
            class Knee {
                label = "Knee Pads";
                alwaysSelectable = 1;
                values[] = {"Yes","No"};
            };
            class tuck {
                label = "Tucked";
                alwaysSelectable = 1;
                values[] = {"Yes","No"};
            };
            class blouse {
                label = "Bloused";
                alwaysSelectable = 1;
                values[] = {"Yes","No"};
            };
            class fpock {
                label = "Front Pockets";
                alwaysSelectable = 1;
                values[] = {"Yes","No"};
            };
            textureOptions[] = { "patch" };
            class patch {
                label = "Skill Tab";
                values[] = {"None","O11", "O12", "OHQ", "RINO", "PHX", "THD1", "THD2","THD3","MED", "EOD", "JTAC", "FLIGHTMED", "FLIGHTCREW", "PILOT", "PILOT1","CMD", "LEAD", "AIRA", "AIRB","PATH", "ZEUS"};
                hiddenselection = "insignia";
                class None {
                    texture = "";
                };
                class MED {
                    texture = "z\lxim\addons\media\images\patches\medic.paa";
                    label = "Medic";
                };
                class EOD {
                    texture = "z\lxim\addons\media\images\patches\eod.paa";
                    label = "EOD";
                };
                class JTAC {
                    texture = "z\lxim\addons\media\images\patches\jtac.paa";
                    label = "JTAC";
                };
                class O11 {
                    texture = "z\lxim\addons\media\images\patches\O11.paa";
                    label = "Outlaw 1/1";
                };
                class O12 {
                    texture = "z\lxim\addons\media\images\patches\O12.paa";
                    label = "Outlaw 1/2";
                };
                class OHQ {
                    texture = "z\lxim\addons\media\images\patches\HQ.paa";
                    label = "Outlaw HQ";
                };
                class LEAD {
                    texture = "z\lxim\addons\media\images\patches\lead.paa";
                    label = "Leader";
                };
                class CMD {
                    texture = "z\lxim\addons\media\images\patches\cmd.paa";
                    label = "Command";
                };
                class RINO {
                    texture = "z\lxim\addons\media\images\patches\rhino.paa";
                    label = "Rhino";
                };
                class AIRA {
                    texture = "z\lxim\addons\media\images\patches\airassult.paa";
                    label = "Air Assault";
                };
                class AIRB {
                    texture = "z\lxim\addons\media\images\patches\airborne.paa";
                    label = "Airborne";
                };
                class PATH {
                    texture = "z\lxim\addons\media\images\patches\path.paa";
                    label = "PathFinder";
                };
                class FLIGHTMED {
                    texture = "z\lxim\addons\media\images\patches\flightmed.paa";
                    label = "Flight Medic";
                };
                class FLIGHTCREW {
                    texture = "z\lxim\addons\media\images\patches\flightcrew.paa";
                    label = "Flight Crew";
                };
                class PILOT {
                    texture = "z\lxim\addons\media\images\patches\prophead.paa";
                    label = "Pilot";
                };
                class PILOT1 {
                    texture = "z\lxim\addons\media\images\patches\badges.paa";
                    label = "Pilot Alt";
                };
                class ZEUS {
                    texture = "z\lxim\addons\media\images\patches\zeus.paa";
                    label = "Zeus";
                };
                class PHX {
                    texture = "z\lxim\addons\media\images\patches\phoenix.paa";
                    label = "Phoenix";
                };
                class THD1 {
                    texture = "z\lxim\addons\media\images\patches\thunder1.paa";
                    label = "Thunder ";
                };
                class THD2 {
                    texture = "z\lxim\addons\media\images\patches\thunder2.paa";
                    label = "Thunder Alt1 ";
                };
                class THD3 {
                    texture = "z\lxim\addons\media\images\patches\thunder3.paa";
                    label = "Thunder Alt2";
                };
            };
        };
        class w28ech {
            options[] = { "style","norotos","band","scrim","peltors","psq","ess"};
            label = "ECH";
            class style {
                label = "Style";
                alwaysSelectable = 1;
                values[] = {"std","alt","alt2"};
            };
            class norotos {
                label = "Norotos";
                alwaysSelectable = 1;
                values[] = {"Yes","No"};
            };
            class band {
                label = "Band";
                alwaysSelectable = 1;
                values[] = {"Yes","No"};
            };
            class scrim {
                label = "Scrim";
                alwaysSelectable = 1;
                values[] = {"Yes","No"};
            };
            class peltors {
                label = "Peltors";
                alwaysSelectable = 1;
                values[] = {"Yes","No"};
            };
            class psq {
                label = "PSQ";
                alwaysSelectable = 1;
                values[] = {"Yes","No"};
            };
            class ess {
                label = "ESS";
                alwaysSelectable = 1;
                values[] = {"No","Up","Covered","Down","Umm"};
            };
        };
        class w28ihps {
            options[] = { "ocp","scrim","peltors","rail","ess" };
            label = "IHPS";
            class ocp {
                label = "OCP Cover";
                alwaysSelectable = 1;
                values[] = {"Yes","No"};
            };
            class scrim {
                label = "Scrim";
                alwaysSelectable = 1;
                values[] = {"Yes","No"};
            };
            class peltors {
                label = "Peltors";
                alwaysSelectable = 1;
                values[] = {"Yes","No"};
            };
            class rail {
                label = "Rail";
                alwaysSelectable = 1;
                values[] = {"Yes","No"};
            };
            class ess {
                label = "ESS";
                alwaysSelectable = 1;
                values[] = {"Yes","No"};
            };
        };
        class w28fleece {
            options[] = { "color" };
            label = "Fleece";
            class color {
                label = "OCP Cover";
                alwaysSelectable = 1;
                values[] = {"Black","OD"};
                class Black {image = "z\aceax\addons\gearinfo\data\camo\blk.paa";};
                class OD {image = "z\aceax\addons\gearinfo\data\camo\sage.paa";};           
                };
        };
        class w28vest {
            options[] = { "vest", "style" };
            label = "Modular Body Armor";
            class vest {
                label = "Model";
                alwaysSelectable = 1;
                values[] = {"MK4","MK2"};
            };
            class style {
                label = "Style";
                alwaysSelectable = 1;
                values[] = {"nutpro","basic","style1","style2","style3","249","240","side1","prc2","style4","style5","side2","prc2","40mm1","40mm2","40mm3"};
            };

        };
        class w28psq42 {
            options[] = { "camo", "style" };
            label = "AN/PSQ-42";
            class camo {
                alwaysSelectable = 1;
                values[] = { "blk", "od" };
                class blk {image = "z\aceax\addons\gearinfo\data\camo\blk.paa";};
                class od {image = "z\aceax\addons\gearinfo\data\camo\sage.paa";};  
            };
            class style {
                label = "Style";
                alwaysSelectable = 1;
                values[] = { "Base", "Eye Cups", "Lens Caps", };
            };
        };
    };
    
    class CfgVehicles {
        class w28Sturmgepak {
            options[] = { "Option" };
            label = "MOLLE Sturmgepak ";
            class Option {
                values[] = {"Base","Thermos OCP","Thermos OD","Thermos Coyote", "Etool"}; 
            };
        };
        class w28Sturmgepakrdo {
            options[] = { "Option" };
            label = "MOLLE Sturmgepak Radio ";
            class Option {
                values[] = {"Base","Camel Pack"}; 
            };
        };
        class w28Scamel_thermos {
            options[] = { "Camo" };
            label = "MOLLE Sturmgepak Radio ";
            class Camo {
                values[] = {"OCP","OD","Coyote"};
                class OCP {image = "z\aceax\addons\gearinfo\data\camo\ocp.paa";};
                class OD {image = "z\aceax\addons\gearinfo\data\camo\sage.paa";};  
                class Coyote {image = "z\aceax\addons\gearinfo\data\camo\khk.paa";};  
            };
        };
        class w28Sasspack {
            options[] = { "Option" };
            label = "MOLLE AssPack ";
            class Option {
                values[] = {"Base","low","Thermos OCP","Thermos Coyote","Thermos OD","Hydration"};
            };
        };
        class w28Swasser {
            options[] = { "Option" };
            label = "MOLLE AssPack ";
            class Option {
                values[] = {"OCP_1","OCP_2","Coyote_1","Coyote_2","OD_1","OD_2"};
                class OD_1 {image = "z\aceax\addons\gearinfo\data\camo\sage.paa";};
                class OCP_1 {image = "z\aceax\addons\gearinfo\data\camo\ocp.paa";};  
                class Coyote_1 {image = "z\aceax\addons\gearinfo\data\camo\khk.paa";}; 
                class OD_2 {image = "z\aceax\addons\gearinfo\data\camo\sage.paa";};
                class OCP_2 {image = "z\aceax\addons\gearinfo\data\camo\ocp.paa";};  
                class Coyote_2 {image = "z\aceax\addons\gearinfo\data\camo\khk.paa";}; 
            };
        };
    };
    
    class CfgGlasses {
        class G_comba {
            options[] = {"style" }; // Always computed, do not edit
            label = "Combat Gloves";
            // class cut {
            //     label = "cut";
            //     alwaysSelectable = 1;
            //     values[] = { "no", "yes" }; // Always computed, do not edit
            // };
            class style {
                label = "style";
                alwaysSelectable = 1;
                values[] = { "1", "1_cut", "2", "2_cut" }; // Always computed, do not edit
            };
        };
        class G_LEN_TG1 {
            options[] = { "lens" }; // Always computed, do not edit
            label = "Eyepros";
            class lens {
                label = "lens";
                alwaysSelectable = 1;
                values[] = { "blue", "clear", "orange", "white" }; // Always computed, do not edit
            };
        };
        class G_Nomex {
            // options[] = { "cut", "fold", "long", "newOption", "nomex", "style" }; // Always computed, do not edit
            options[] = { "style" }; // Always computed, do not edit
            label = "Nomex Gloves";
            // class cut {
            //     label = "cut";
            //     alwaysSelectable = 1;
            //     values[] = { "no", "yes" }; // Always computed, do not edit
            // };
            // class fold {
            //     label = "fold";
            //     alwaysSelectable = 1;
            //     values[] = { "no", "yes" }; // Always computed, do not edit
            // };
            // class long {
            //     label = "long";
            //     alwaysSelectable = 1;
            //     values[] = { "no", "none", "yes" }; // Always computed, do not edit
            // };
            // class nomex {
            //     label = "nomex";
            //     alwaysSelectable = 1;
            //     values[] = { "G_Nomex_1", "G_Nomex_2", "G_Nomex_tan", "G_Nomex_tan_2", "none", "yes" }; // Always computed, do not edit
            // };
            class style {
                label = "style";
                alwaysSelectable = 1;
                values[] = { "1", "1_cut", "1_fold", "1_long", "2", "2_cut", "2_fold", "2_long", "G_Nomex_1", "G_Nomex_2", "G_Nomex_tan", "G_Nomex_tan_2", "tan_1", "tan_2", "tan_2_cut", "tan_2_fold", "tan_2_long", "tan_cut", "tan_fold", "tan_long" }; // Always computed, do not edit
            };
        };
        class G_oak {
            options[] = { "cut", "style" }; // Always computed, do not edit
            label = "Oakley Assault Gloves";
            class cut {
                label = "cut";
                alwaysSelectable = 1;
                values[] = { "no", "yes" }; // Always computed, do not edit
            };
            class style {
                label = "style";
                alwaysSelectable = 1;
                values[] = { "1", "2" }; // Always computed, do not edit
            };
        };
        class G_tweed_ESS {
            options[] = { "camo" }; // Always computed, do not edit
            label = "ESS Goggles";
            class camo {
                alwaysSelectable = 1;
                values[] = { "Green", "tan" }; // Always computed, do not edit
            };
        };
        class G_tweed_tacticool {
            options[] = { "Combat Gloves", "lens", "nomex", "oakley", "peltor" }; // Always computed, do not edit
            label = "Eyepros";
            class CombatGloves {
                label = "Combat Gloves";
                alwaysSelectable = 1;
                values[] = { "no", "yes" }; // Always computed, do not edit
            };
            class lens {
                label = "lens";
                alwaysSelectable = 1;
                values[] = { "blue", "clear", "orange", "white" }; // Always computed, do not edit
            };
            class nomex {
                label = "nomex";
                alwaysSelectable = 1;
                values[] = { "no", "yes" }; // Always computed, do not edit
            };
            class oakley {
                label = "oakley";
                alwaysSelectable = 1;
                values[] = { "no", "yes" }; // Always computed, do not edit
            };
            class peltor {
                label = "peltor";
                alwaysSelectable = 1;
                values[] = { "no", "yes" }; // Always computed, do not edit
            };
        };
    };
    
};

class XtdGearInfos {
    class CfgWeapons {
        class H_tweed_Hat_fleece {
            model = "w28fleece";
            color = "Black";
        };
        class H_tweed_Hat_fleece_od3 {
            model = "w28fleece";
            color = "OD";
        };
        //ACU
        class U_tweed_acu_summer_ocp {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "full";
            knee = "No";
            tuck = "No";
            blouse = "Yes";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_jedi {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "NOE";
            knee = "No";
            tuck = "No";
            blouse = "Yes";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_trop {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "hass";
            knee = "No";
            tuck = "No";
            blouse = "Yes";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_blench {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "full";
            knee = "No";
            tuck = "No";
            blouse = "Yes";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_blench_jedi {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "NOE";
            knee = "No";
            tuck = "No";
            blouse = "Yes";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_blench_trop {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "hass";
            knee = "No";
            tuck = "No";
            blouse = "Yes";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_tuck {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "full";
            knee = "No";
            tuck = "Yes";
            blouse = "Yes";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_tuck_jedi {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "NOE";
            knee = "No";
            tuck = "Yes";
            blouse = "Yes";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_tuck_trop {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "hass";
            knee = "No";
            tuck = "Yes";
            blouse = "Yes";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_blench_tuck {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "full";
            knee = "No";
            tuck = "Yes";
            blouse = "Yes";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_blench_tuck_jedi {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "NOE";
            knee = "No";
            tuck = "Yes";
            blouse = "Yes";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_blench_tuck_trop {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "hass";
            knee = "No";
            tuck = "Yes";
            blouse = "Yes";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_tuck_unbl {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "full";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_tuck_unbl_trop {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "hass";
            knee = "No";
            tuck = "Yes";
            blouse = "No";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_tuck_unbl_jedi {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "NOE";
            knee = "No";
            tuck = "Yes";
            blouse = "No";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_blench_tuck_unbl {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "full";
            knee = "No";
            tuck = "Yes";
            blouse = "No";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_blench_tuck_unbl_jedi {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "NOE";
            knee = "No";
            tuck = "Yes";
            blouse = "No";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_blench_tuck_unbl_trop {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "hass";
            knee = "No";
            tuck = "Yes";
            blouse = "No";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_crye {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "full";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "Yes";
        };
        class U_tweed_acu_summer_ocp_crye_jedi {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "NOE";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "Yes";
        };
        class U_tweed_acu_summer_ocp_crye_trop {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "hass";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "Yes";
        };
        class U_tweed_acu_summer_ocp_blench_crye {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "full";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "Yes";
        };
        class U_tweed_acu_summer_ocp_blench_crye_jedi {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "NOE";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "Yes";
        };
        class U_tweed_acu_summer_ocp_blench_crye_trop {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "hass";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "Yes";
        };
        class U_tweed_acu_summer_ocp_unbl {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "full";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_unbl_jedi {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "NOE";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_unbl_trop {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "hass";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_blench_unbl {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "full";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_blench_unbl_jedi {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "NOE";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_blench_unbl_trop {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "hass";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "No";
        };
        class U_tweed_acu_summer_ocp_crye_knee {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "full";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "Yes";
        };
        class U_tweed_acu_summer_ocp_crye_knee_jedi {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "NOE";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "Yes";
        };
        class U_tweed_acu_summer_ocp_crye_knee_trop {
            model = "w28OCPSummer";
            flag = "US";
            sleeve = "hass";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "Yes";
        };
        class U_tweed_acu_summer_ocp_blench_crye_knee {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "full";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "Yes";
        };
        class U_tweed_acu_summer_ocp_blench_crye_knee_jedi {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "NOE";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "Yes";
        };
        class U_tweed_acu_summer_ocp_blench_crye_knee_trop {
            model = "w28OCPSummer";
            flag = "None";
            sleeve = "hass";
            knee = "No";
            tuck = "No";
            blouse = "No";
            fpock = "Yes";
        };
        //ECH
        class H_tweed_ech_nor_OCP_alt {
            model = "w28ech";
            style = "alt";
            norotos = "Yes";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_nor_OCP_b_alt {
            model = "w28ech";
            style = "alt";
            norotos = "Yes";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_nor_OCP_b_ESS_2 {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "Covered";
        };
        class H_tweed_ech_nor_OCP_b_ESS {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "Up";
        };
        class H_tweed_ech_nor_OCP_b_licht {
            model = "w28ech";
            style = "alt2";
            norotos = "Yes";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_nor_OCP_b {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_nor_OCP_ESS_2 {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "Covered";
        };
        class H_tweed_ech_nor_OCP_ESS_low_b {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "Down";
        };
        class H_tweed_ech_nor_OCP_ESS_low {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "Down";
        };
        class H_tweed_ech_nor_OCP_ESS {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "Up";
        };
        class H_tweed_ech_nor_OCP_licht {
            model = "w28ech";
            style = "alt2";
            norotos = "Yes";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_nor_OCP_scrim_ess {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "No";
            scrim = "Yes";
            peltors = "No";
            psq = "No";
            ess = "Up";
        };
        class H_tweed_ech_nor_OCP_scrim_TASC_ESS {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "No";
            scrim = "Yes";
            peltors = "Yes";
            psq = "No";
            ess = "Up";
        };
        class H_tweed_ech_nor_OCP_scrim_TASC {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "No";
            scrim = "Yes";
            peltors = "Yes";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_nor_OCP_scrim {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "No";
            scrim = "Yes";
            peltors = "No";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_nor_OCP_TASC_b_ESS_2 {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "Yes";
            scrim = "No";
            peltors = "Yes";
            psq = "No";
            ess = "Covered";
        };
        class H_tweed_ech_nor_OCP_TASC_b_ESS_3 {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "Yes";
            scrim = "No";
            peltors = "Yes";
            psq = "No";
            ess = "Umm";
        };
        class H_tweed_ech_nor_OCP_TASC_b_ESS {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "Yes";
            scrim = "No";
            peltors = "Yes";
            psq = "No";
            ess = "Up";
        };
        class H_tweed_ech_nor_OCP_TASC_b {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "Yes";
            scrim = "No";
            peltors = "Yes";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_nor_OCP_TASC_ESS_2 {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "No";
            scrim = "No";
            peltors = "Yes";
            psq = "No";
            ess = "Covered";
        };
        class H_tweed_ech_nor_OCP_TASC_ESS {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "No";
            scrim = "No";
            peltors = "Yes";
            psq = "No";
            ess = "Up";
        };
        class H_tweed_ech_nor_OCP_TASC {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "No";
            scrim = "No";
            peltors = "Yes";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_nor_OCP {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_OCP_alt {
            model = "w28ech";
            style = "alt";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_OCP_b_alt {
            model = "w28ech";
            style = "alt";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_OCP_b_ESS_2 {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "Covered";
        };
        class H_tweed_ech_OCP_b_ESS {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "Up";
        };
        class H_tweed_ech_OCP_b_licht {
            model = "w28ech";
            style = "alt2";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_OCP_b {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_OCP_ESS_2 {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "Covered";
        };
        class H_tweed_ech_OCP_ESS_low_b {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "Down";
        };
        class H_tweed_ech_OCP_ESS_low {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "Down";
        };
        class H_tweed_ech_OCP_ESS {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "Up";
        };
        class H_tweed_ech_OCP_licht {
            model = "w28ech";
            style = "alt2";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_OCP_scrim_ess {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "Yes";
            peltors = "No";
            psq = "No";
            ess = "Up";
        };
        class H_tweed_ech_OCP_scrim_TASC_ESS {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "Yes";
            peltors = "Yes";
            psq = "No";
            ess = "Up";
        };
        class H_tweed_ech_OCP_scrim_TASC {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "Yes";
            peltors = "Yes";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_OCP_scrim {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "Yes";
            peltors = "No";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_OCP_TASC_b_ESS_2 {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "Yes";
            psq = "No";
            ess = "Covered";
        };
        class H_tweed_ech_OCP_TASC_b_ESS_3 {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "Yes";
            psq = "No";
            ess = "Umm";
        };
        class H_tweed_ech_OCP_TASC_b_ESS {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "Yes";
            psq = "No";
            ess = "Up";
        };
        class H_tweed_ech_OCP_TASC_b {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "Yes";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_OCP_TASC_ESS_2 {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "Yes";
            psq = "No";
            ess = "Covered";
        };
        class H_tweed_ech_OCP_TASC_ESS {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "Yes";
            psq = "No";
            ess = "Up";
        };
        class H_tweed_ech_OCP_TASC {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "Yes";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_OCP {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "No";
            ess = "No";
        };
        class H_tweed_ech_psq_OCP_alt {
            model = "w28ech";
            style = "alt";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "Yes";
            ess = "No";
        };
        class H_tweed_ech_psq_OCP_b_alt {
            model = "w28ech";
            style = "alt";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "Yes";
            ess = "No";
        };
        class H_tweed_ech_psq_OCP_b_ESS_2 {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "Yes";
            ess = "Covered";
        };
        class H_tweed_ech_psq_OCP_b_ESS {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "Yes";
            ess = "Up";
        };
        class H_tweed_ech_psq_OCP_b_licht {
            model = "w28ech";
            style = "alt2";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "Yes";
            ess = "No";
        };
        class H_tweed_ech_psq_OCP_b {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "Yes";
            ess = "No";
        };
        class H_tweed_ech_psq_OCP_ESS_2 {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "Yes";
            ess = "Covered";
        };
        class H_tweed_ech_psq_OCP_ESS_low_b {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "No";
            psq = "Yes";
            ess = "Down";
        };
        class H_tweed_ech_psq_OCP_ESS_low {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "Yes";
            ess = "Down";
        };
        class H_tweed_ech_psq_OCP_ESS {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "Yes";
            ess = "Up";
        };
        class H_tweed_ech_psq_OCP_licht {
            model = "w28ech";
            style = "alt2";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "Yes";
            ess = "No";
        };
        class H_tweed_ech_psq_OCP_scrim_ess {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "Yes";
            peltors = "No";
            psq = "Yes";
            ess = "Up";
        };
        class H_tweed_ech_psq_OCP_scrim_TASC_ESS {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "Yes";
            peltors = "Yes";
            psq = "Yes";
            ess = "Up";
        };
        class H_tweed_ech_psq_OCP_scrim_TASC {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "Yes";
            peltors = "Yes";
            psq = "Yes";
            ess = "No";
        };
        class H_tweed_ech_psq_OCP_scrim {
            model = "w28ech";
            style = "std";
            norotos = "Yes";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "Yes";
            ess = "No";
        };
        class H_tweed_ech_psq_OCP_TASC_b_ESS_2 {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "Yes";
            psq = "Yes";
            ess = "Covered";
        };
        class H_tweed_ech_psq_OCP_TASC_b_ESS_3 {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "Yes";
            psq = "Yes";
            ess = "Umm";
        };
        class H_tweed_ech_psq_OCP_TASC_b_ESS {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "Yes";
            psq = "Yes";
            ess = "Up";
        };
        class H_tweed_ech_psq_OCP_TASC_b {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "Yes";
            scrim = "No";
            peltors = "Yes";
            psq = "Yes";
            ess = "No";
        };
        class H_tweed_ech_psq_OCP_TASC_ESS_2 {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "Yes";
            psq = "Yes";
            ess = "Covered";
        };
        class H_tweed_ech_psq_OCP_TASC_ESS {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "Yes";
            psq = "Yes";
            ess = "Up";
        };
        class H_tweed_ech_psq_OCP_TASC {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "Yes";
            psq = "Yes";
            ess = "No";
        };
        class H_tweed_ech_psq_OCP {
            model = "w28ech";
            style = "std";
            norotos = "No";
            band = "No";
            scrim = "No";
            peltors = "No";
            psq = "Yes";
            ess = "No";
        };
        //ihps
        class H_tweed_ihps_1 {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "No";
            peltors = "No";
            rail = "No";
            ess = "No";
        };
        class H_tweed_ihps_g {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "No";
            peltors = "No";
            rail = "No";
            ess = "Yes";
        };
        class H_tweed_ihps_g_rail {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "No";
            peltors = "No";
            rail = "Yes";
            ess = "Yes";
        };
        class H_tweed_ihps_g_tasc {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "No";
            peltors = "Yes";
            rail = "No";
            ess = "Yes";
        };
        class H_tweed_ihps_g_tasc_rail {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "No";
            peltors = "Yes";
            rail = "Yes";
            ess = "Yes";
        };
        class H_tweed_ihps_rail {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "No";
            peltors = "No";
            rail = "Yes";
            ess = "No";
        };
        class H_tweed_ihps_scrim {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "Yes";
            peltors = "No";
            rail = "No";
            ess = "No";
        };
        class H_tweed_ihps_scrim_g {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "Yes";
            peltors = "No";
            rail = "No";
            ess = "Yes";
        };
        class H_tweed_ihps_scrim_g_rail {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "Yes";
            peltors = "No";
            rail = "Yes";
            ess = "Yes";
        };
        class H_tweed_ihps_scrim_g_tasc {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "Yes";
            peltors = "Yes";
            rail = "No";
            ess = "Yes";
        };
        class H_tweed_ihps_scrim_rail {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "Yes";
            peltors = "No";
            rail = "Yes";
            ess = "No";
        };
        class H_tweed_ihps_scrim_tasc {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "Yes";
            peltors = "Yes";
            rail = "No";
            ess = "No";
        };
        class H_tweed_ihps_tasc {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "No";
            peltors = "Yes";
            rail = "No";
            ess = "No";
        };
        class H_tweed_ihps_tasc_rail {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "No";
            peltors = "Yes";
            rail = "Yes";
            ess = "No";
        };
        class H_tweed_ihps_tasc_scrim_g_rail {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "Yes";
            peltors = "Yes";
            rail = "Yes";
            ess = "Yes";
        };
        class H_tweed_ihps_tasc_scrim_rail {
            model = "w28ihps";
            ocp = "Yes";
            scrim = "Yes";
            peltors = "Yes";
            rail = "Yes";
            ess = "No";
        };
        class H_tweed_ihps_bare {
            model = "w28ihps";
            ocp = "No";
            scrim = "No";
            peltors = "No";
            rail = "No";
            ess = "No";
        };
        class H_tweed_ihps_bare_rail {
            model = "w28ihps";
            ocp = "No";
            scrim = "No";
            peltors = "No";
            rail = "Yes";
            ess = "No";
        };
        class H_tweed_ihps_bare_tasc_rail {
            model = "w28ihps";
            ocp = "No";
            scrim = "No";
            peltors = "Yes";
            rail = "Yes";
            ess = "No";
        };
        class H_tweed_ihps_g_bare {
            model = "w28ihps";
            ocp = "No";
            scrim = "No";
            peltors = "No";
            rail = "No";
            ess = "Yes";
        };
        class H_tweed_ihps_g_bare_rail {
            model = "w28ihps";
            ocp = "No";
            scrim = "No";
            peltors = "No";
            rail = "Yes";
            ess = "Yes";
        };
        class H_tweed_ihps_g_bare_tasc_rail {
            model = "w28ihps";
            ocp = "No";
            scrim = "No";
            peltors = "Yes";
            rail = "Yes";
            ess = "Yes";
        };
        class H_tweed_ihps_g_tasc_bare {
            model = "w28ihps";
            ocp = "No";
            scrim = "No";
            peltors = "Yes";
            rail = "No";
            ess = "Yes";
        };
        class H_tweed_ihps_tasc_bare {
            model = "w28ihps";
            ocp = "No";
            scrim = "No";
            peltors = "Yes";
            rail = "No";
            ess = "No";
        };
        //vest
        class V_tweed_iotv_mk4_1 {
            model = "w28vest";
            vest = "MK4";
            style = "style1";
        };
        class V_tweed_iotv_mk4_2 {
            model = "w28vest";
            vest = "MK4";
            style = "style2";
        };
        class V_tweed_iotv_mk4_240 {
            model = "w28vest";
            vest = "MK4";
            style = "240";
        };
        class V_tweed_iotv_mk4_249 {
            model = "w28vest";
            vest = "MK4";
            style = "249";
        };
        class V_tweed_iotv_mk4_3 {
            model = "w28vest";
            vest = "MK4";
            style = "style3";
        };
        class V_tweed_iotv_mk4_45_1 {
            model = "w28vest";
            vest = "MK4";
            style = "side1";
        };
        class V_tweed_iotv_mk4_45_2 {
            model = "w28vest";
            vest = "MK4";
            style = "prc1";
        };
        class V_tweed_iotv_mk4_4cm_1 {
            model = "w28vest";
            vest = "MK4";
            style = "40mm1";
        };
        class V_tweed_iotv_mk4_4cm_2 {
            model = "w28vest";
            vest = "MK4";
            style = "40mm2";
        };
        class V_tweed_iotv_mk4_cell_1 {
            model = "w28vest";
            vest = "MK4";
            style = "style4";
        };
        class V_tweed_iotv_mk4_cell_2 {
            model = "w28vest";
            vest = "MK4";
            style = "style5";
        };
        class V_tweed_iotv_mk4_cell_45_1 {
            model = "w28vest";
            vest = "MK4";
            style = "side2";
        };
        class V_tweed_iotv_mk4_cell_45_2 {
            model = "w28vest";
            vest = "MK4";
            style = "prc2";
        };
        class V_tweed_iotv_mk4_cell_4cm_1 {
            model = "w28vest";
            vest = "MK4";
            style = "40mm3";
        };
        class V_tweed_iotv_mk4_e_1 {
            model = "w28vest";
            vest = "MK4";
            style = "nutpro";
        };
        class V_tweed_iotv_mk4_e_2  {
            model = "w28vest";
            vest = "MK4";
            style = "basic";
        };
        class V_tweed_msv_mk2_1 {
            model = "w28vest";
            vest = "MK4";
            style = "style1";
        };
        class V_tweed_msv_mk2_2 {
            model = "w28vest";
            vest = "MK2";
            style = "style2";
        };
        class V_tweed_msv_mk2_240 {
            model = "w28vest";
            vest = "MK2";
            style = "240";
        };
        class V_tweed_msv_mk2_249 {
            model = "w28vest";
            vest = "MK2";
            style = "249";
        };
        class V_tweed_msv_mk2_3 {
            model = "w28vest";
            vest = "MK2";
            style = "style3";
        };
        class V_tweed_msv_mk2_45_1 {
            model = "w28vest";
            vest = "MK2";
            style = "side1";
        };
        class V_tweed_msv_mk2_45_2 {
            model = "w28vest";
            vest = "MK2";
            style = "prc1";
        };
        class V_tweed_msv_mk2_4cm_1 {
            model = "w28vest";
            vest = "MK2";
            style = "40mm1";
        };
        class V_tweed_msv_mk2_4cm_2 {
            model = "w28vest";
            vest = "MK4";
            style = "40mm2";
        };
        class V_tweed_msv_mk2_cell_1 {
            model = "w28vest";
            vest = "MK2";
            style = "style4";
        };
        class V_tweed_msv_mk2_cell_2 {
            model = "w28vest";
            vest = "MK2";
            style = "style5";
        };
        class V_tweed_msv_mk2_cell_45_1 {
            model = "w28vest";
            vest = "MK2";
            style = "side2";
        };
        class V_tweed_msv_mk2_cell_45_2 {
            model = "w28vest";
            vest = "MK2";
            style = "prc2";
        };
        class V_tweed_msv_mk2_cell_4cm_1 {
            model = "w28vest";
            vest = "MK2";
            style = "40mm3";
        };
        class V_tweed_msv_mk2_e_1 {
            model = "w28vest";
            vest = "MK2";
            style = "basic";
        };
        class psq42_blk {
            model = "w28psq42";
            camo = "blk";
            style = "base";
        };
        class psq42_blk_icup {
            model = "w28psq42";
            camo = "blk";
            style = "Eye Cups";
        };
        class psq42_blk_lenscap {
            model = "w28psq42";
            camo = "blk";
            style = "Lens Caps";
        };
        class psq42_od3 {
            model = "w28psq42";
            camo = "od";
            style = "base";
        };
        class psq42_od3_icup {
            model = "w28psq42";
            camo = "od";
            style = "Eye Cups";
        };
        class psq42_od3_lenscap {
            model = "w28psq42";
            camo = "od";
            style = "Lens Caps";
        };
    };
    
    class CfgVehicles {
        class B_simc_US_Molle_asspack_OCP_wasser {
            model = "w28Sasspack";
            Option = "Hydration";
        };
        class B_simc_US_Molle_asspack_OCP_thermos_od7 {
            model = "w28Sasspack";
            Option = "Thermos OD";
        };
        class B_simc_US_Molle_asspack_OCP_thermos_OCP {
            model = "w28Sasspack";
            Option = "Thermos OCP";
        };
        class B_simc_US_Molle_asspack_OCP_thermos_od3 {
            model = "w28Sasspack";
            Option = "Thermos Coyote";
        };
        class B_simc_US_Molle_asspack_OCP {
            model = "w28Sasspack";
            Option = "Base";
        };
        class B_simc_US_Molle_asspack_OCP_low {
            model = "w28Sasspack";
            Option = "Low";
        };

        class B_tweed_pack_camel_thermos_od3 {
            model = "w28Scamel_thermos";
            Camo = "Coyote";
        };
        class B_tweed_pack_camel_thermos_od7 {
            model = "w28Scamel_thermos";
            Camo = "OD";
        };
        class B_tweed_pack_camel_thermos_ocp {
            model = "w28Scamel_thermos";
            Camo = "OCP";
        };


        class B_tweed_pack_wasser_molle_ocp {
            model = "w28Swasser";
            Option = "OCP_1";
        };
        class B_tweed_pack_wasser_molle_ocp_alt {
            model = "w28Swasser";
            Option = "OCP_2";
        };

        class B_tweed_pack_wasser_molle_od7 {
            model = "w28Swasser";
            Option = "OD_1";
        };
        class B_tweed_pack_wasser_molle_od7_alt {
            model = "w28Swasser";
            Option = "OD_2";
        };

        class B_tweed_pack_wasser_molle_od3_alt {
            model = "w28Swasser";
            Option = "Coyote_2";
        };
        class B_tweed_pack_wasser_molle_od3 {
            model = "w28Swasser";
            Option = "Coyote_1";
        };


        class B_simc_US_Molle_sturm_OCP_etool {
            model = "w28Sturmgepak";
            Option = "Etool";
        };
        class B_simc_US_Molle_sturm_OCP_thermos_od7 {
            model = "w28Sturmgepak";
            Option = "Thermos OD";
        };
        class B_simc_US_Molle_sturm_OCP_thermos_OCP {
            model = "w28Sturmgepak";
            Option = "Thermos OCP";
        };
        class B_simc_US_Molle_sturm_OCP_thermos_od3 {
            model = "w28Sturmgepak";
            Option = "Thermos Coyote";
        };
        class B_simc_US_Molle_sturm_OCP {
            model = "w28Sturmgepak";
            Option = "Base";
        };

        class B_simc_US_Molle_sturm_OCP_RTO {
            model = "w28Sturmgepakrdo";
            Option = "Base";
        };
        class B_simc_US_Molle_sturm_OCP_RTO_wasser {
            model = "w28Sturmgepakrdo";
            Option = "Camel Pack";
        };

        

    };
    
    class CfgGlasses {
        class G_comba_1 {
            model = "G_comba";
            cut = "no";
            style = "1";
        };
        class G_comba_2 {
            model = "G_comba";
            cut = "no";
            style = "2";
        };
        class G_comba_1_cut {
          model = "G_comba";
          cut = "yes";
          style = "1_cut";
        };
        class G_comba_2_cut {
          model = "G_comba";
          cut = "yes";
          style = "2_cut";
        };
        class G_LEN_TG1 {
          model = "G_LEN_TG1";
          lens = "clear";
        };
        class G_LEN_TG1_oranje {
          model = "G_LEN_TG1";
          lens = "orange";
        };
        class G_LEN_TG1_blauw {
          model = "G_LEN_TG1";
          lens = "blue";
        };
        class G_LEN_TG1_weiss {
          model = "G_LEN_TG1";
          lens = "white";
        };
        class G_Nomex_1 {
          model = "G_Nomex";
          cut = "no";
          fold = "no";
          long = "none";
          newOption = "none";
          nomex = "yes";
          style = "1";
        };
        class G_Nomex_2 {
          model = "G_Nomex";
          cut = "no";
          fold = "no";
          long = "none";
          newOption = "none";
          nomex = "yes";
          style = "2";
        };
        class G_Nomex_desu {
          model = "G_Nomex";
          cut = "no";
          fold = "no";
          long = "none";
          newOption = "none";
          nomex = "yes";
          style = "tan_1";
        };
        class G_Nomex_desu_2 {
          model = "G_Nomex";
          cut = "no";
          fold = "no";
          long = "none";
          newOption = "none";
          nomex = "yes";
          style = "tan_2";
        };
        class G_Nomex_1_fold {
          model = "G_Nomex";
          cut = "none";
          fold = "yes";
          long = "no";
          newOption = "none";
          nomex = "yes";
          style = "1_fold";
        };
        class G_Nomex_2_fold {
          model = "G_Nomex";
          cut = "none";
          fold = "yes";
          long = "no";
          newOption = "none";
          nomex = "yes";
          style = "2_fold";
        };
        class G_Nomex_desu_fold {
          model = "G_Nomex";
          cut = "none";
          fold = "yes";
          long = "no";
          newOption = "none";
          nomex = "yes";
          style = "tan_fold";
        };
        class G_Nomex_desu_2_fold {
          model = "G_Nomex";
          cut = "none";
          fold = "yes";
          long = "no";
          newOption = "none";
          nomex = "yes";
          style = "tan_2_fold";
        };
        class G_Nomex_1_long {
          model = "G_Nomex";
          cut = "none";
          fold = "no";
          long = "yes";
          newOption = "none";
          nomex = "none";
          style = "1_long";
        };
        class G_Nomex_2_long {
          model = "G_Nomex";
          cut = "none";
          fold = "no";
          long = "yes";
          newOption = "none";
          nomex = "none";
          style = "2_long";
        };
        class G_Nomex_desu_long {
          model = "G_Nomex";
          cut = "none";
          fold = "no";
          long = "yes";
          newOption = "none";
          nomex = "none";
          style = "tan_long";
        };
        class G_Nomex_desu_2_long {
          model = "G_Nomex";
          cut = "none";
          fold = "no";
          long = "yes";
          newOption = "none";
          nomex = "none";
          style = "tan_2_long";
        };
        class G_Nomex_1_cut {
          model = "G_Nomex";
          cut = "none";
          fold = "no";
          long = "no";
          newOption = "none";
          nomex = "none";
          style = "1_cut";
        };
        class G_Nomex_2_cut {
          model = "G_Nomex";
          cut = "none";
          fold = "no";
          long = "no";
          newOption = "none";
          nomex = "none";
          style = "2_cut";
        };
        class G_Nomex_desu_cut {
          model = "G_Nomex";
          cut = "none";
          fold = "no";
          long = "no";
          newOption = "none";
          nomex = "none";
          style = "tan_cut";
        };
        class G_Nomex_desu_2_cut {
          model = "G_Nomex";
          cut = "none";
          fold = "no";
          long = "no";
          newOption = "none";
          nomex = "none";
          style = "tan_2_cut";
        };
        class G_Nomex_1_long_cut {
          model = "G_Nomex";
          cut = "none";
          fold = "none";
          long = "none";
          newOption = "none";
          nomex = "none";
          style = "G_Nomex_1";
        };
        class G_Nomex_2_long_cut {
          model = "G_Nomex";
          cut = "none";
          fold = "none";
          long = "none";
          newOption = "none";
          nomex = "none";
          style = "G_Nomex_2";
        };
        class G_Nomex_desu_long_cut {
          model = "G_Nomex";
          cut = "none";
          fold = "none";
          long = "none";
          newOption = "none";
          nomex = "none";
          style = "G_Nomex_tan";
        };
        class G_Nomex_desu_2_long_cut {
          model = "G_Nomex";
          cut = "none";
          fold = "none";
          long = "none";
          newOption = "none";
          nomex = "none";
          style = "G_Nomex_tan_2";
        };
        class G_Nomex_1_fold_cut {
          model = "G_Nomex";
          cut = "none";
          fold = "none";
          long = "none";
          newOption = "none";
          nomex = "G_Nomex_1";
          style = "none";
        };
        class G_Nomex_2_fold_cut {
          model = "G_Nomex";
          cut = "none";
          fold = "none";
          long = "none";
          newOption = "none";
          nomex = "G_Nomex_2";
          style = "none";
        };
        class G_Nomex_desu_fold_cut {
          model = "G_Nomex";
          cut = "none";
          fold = "none";
          long = "none";
          newOption = "none";
          nomex = "G_Nomex_tan";
          style = "none";
        };
        class G_Nomex_desu_2_fold_cut {
          model = "G_Nomex";
          cut = "none";
          fold = "none";
          long = "none";
          newOption = "none";
          nomex = "G_Nomex_tan_2";
          style = "none";
        };
        class G_oak_1 {
          model = "G_oak";
          cut = "no";
          style = "1";
        };
        class G_oak_2 {
          model = "G_oak";
          cut = "no";
          style = "2";
        };
        class G_oak_1_cut {
          model = "G_oak";
          cut = "yes";
          style = "1";
        };
        class G_oak_2_cut {
          model = "G_oak";
          cut = "yes";
          style = "2";
        };
        class G_tweed_ESS_tan {
          model = "G_tweed_ESS";
          camo = "tan";
        };
        class G_tweed_ESS_Green {
          model = "G_tweed_ESS";
          camo = "Green";
        };
        class G_tweed_tacticool {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "clear";
          nomex = "no";
          oakley = "no";
          peltor = "no";
        };
        class G_tweed_tacticool_oranje {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "orange";
          nomex = "no";
          oakley = "no";
          peltor = "no";
        };
        class G_tweed_tacticool_blauw {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "blue";
          nomex = "no";
          oakley = "no";
          peltor = "no";
        };
        class G_tweed_tacticool_weiss {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "white";
          nomex = "no";
          oakley = "no";
          peltor = "no";
        };
        class G_tweed_tacticool_peltor {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "clear";
          nomex = "no";
          oakley = "no";
          peltor = "yes";
        };
        class G_tweed_tacticool_oranje_peltor {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "orange";
          nomex = "no";
          oakley = "no";
          peltor = "yes";
        };
        class G_tweed_tacticool_blauw_peltor {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "blue";
          nomex = "no";
          oakley = "no";
          peltor = "yes";
        };
        class G_tweed_tacticool_weiss_peltor {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "white";
          nomex = "no";
          oakley = "no";
          peltor = "yes";
        };
        class G_tweed_tacticool_nomex {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "clear";
          nomex = "yes";
          oakley = "no";
          peltor = "no";
        };
        class G_tweed_tacticool_oranje_nomex {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "orange";
          nomex = "yes";
          oakley = "no";
          peltor = "no";
        };
        class G_tweed_tacticool_blauw_nomex {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "blue";
          nomex = "yes";
          oakley = "no";
          peltor = "no";
        };
        class G_tweed_tacticool_weiss_nomex {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "white";
          nomex = "yes";
          oakley = "no";
          peltor = "no";
        };
        class G_tweed_tacticool_oak {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "clear";
          nomex = "no";
          oakley = "yes";
          peltor = "none";
        };
        class G_tweed_tacticool_oranje_oak {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "orange";
          nomex = "no";
          oakley = "yes";
          peltor = "none";
        };
        class G_tweed_tacticool_blauw_oak {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "blue";
          nomex = "no";
          oakley = "yes";
          peltor = "none";
        };
        class G_tweed_tacticool_weiss_oak {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "white";
          nomex = "no";
          oakley = "yes";
          peltor = "none";
        };
        class G_tweed_tacticool_comba {
          model = "G_tweed_tacticool";
          CombatGloves = "yes";
          lens = "clear";
          nomex = "no";
          oakley = "no";
          peltor = "none";
        };
        class G_tweed_tacticool_oranje_comba {
          model = "G_tweed_tacticool";
          CombatGloves = "yes";
          lens = "orange";
          nomex = "no";
          oakley = "no";
          peltor = "none";
        };
        class G_tweed_tacticool_blauw_comba {
          model = "G_tweed_tacticool";
          CombatGloves = "yes";
          lens = "blue";
          nomex = "no";
          oakley = "no";
          peltor = "none";
        };
        class G_tweed_tacticool_weiss_comba {
          model = "G_tweed_tacticool";
          CombatGloves = "yes";
          lens = "white";
          nomex = "no";
          oakley = "no";
          peltor = "none";
        };
        class G_tweed_tacticool_peltor_nomex {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "clear";
          nomex = "yes";
          oakley = "no";
          peltor = "yes";
        };
        class G_tweed_tacticool_oranje_peltor_nomex {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "orange";
          nomex = "yes";
          oakley = "no";
          peltor = "yes";
        };
        class G_tweed_tacticool_blauw_peltor_nomex {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "blue";
          nomex = "yes";
          oakley = "no";
          peltor = "yes";
        };
        class G_tweed_tacticool_weiss_peltor_nomex {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "white";
          nomex = "yes";
          oakley = "no";
          peltor = "yes";
        };
        class G_tweed_tacticool_peltor_oak {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "clear";
          nomex = "no";
          oakley = "yes";
          peltor = "yes";
        };
        class G_tweed_tacticool_oranje_peltor_oak {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "orange";
          nomex = "no";
          oakley = "yes";
          peltor = "yes";
        };
        class G_tweed_tacticool_blauw_peltor_oak {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "blue";
          nomex = "no";
          oakley = "yes";
          peltor = "yes";
        };
        class G_tweed_tacticool_weiss_peltor_oak {
          model = "G_tweed_tacticool";
          CombatGloves = "no";
          lens = "white";
          nomex = "no";
          oakley = "yes";
          peltor = "yes";
        };
        class G_tweed_tacticool_peltor_comba {
          model = "G_tweed_tacticool";
          CombatGloves = "yes";
          lens = "clear";
          nomex = "no";
          oakley = "no";
          peltor = "yes";
        };
        class G_tweed_tacticool_oranje_peltor_comba {
          model = "G_tweed_tacticool";
          CombatGloves = "yes";
          lens = "orange";
          nomex = "no";
          oakley = "no";
          peltor = "yes";
        };
        class G_tweed_tacticool_blauw_peltor_comba {
          model = "G_tweed_tacticool";
          CombatGloves = "yes";
          lens = "blue";
          nomex = "no";
          oakley = "no";
          peltor = "yes";
        };
        class G_tweed_tacticool_weiss_peltor_comba {
            model = "G_tweed_tacticool";
            CombatGloves = "yes";
            lens = "white";
            nomex = "no";
            oakley = "no";
            peltor = "yes";
        };
    };
};
