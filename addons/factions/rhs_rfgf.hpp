class rhs_faction_rfgf {
    name = "Russia (Federation Ground forces)";
    class Infantry {
        name = "Infantry";
        class rhs_group_rus_msv_infantry_chq {
            name = "Company HQ";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "rhs_msv_officer";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_officer_armored";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_officer_armored";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
        };
        class rhs_group_rus_msv_infantry_squad {
            name = "Squad";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_grenadier_rpg";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_strelok_rpg_assist";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_strelok_rpg_assist";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
            class Unit8 {
                position[] = {15,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
            class Unit9 {
                position[] = {17,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_medic";
            };
        };
        class rhs_group_rus_msv_infantry_squad_2mg {
            name = "Squad (2x GPMG)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner_assistant";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
        class rhs_group_rus_msv_infantry_squad_sniper {
            name = "Squad (Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_marksman";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_at";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_medic";
            };
        };
        class rhs_group_rus_msv_infantry_squad_mg_sniper {
            name = "Squad (GPMG + Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_marksman";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner_assistant";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
        class rhs_group_rus_msv_infantry_section_mg {
            name = "Section MG";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner_assistant";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_grenadier";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
        };
        class rhs_group_rus_msv_infantry_section_marksman {
            name = "Section Marksman";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner_assistant";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_grenadier";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_marksman";
            };
        };
        class rhs_group_rus_msv_infantry_section_AT {
            name = "Section AT";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_at";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_strelok_rpg_assist";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_lat";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
        };
        class rhs_group_rus_msv_infantry_section_AA {
            name = "Section AA";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
        };
        class rhs_group_rus_msv_infantry_fireteam {
            name = "Fireteam";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_at";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_strelok_rpg_assist";
            };
        };
        class rhs_group_rus_msv_infantry_MANEUVER {
            name = "Maneuver team";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_efreitor";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
        };
        class rhs_group_rus_msv_infantry_emr_chq {
            name = "Company HQ";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "rhs_msv_emr_officer";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_emr_officer_armored";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_emr_officer_armored";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_rifleman";
            };
        };
        class rhs_group_rus_msv_infantry_emr_squad {
            name = "Squad";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_rifleman";
            };
        };
        class rhs_group_rus_msv_infantry_emr_squad_2mg {
            name = "Squad (2x GPMG)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
        };
        class rhs_group_rus_msv_infantry_emr_squad_sniper {
            name = "Squad (Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_marksman";
            };
        };
        class rhs_group_rus_msv_infantry_emr_squad_mg_sniper {
            name = "Squad (GPMG + Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner_assistant";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_marksman";
            };
        };
        class rhs_group_rus_msv_infantry_emr_section_mg {
            name = "Section MG";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner_assistant";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner_assistant";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner_assistant";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
        };
        class rhs_group_rus_msv_infantry_emr_section_marksman {
            name = "Section Marksman";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_emr_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner_assistant";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_marksman";
            };
        };
        class rhs_group_rus_msv_infantry_emr_section_AT {
            name = "Section AT";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_emr_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_at";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_lat";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_rifleman";
            };
        };
        class rhs_group_rus_msv_infantry_emr_section_AA {
            name = "Section AA";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_emr_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_aa";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_aa";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_aa";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_rifleman";
            };
        };
        class rhs_group_rus_msv_infantry_emr_fireteam {
            name = "Fireteam";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
        };
        class rhs_group_rus_msv_infantry_emr_MANEUVER {
            name = "Maneuver team";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_rifleman";
            };
        };
    };
    class SpecOps {
        name = "Special Forces";
    };
    class Motorized {
        name = "Motorized Infantry";
        class rhs_group_rus_msv_Ural_chq {
            name = "Company HQ";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "rhs_msv_officer";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_officer_armored";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_crew_commander";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_uaz_msv_01";
            };
        };
        class rhs_group_rus_msv_Ural_squad {
            name = "Squad";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_grenadier";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_Ural_msv_01";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_at";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_strelok_rpg_assist";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
        };
        class rhs_group_rus_msv_Ural_squad_2mg {
            name = "Squad (2x GPMG)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_Ural_msv_01";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner_assistant";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
        class rhs_group_rus_msv_Ural_squad_sniper {
            name = "Squad (Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_marksman";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_Ural_msv_01";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_at";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_medic";
            };
        };
        class rhs_group_rus_msv_Ural_squad_mg_sniper {
            name = "Squad (GPMG + Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_Ural_msv_01";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_marksman";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner_assistant";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
        class rhs_group_rus_msv_Ural_squad_aa {
            name = "Squad (AA)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_Ural_Zu23_msv_01";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_vdv_LAT";
            };
        };
        class rhs_group_rus_msv_gaz66_chq {
            name = "Company HQ";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "rhs_msv_officer";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_officer_armored";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_crew_commander";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_uaz_msv_01";
            };
        };
        class rhs_group_rus_msv_gaz66_squad {
            name = "Squad";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_grenadier";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_gaz66_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_at";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_strelok_rpg_assist";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
        };
        class rhs_group_rus_msv_gaz66_squad_2mg {
            name = "Squad (2x GPMG)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_gaz66_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner_assistant";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
        class rhs_group_rus_msv_gaz66_squad_sniper {
            name = "Squad (Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_marksman";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_gaz66_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_at";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_medic";
            };
        };
        class rhs_group_rus_msv_gaz66_squad_mg_sniper {
            name = "Squad (GPMG + Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_gaz66_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_marksman";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner_assistant";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
        class rhs_group_rus_msv_gaz66_squad_aa {
            name = "Squad (AA)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit2 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_gaz66_Zu23_msv";
            };
        };
        class rhs_group_rus_msv_btr70_chq {
            name = "Company HQ";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "rhs_msv_officer";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_officer_armored";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_crew_commander";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_btr70_msv";
            };
        };
        class rhs_group_rus_msv_btr70_squad {
            name = "Squad";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_grenadier";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_btr70_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_at";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_strelok_rpg_assist";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
        };
        class rhs_group_rus_msv_btr70_squad_2mg {
            name = "Squad (2x GPMG)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_btr70_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner_assistant";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
        class rhs_group_rus_msv_btr70_squad_sniper {
            name = "Squad (Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_marksman";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_btr70_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_at";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_medic";
            };
        };
        class rhs_group_rus_msv_btr70_squad_mg_sniper {
            name = "Squad (GPMG + Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_btr70_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_marksman";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner_assistant";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
        class rhs_group_rus_msv_btr70_squad_aa {
            name = "Squad (AA)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_btr70_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_grenadier";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
        class rhs_group_rus_msv_BTR80_chq {
            name = "Company HQ";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "rhs_msv_officer";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_officer_armored";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_crew_commander";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_btr80_msv";
            };
        };
        class rhs_group_rus_msv_BTR80_squad {
            name = "Squad";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_btr80_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
        };
        class rhs_group_rus_msv_BTR80_squad_2mg {
            name = "Squad (2x GPMG)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_btr80_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
        };
        class rhs_group_rus_msv_BTR80_squad_sniper {
            name = "Squad (Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_btr80_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_marksman";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
        };
        class rhs_group_rus_msv_BTR80_squad_mg_sniper {
            name = "Squad (GPMG + Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_btr80_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner_assistant";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_marksman";
            };
        };
        class rhs_group_rus_msv_BTR80_squad_aa {
            name = "Squad (AA)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_btr80_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_grenadier";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
        class rhs_group_rus_msv_BTR80a_chq {
            name = "Company HQ";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "rhs_msv_officer";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_officer_armored";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_crew_commander";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_BTR80a_msv";
            };
        };
        class rhs_group_rus_msv_BTR80a_squad {
            name = "Squad";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_BTR80a_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
        };
        class rhs_group_rus_msv_BTR80a_squad_2mg {
            name = "Squad (2x GPMG)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_BTR80a_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
        };
        class rhs_group_rus_msv_BTR80a_squad_sniper {
            name = "Squad (Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_BTR80a_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_marksman";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
        };
        class rhs_group_rus_msv_BTR80a_squad_mg_sniper {
            name = "Squad (GPMG + Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_BTR80a_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner_assistant";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_marksman";
            };
        };
        class rhs_group_rus_msv_BTR80a_squad_aa {
            name = "Squad (AA)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_BTR80a_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_grenadier";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
    };
    class Motorized_MTP {
        name = "Motorized Infantry (MTP)";
    };
    class Support {
        name = "Support Infantry";
    };
    class Mechanized {
        name = "Mechanized Infantry";
        class rhs_group_rus_msv_bmp1_chq {
            name = "Company HQ";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,0,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "rhs_msv_officer";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_officer_armored";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_crew_commander";
            };
            class Unit3 {
                position[] = {19,-22,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_bmp1k_msv";
            };
        };
        class rhs_group_rus_msv_bmp1_squad {
            name = "Squad";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_sergeant";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_grenadier";
            };
            class Unit3 {
                position[] = {19,-22,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_bmp1p_msv";
            };
            class Unit4 {
                position[] = {-10,-11,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {31,-39,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_at";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_strelok_rpg_assist";
            };
            class Unit7 {
                position[] = {37,-44,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
            class Unit8 {
                position[] = {-20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
        };
        class rhs_group_rus_msv_bmp1_squad_2mg {
            name = "Squad (2x GPMG)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_efreitor";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit3 {
                position[] = {19,-22,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_bmp1p_msv";
            };
            class Unit4 {
                position[] = {-10,-11,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {31,-39,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner_assistant";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
            class Unit7 {
                position[] = {37,-44,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
            class Unit8 {
                position[] = {-20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
        };
        class rhs_group_rus_msv_bmp1_squad_sniper {
            name = "Squad (Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_efreitor";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_marksman";
            };
            class Unit3 {
                position[] = {19,-22,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_bmp1p_msv";
            };
            class Unit4 {
                position[] = {-10,-11,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {31,-39,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_at";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_medic";
            };
            class Unit7 {
                position[] = {37,-44,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
            class Unit8 {
                position[] = {-20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
        };
        class rhs_group_rus_msv_bmp1_squad_mg_sniper {
            name = "Squad (GPMG + Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_sergeant";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit3 {
                position[] = {19,-22,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_bmp1p_msv";
            };
            class Unit4 {
                position[] = {-10,-11,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_marksman";
            };
            class Unit5 {
                position[] = {31,-39,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner_assistant";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
            class Unit7 {
                position[] = {37,-44,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
            class Unit8 {
                position[] = {-20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
        };
        class rhs_group_rus_msv_bmp1_squad_aa {
            name = "Squad (AA)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit3 {
                position[] = {19,-22,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_bmp1p_msv";
            };
            class Unit4 {
                position[] = {-10,-11,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {31,-39,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_grenadier";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
        class rhs_group_rus_msv_bmp2_chq {
            name = "Company HQ";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "rhs_msv_officer";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_officer_armored";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_crew_commander";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_bmp2k_msv";
            };
        };
        class rhs_group_rus_msv_bmp2_squad {
            name = "Squad";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_grenadier";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_bmp2_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_at";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_strelok_rpg_assist";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_rifleman";
            };
        };
        class rhs_group_rus_msv_bmp2_squad_2mg {
            name = "Squad (2x GPMG)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_bmp2_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner_assistant";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
        class rhs_group_rus_msv_bmp2_squad_sniper {
            name = "Squad (Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_marksman";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_bmp2_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_at";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_medic";
            };
        };
        class rhs_group_rus_msv_bmp2_squad_mg_sniper {
            name = "Squad (GPMG + Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_bmp2_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_marksman";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner_assistant";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
        class rhs_group_rus_msv_bmp2_squad_aa {
            name = "Squad (AA)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_bmp2_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_grenadier";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
        class rhs_group_rus_MSV_BMP3_chq {
            name = "Company HQ";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "rhs_msv_officer";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_officer_armored";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_crew_commander";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_bmp3_msv";
            };
        };
        class rhs_group_rus_MSV_BMP3_squad {
            name = "Squad";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_bmp3_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
        };
        class rhs_group_rus_MSV_BMP3_squad_2mg {
            name = "Squad (2x GPMG)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_bmp3_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
        };
        class rhs_group_rus_MSV_BMP3_squad_sniper {
            name = "Squad (Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_bmp3_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_marksman";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
        };
        class rhs_group_rus_MSV_BMP3_squad_mg_sniper {
            name = "Squad (GPMG + Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_bmp3_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner_assistant";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_marksman";
            };
        };
        class rhs_group_rus_MSV_BMP3_squad_aa {
            name = "Squad (AA)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_bmp3_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_grenadier";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
        class rhs_group_rus_MSV_bmp3m_chq {
            name = "Company HQ";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "rhs_msv_officer";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_officer_armored";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_msv_crew_commander";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_bmp3m_msv";
            };
        };
        class rhs_group_rus_MSV_bmp3m_squad {
            name = "Squad";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_bmp3m_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
        };
        class rhs_group_rus_MSV_bmp3m_squad_2mg {
            name = "Squad (2x GPMG)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_bmp3m_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
        };
        class rhs_group_rus_MSV_bmp3m_squad_sniper {
            name = "Squad (Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_bmp3m_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_marksman";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_LAT";
            };
        };
        class rhs_group_rus_MSV_bmp3m_squad_mg_sniper {
            name = "Squad (GPMG + Marksman)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_emr_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_emr_efreitor";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_bmp3m_msv";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_grenadier_rpg";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_strelok_rpg_assist";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_machinegunner_assistant";
            };
            class Unit7 {
                position[] = {13,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_emr_marksman";
            };
        };
        class rhs_group_rus_MSV_bmp3m_squad_aa {
            name = "Squad (AA)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.75;
            class Unit0 {
                position[] = {0,5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_msv_junior_sergeant";
            };
            class Unit1 {
                position[] = {-5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit2 {
                position[] = {3,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_aa";
            };
            class Unit3 {
                position[] = {5,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_bmp3m_msv";
            };
            class Unit4 {
                position[] = {7,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_machinegunner";
            };
            class Unit5 {
                position[] = {9,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_grenadier";
            };
            class Unit6 {
                position[] = {11,0,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "rhs_msv_LAT";
            };
        };
    };
    class Armored {
        name = "Armor";
        // class RHS_T14Platoon {
        //     name = "T-14 Platoon";
        //     side = 0;
        //     faction = "rhs_faction_rfgf";
        //     icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
        //     rarityGroup = 0.5;
        //     class Unit0 {
        //         position[] = {0,0,0};
        //         rank = "LIEUTENANT";
        //         side = 0;
        //         vehicle = "RHS_T14_tv";
        //     };
        //     class Unit1 {
        //         position[] = {20.1,-30,3};
        //         rank = "SERGEANT";
        //         side = 0;
        //         vehicle = "RHS_T14_tv";
        //     };
        //     class Unit2 {
        //         position[] = {-20,-30,3};
        //         rank = "SERGEANT";
        //         side = 0;
        //         vehicle = "RHS_T14_tv";
        //     };
        // };
        // class RHS_T14Platoon_AA {
        //     name = "T-14 Platoon (Combined)";
        //     side = 0;
        //     faction = "rhs_faction_rfgf";
        //     icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
        //     rarityGroup = 0.5;
        //     class Unit0 {
        //         position[] = {0,0,0};
        //         rank = "LIEUTENANT";
        //         side = 0;
        //         vehicle = "RHS_T14_tv";
        //     };
        //     class Unit1 {
        //         position[] = {20.1,-30,3};
        //         rank = "SERGEANT";
        //         side = 0;
        //         vehicle = "rhs_zsu234_aa";
        //     };
        //     class Unit2 {
        //         position[] = {-20,-30,3};
        //         rank = "SERGEANT";
        //         side = 0;
        //         vehicle = "RHS_T14_tv";
        //     };
        // };
        // class RHS_T14Section {
        //     name = "T-14 Section";
        //     side = 0;
        //     faction = "rhs_faction_rfgf";
        //     icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
        //     rarityGroup = 0.5;
        //     class Unit0 {
        //         position[] = {0,0,0};
        //         rank = "LIEUTENANT";
        //         side = 0;
        //         vehicle = "RHS_T14_tv";
        //     };
        //     class Unit1 {
        //         position[] = {20,-30,2};
        //         rank = "SERGEANT";
        //         side = 0;
        //         vehicle = "RHS_T14_tv";
        //     };
        // };
        class RHS_T72BAPlatoon {
            name = "T-72B g.1984 Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t72ba_tv";
            };
            class Unit1 {
                position[] = {20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t72ba_tv";
            };
            class Unit2 {
                position[] = {-21,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t72ba_tv";
            };
        };
        class RHS_T72BAPlatoon_AA {
            name = "T-72B g.1984 Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t72ba_tv";
            };
            class Unit1 {
                position[] = {20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-21,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t72ba_tv";
            };
            class Unit3 {
                position[] = {40,-60,3};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
        };
        class RHS_T72BASection {
            name = "T-72B g.1984 Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t72ba_tv";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t72ba_tv";
            };
        };
        class RHS_T72BBPlatoon {
            name = "T-72B g.1985 Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T72BB_tv";
            };
            class Unit1 {
                position[] = {20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T72BB_tv";
            };
            class Unit2 {
                position[] = {-21,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T72BB_tv";
            };
        };
        class RHS_T72BBPlatoon_AA {
            name = "T-72B g.1985 Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T72BB_tv";
            };
            class Unit1 {
                position[] = {20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-21,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T72BB_tv";
            };
        };
        class RHS_T72BBSection {
            name = "T-72B g.1985 Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T72BB_tv";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T72BB_tv";
            };
        };
        class RHS_T72BCPlatoon {
            name = "T-72B g.1989 Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T72BC_tv";
            };
            class Unit1 {
                position[] = {20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T72BC_tv";
            };
            class Unit2 {
                position[] = {-21,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T72BC_tv";
            };
        };
        class RHS_T72BCPlatoon_AA {
            name = "T-72B g.1989 Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T72BC_tv";
            };
            class Unit1 {
                position[] = {20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-21,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T72BC_tv";
            };
            class Unit3 {
                position[] = {40,-60,3};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
        };
        class RHS_T72BCSection {
            name = "T-72B g.1989 Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T72BC_tv";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T72BC_tv";
            };
        };
        class RHS_T72BDPlatoon {
            name = "T-72B3 g.2012 Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T72BD_tv";
            };
            class Unit1 {
                position[] = {20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T72BD_tv";
            };
            class Unit2 {
                position[] = {-21,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T72BD_tv";
            };
        };
        class RHS_T72BDPlatoon_AA {
            name = "T-72B3 g.2012 Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T72BD_tv";
            };
            class Unit1 {
                position[] = {20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-21,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T72BD_tv";
            };
            class Unit3 {
                position[] = {40,-60,3};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
        };
        class RHS_T72BDSection {
            name = "T-72B3 g.2012 Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T72BD_tv";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T72BD_tv";
            };
        };
        class RHS_T72BEPlatoon {
            name = "T-72B3 g.2016 Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t72be_tv";
            };
            class Unit1 {
                position[] = {20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t72be_tv";
            };
            class Unit2 {
                position[] = {-21,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t72be_tv";
            };
        };
        class RHS_T72BEPlatoon_AA {
            name = "T-72B3 g.2016 Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t72be_tv";
            };
            class Unit1 {
                position[] = {20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-21,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t72be_tv";
            };
            class Unit3 {
                position[] = {40,-60,3};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
        };
        class RHS_T72BESection {
            name = "T-72B3 g.2016 Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t72be_tv";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t72be_tv";
            };
        };
        class RHS_T80Platoon {
            name = "T-80 Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80";
            };
        };
        class RHS_T80Platoon_AA {
            name = "T-80 Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80";
            };
        };
        class RHS_T80Section {
            name = "T-80 Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80";
            };
            class Unit1 {
                position[] = {-20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80";
            };
        };
        class RHS_T80BPlatoon {
            name = "T-80B Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80B";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80B";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80B";
            };
        };
        class RHS_T80BPlatoon_AA {
            name = "T-80B Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80B";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80B";
            };
            class Unit3 {
                position[] = {40,-60,3};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
        };
        class RHS_T80BSection {
            name = "T-80B Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80B";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80B";
            };
        };
        class RHS_T80BVPlatoon {
            name = "T-80BV Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80BV";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80BV";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80BV";
            };
        };
        class RHS_T80BVPlatoon_AA {
            name = "T-80BV Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80BV";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80BV";
            };
            class Unit3 {
                position[] = {40,-60,3};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
        };
        class RHS_T80BVSection {
            name = "T-80BV Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80BV";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80BV";
            };
        };
        class RHS_T80APlatoon {
            name = "T-80A Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80A";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80A";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80A";
            };
        };
        class RHS_T80APlatoon_AA {
            name = "T-80A Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80A";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80A";
            };
            class Unit3 {
                position[] = {40,-60,3};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
        };
        class RHS_T80ASection {
            name = "T-80A Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80A";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80A";
            };
        };
        class RHS_T80UPlatoon {
            name = "T-80U Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80U";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80U";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80U";
            };
        };
        class RHS_T80UPlatoon_AA {
            name = "T-80U Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80U";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80U";
            };
            class Unit3 {
                position[] = {40,-60,3};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
        };
        class RHS_T80USection {
            name = "T-80U Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80U";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80U";
            };
        };
        class RHS_T80UMPlatoon {
            name = "T-80UM Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80UM";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80UM";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80UM";
            };
        };
        class RHS_T80UMPlatoon_AA {
            name = "T-80UM Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80UM";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80UM";
            };
            class Unit3 {
                position[] = {40,-60,3};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
        };
        class RHS_T80UMSection {
            name = "T-80UM Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T80UM";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T80UM";
            };
        };
        class rhs_t80ue1Platoon {
            name = "T-80UE-1 Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t80ue1";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t80ue1";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t80ue1";
            };
        };
        class rhs_t80ue1Platoon_AA {
            name = "T-80UE-1 Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t80ue1";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t80ue1";
            };
            class Unit3 {
                position[] = {40,-60,3};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
        };
        class rhs_t80ue1Section {
            name = "T-80UE-1 Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t80ue1";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t80ue1";
            };
        };
        class rhs_t80u45mPlatoon {
            name = "T-80U (45m) Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t80u45m";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t80u45m";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t80u45m";
            };
        };
        class rhs_t80u45mPlatoon_AA {
            name = "T-80U (45m) Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t80u45m";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t80u45m";
            };
            class Unit3 {
                position[] = {40,-60,3};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
        };
        class rhs_t80u45mSection {
            name = "T-80U (45m) Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t80u45m";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t80u45m";
            };
        };
        class RHS_T90Platoon {
            name = "T-90 Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T90_tv";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T90_tv";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T90_tv";
            };
        };
        class RHS_T90Platoon_AA {
            name = "T-90 Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T90_tv";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T90_tv";
            };
        };
        class RHS_T90Section {
            name = "T-90 Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T90_tv";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T90_tv";
            };
        };
        class RHS_t90aPlatoon {
            name = "T-90A Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_t90a_tv";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_t90a_tv";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_t90a_tv";
            };
        };
        class RHS_t90aPlatoon_AA {
            name = "T-90A Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_t90a_tv";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_t90a_tv";
            };
        };
        class RHS_t90aSection {
            name = "T-90A Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_t90a_tv";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_t90a_tv";
            };
        };
        class RHS_T90AMPlatoon {
            name = "T-90AM Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T90AM_tv";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T90AM_tv";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T90AM_tv";
            };
        };
        class RHS_T90AMPlatoon_AA {
            name = "T-90AM Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T90AM_tv";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T90AM_tv";
            };
        };
        class RHS_T90AMSection {
            name = "T-90AM Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T90AM_tv";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T90AM_tv";
            };
        };
        class RHS_T90SMPlatoon {
            name = "T-90SM Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T90SM_tv";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T90SM_tv";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T90SM_tv";
            };
        };
        class RHS_T90SMPlatoon_AA {
            name = "T-90SM Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T90SM_tv";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T90SM_tv";
            };
        };
        class RHS_T90SMSection {
            name = "T-90SM Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_T90SM_tv";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_T90SM_tv";
            };
        };
        class RHS_T90SAPlatoon {
            name = "T-90SA g.2004 Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t90saa_tv";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t90saa_tv";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t90saa_tv";
            };
        };
        class RHS_T90SAPlatoon_AA {
            name = "T-90SA g.2004 Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t90saa_tv";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t90saa_tv";
            };
        };
        class RHS_T90SASection {
            name = "T-90SA g.2004 Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t90saa_tv";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t90saa_tv";
            };
        };
        class RHS_T90SABPlatoon {
            name = "T-90SA g.2016 Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t90sab_tv";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t90sab_tv";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t90sab_tv";
            };
        };
        class RHS_T90SABPlatoon_AA {
            name = "T-90SA g.2016 Platoon (Combined)";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t90sab_tv";
            };
            class Unit1 {
                position[] = {20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_zsu234_aa";
            };
            class Unit2 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t90sab_tv";
            };
        };
        class RHS_T90SABSection {
            name = "T-90SA g.2016 Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_t90sab_tv";
            };
            class Unit1 {
                position[] = {20,-30,2};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_t90sab_tv";
            };
        };
    };
    class Artillery {
        name = "Artillery";
        class RHS_SPGPlatoon_msv_bm21 {
            name = "BM-21 Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_BM21_MSV_01";
            };
            class Unit1 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_BM21_MSV_01";
            };
            class Unit2 {
                position[] = {20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_BM21_MSV_01";
            };
            class Unit3 {
                position[] = {40,-60,3};
                rank = "CORPORAL";
                side = 0;
                vehicle = "RHS_BM21_MSV_01";
            };
            class Unit4 {
                position[] = {60,-60,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_BM21_MSV_01";
            };
            class Unit5 {
                position[] = {80,-60,3};
                rank = "CORPORAL";
                side = 0;
                vehicle = "RHS_BM21_MSV_01";
            };
        };
        class RHS_SPGSection_msv_bm21 {
            name = "BM-21 Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "RHS_BM21_MSV_01";
            };
            class Unit1 {
                position[] = {-20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "RHS_BM21_MSV_01";
            };
        };
        class RHS_SPGPlatoon_tv_2S1 {
            name = "Artillery 2S1 Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_2S1_tv";
            };
            class Unit1 {
                position[] = {20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_2S1_tv";
            };
            class Unit2 {
                position[] = {-20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_2S1_tv";
            };
            class Unit3 {
                position[] = {40,-60,3};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_2S1_tv";
            };
        };
        class RHS_SPGSection_tv_2S1 {
            name = "Artillery 2S1 Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_2S1_tv";
            };
            class Unit1 {
                position[] = {20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_2S1_tv";
            };
        };
        class RHS_SPGPlatoon_tv_2s3 {
            name = "Artillery 2S3 Platoon";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_2s3_tv";
            };
            class Unit1 {
                position[] = {20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_2s3_tv";
            };
            class Unit2 {
                position[] = {-20.1,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_2s3_tv";
            };
            class Unit3 {
                position[] = {40,-60,3};
                rank = "CORPORAL";
                side = 0;
                vehicle = "rhs_2s3_tv";
            };
        };
        class RHS_SPGSection_tv_2s3 {
            name = "Artillery 2S3 Section";
            side = 0;
            faction = "rhs_faction_rfgf";
            icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
            rarityGroup = 0.5;
            class Unit0 {
                position[] = {0,0,0};
                rank = "LIEUTENANT";
                side = 0;
                vehicle = "rhs_2s3_tv";
            };
            class Unit1 {
                position[] = {20,-30,3};
                rank = "SERGEANT";
                side = 0;
                vehicle = "rhs_2s3_tv";
            };
        };
    };
    class Naval {
        name = "Naval";
    };
    class Air {
        name = "Air";
    };
    class rhs_group_rus_msv_infantry {
        name = "rhs_group_rus_msv_infantry";
    };
    class rhs_group_rus_msv_infantry_emr {
        name = "rhs_group_rus_msv_infantry_emr";
    };
    class rhs_group_rus_msv_Ural {
        name = "rhs_group_rus_msv_Ural";
    };
    class rhs_group_rus_msv_gaz66 {
        name = "rhs_group_rus_msv_gaz66";
    };
    class rhs_group_rus_msv_btr70 {
        name = "rhs_group_rus_msv_btr70";
    };
    class rhs_group_rus_msv_BTR80 {
        name = "rhs_group_rus_msv_BTR80";
    };
    class rhs_group_rus_msv_BTR80a {
        name = "rhs_group_rus_msv_BTR80a";
    };
    class rhs_group_rus_msv_bmp1 {
        name = "rhs_group_rus_msv_bmp1";
    };
    class rhs_group_rus_msv_bmp2 {
        name = "rhs_group_rus_msv_bmp2";
    };
    class rhs_group_rus_MSV_BMP3 {
        name = "rhs_group_rus_MSV_BMP3";
    };
    class rhs_group_rus_MSV_bmp3m {
        name = "rhs_group_rus_MSV_bmp3m";
    };
    class rhs_group_rus_msv_bm21 {
        name = "rhs_group_rus_msv_bm21";
    };
    class rhs_group_rus_tv_14 {
        name = "rhs_group_rus_tv_14";
    };
    class rhs_group_rus_tv_72 {
        name = "rhs_group_rus_tv_72";
    };
    class rhs_group_rus_tv_80 {
        name = "rhs_group_rus_tv_80";
    };
    class rhs_group_rus_tv_90 {
        name = "rhs_group_rus_tv_90";
    };
    class rhs_group_rus_tv_2S1 {
        name = "rhs_group_rus_tv_2S1";
    };
    class rhs_group_rus_tv_2s3 {
        name = "rhs_group_rus_tv_2s3";
    };
};

