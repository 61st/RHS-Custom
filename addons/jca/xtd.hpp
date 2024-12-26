class XtdGearModels {
    class CfgWeapons {
        class jcaawm {
            options[] = {"color"};
            label = "M115A3 .338 LM";
            class color {
                label = "Camo";
                values[] = {"Black","Sand","Olive"};
                changeingame = 0;
                alwaysSelectable = 1;
            };
        };
        class jcam4a1 {
            options[] = {"color", "barrel", "attachment"};
            label = "M4A1 5.56";
            class color {
                label = "Camo";
                values[] = {"Black","Olive","Sand"};
                changeingame = 0;
                alwaysSelectable = 1;
            };
            class barrel {
                label = "Barrel Length";
                values[] = {"Standard","CQB"};
                changeingame = 0;
                alwaysSelectable = 1;
            };
            class attachment {
                label = "Attachment";
                values[] = {"None","GL"};
                changeingame = 0;
                alwaysSelectable = 1;
            };
        };
        class jcam4a4 {
            options[] = {"color", "attachment"};
            label="M4A4 5.56";
            class color {
                label = "Camo";
                values[] = {"Black","Olive","Sand"};
                changeingame = 0;
                alwaysSelectable = 1;
            };
            class attachment {
                label = "Attachment";
                values[] = {"AFG","VFG","GL"};
                changeingame = 0;
                alwaysSelectable = 1;
            };
        };
        class jcasr10 {
            label="SR10";
            options[] = {"color","attachment"};
            class color {
                label = "Camo";
                values[] = {"Black","Olive","Sand"};
                changeingame = 0;
                alwaysSelectable = 1;
            };
            class attachment {
                label="Attachment";
                values[] = {"AFG","VFG"};
                changeingame = 0;
                alwaysSelectable = 1;
            };
        };
        class jcam16 {
            options[] = {"color", "attachment"};
            label="M16A4 5.56";
            class color {
                label = "Camo";
                values[] = {"Black","Olive","Sand"};
                changeingame = 0;
                alwaysSelectable = 1;
            };
            class attachment {
                label = "Attachment";
                values[] = {"None","VFG","GL"};
                changeingame = 0;
                alwaysSelectable = 1;
            };
        };
        class jcasr25 {
            options[] = {"color"};
            label="Mk11";
            class color {
                label = "Camo";
                values[] = {"Black","Olive","Sand"};
                changeingame = 0;
                alwaysSelectable = 1;
            };
        };
        class jcamp5 {
            options[] = {"color", "attachment"};
            label="MP5";
            class color {
                label = "Camo";
                values[] = {"Black","Olive","Sand"};
                changeingame = 0;
                alwaysSelectable = 1;
            };
            class attachment {
                label="Attachment";
                values[] = {"None","AFG","VFG"};
                changeingame = 0;
                alwaysSelectable = 1;
            };
        };
        class jcap226 {
            label="P226";
            options[] = {"color"};
            class color {
                label = "Camo";
                values[] = {"Black","Olive","Sand"};
                changeingame = 0;
                alwaysSelectable = 1;
            };
        };
        class jcap320 {
            label="P320";
            options[] = {"color"};
            class color {
                label = "Camo";
                values[] = {"Black","Olive","Sand"};
                changeingame = 0;
                alwaysSelectable = 1;
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class JCA_srifle_AWM_black_F {
            model="jcaawm";
            color="Black";
        };
        class JCA_srifle_AWM_olive_F {
            model="jcaawm";
            color="Olive";
        };
        class JCA_srifle_AWM_sand_F {
            model="jcaawm";
            color="Sand";
        };
        class JCA_arifle_M4A1_black_F {
            model="jcam4a1";
            color="Black";
            barrel="Standard";
            attachment="None";
        };
        class JCA_arifle_M4A1_olive_F {
            model="jcam4a1";
            color="Olive";
            barrel="Standard";
            attachment="None";
        };
        class JCA_arifle_M4A1_sand_F {
            model="jcam4a1";
            color="Sand";
            barrel="Standard";
            attachment="None";
        };
        class JCA_arifle_M4A1_short_black_F {
            model="jcam4a1";
            color="Black";
            barrel="CQB";
            attachment="None";
        };
        class JCA_arifle_M4A1_short_olive_F {
            model="jcam4a1";
            color="Olive";
            barrel="CQB";
            attachment="None";
        };
        class JCA_arifle_M4A1_short_sand_F {
            model="jcam4a1";
            color="Sand";
            barrel="CQB";
            attachment="None";
        };
        class JCA_arifle_M4A1_GL_black_F {
            model="jcam4a1";
            color="Black";
            barrel="Standard";
            attachment="GL";
        };
        class JCA_arifle_M4A1_GL_olive_F {
            model="jcam4a1";
            color="Olive";
            barrel="Standard";
            attachment="GL";
        };
        class JCA_arifle_M4A1_GL_sand_F {
            model="jcam4a1";
            color="Sand";
            barrel="Standard";
            attachment="GL";
        };
        class JCA_arifle_M4A4_AFG_black_F {
            model="jcam4a4";
            color="Black";
            attachment="AFG";
        };
        class JCA_arifle_M4A4_AFG_olive_F {
            model="jcam4a4";
            color="Olive";
            attachment="AFG";
        };
        class JCA_arifle_M4A4_AFG_sand_F {
            model="jcam4a4";
            color="Sand";
            attachment="AFG";
        };
        class JCA_arifle_M4A4_VFG_black_F {
            model="jcam4a4";
            color="Black";
            attachment="VFG";
        };
        class JCA_arifle_M4A4_VFG_olive_F {
            model="jcam4a4";
            color="Olive";
            attachment="VFG";
        };
        class JCA_arifle_M4A4_VFG_sand_F {
            model="jcam4a4";
            color="Sand";
            attachment="VFG";
        };
        class JCA_arifle_M4A4_GL_black_F {
            model="jcam4a4";
            color="Black";
            attachment="GL";
        };
        class JCA_arifle_M4A4_GL_olive_F {
            model="jcam4a4";
            color="Olive";
            attachment="GL";
        };
        class JCA_arifle_M4A4_GL_sand_F {
            model="jcam4a4";
            color="Sand";
            attachment="GL";
        };
        class JCA_arifle_M16A4_black_F {
            model="jcam16";
            color="Black";
            attachment="None";
        };
        class JCA_arifle_M16A4_olive_F {
            model="jcam16";
            color="Olive";
            attachment="None";
        };
        class JCA_arifle_M16A4_sand_F {
            model="jcam16";
            color="Sand";
            attachment="None";
        };
        class JCA_arifle_M16A4_FG_black_F {
            model="jcam16";
            color="Black";
            attachment="VFG";
        };
        class JCA_arifle_M16A4_FG_olive_F {
            model="jcam16";
            color="Olive";
            attachment="VFG";
        };
        class JCA_arifle_M16A4_FG_sand_F {
            model="jcam16";
            color="Sand";
            attachment="VFG";
        };
        class JCA_arifle_M16A4_GL_black_F {
            model="jcam16";
            color="Black";
            attachment="GL";
        };
        class JCA_arifle_M16A4_GL_olive_F {
            model="jcam16";
            color="Olive";
            attachment="GL";
        };
        class JCA_arifle_M16A4_GL_sand_F {
            model="jcam16";
            color="Sand";
            attachment="GL";
        };
        class JCA_arifle_SR25_black_F {
            model="jcasr25";
            color="Black";
        };
        class JCA_arifle_SR25_olive_F {
            model="jcasr25";
            color="Olive";
        };
        class JCA_arifle_SR25_Sand_F {
            model="jcasr25";
            color="Sand";
        };
        class JCA_smg_mp5_FL_black_F {
            model="jcamp5";
            color="Black";
            attachment="None";
        };
        class JCA_smg_mp5_FL_olive_F {
            model="jcamp5";
            color="Olive";
            attachment="None";
        };
        class JCA_smg_mp5_FL_sand_F {
            model="jcamp5";
            color="Sand";
            attachment="None";
        };
        class JCA_smg_mp5_AFG_black_F {
            model="jcamp5";
            color="Black";
            attachment="AFG";
        };
        class JCA_smg_mp5_AFG_olive_F {
            model="jcamp5";
            color="Olive";
            attachment="AFG";
        };
        class JCA_smg_mp5_AFG_sand_F {
            model="jcamp5";
            color="Sand";
            attachment="AFG";
        };
        class JCA_smg_mp5_VFG_black_F {
            model="jcamp5";
            color="Black";
            attachment="VFG";
        };
        class JCA_smg_mp5_VFG_olive_F {
            model="jcamp5";
            color="Olive";
            attachment="VFG";
        };
        class JCA_smg_mp5_VFG_sand_F {
            model="jcamp5";
            color="Sand";
            attachment="VFG";
        };
        class JCA_arifle_SR10_AFG_black_F {
            model="jcasr10";
            color="Black";
            attachment="AFG";
        };
        class JCA_arifle_SR10_AFG_olive_F {
            model="jcasr10";
            color="Olive";
            attachment="AFG";
        };
        class JCA_arifle_SR10_AFG_sand_F {
            model="jcasr10";
            color="Sand";
            attachment="AFG";
        };
        class JCA_arifle_SR10_VFG_black_F {
            model="jcasr10";
            color="Black";
            attachment="VFG";
        };
        class JCA_arifle_SR10_VFG_olive_F {
            model="jcasr10";
            color="Olive";
            attachment="VFG";
        };
        class JCA_arifle_SR10_VFG_sand_F {
            model="jcasr10";
            color="Sand";
            attachment="VFG";
        };
        class JCA_hgun_P226_black_F {
            model="jcap226";
            color="Black";
        };
        class JCA_hgun_P226_olive_F {
            model="jcap226";
            color="Olive";
        };
        class JCA_hgun_P226_sand_F {
            model="jcap226";
            color="Sand";
        };
        class JCA_hgun_P320_black_F {
            model="jcap320";
            color="Black";
        };
        class JCA_hgun_P320_olive_F {
            model="jcap320";
            color="Olive";
        };
        class JCA_hgun_P320_sand_F {
            model="jcap320";
            color="Sand";
        };
    };
};