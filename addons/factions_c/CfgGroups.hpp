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
class CfgGroups {
    class East {
        class O_CebuArmy_Woodland {
            name = "Cebu Armed Forces";
            class Infantry {
                name="Infantry";

                class O_CebuArmy_Woodland_R_Squad {
                    name="Squad";
                    faction="O_CebuArmy_Woodland";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle="O_CebuArmy_Team_Leader_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-0,0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle="O_CebuArmy_Team_Leader_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-5,0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle="O_CebuArmy_Squad_Leader_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-10,0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle="O_CebuArmy_Grenadier_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-15,0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle="O_CebuArmy_Grenadier_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-20,0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle="O_CebuArmy_Autorifleman_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-25,0};
                    };
                    class Unit6 {
                        side = 0;
                        vehicle="O_CebuArmy_Autorifleman_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-30,0};
                    };
                    class Unit7 {
                        side = 0;
                        vehicle="O_CebuArmy_Rifleman_M4_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-35,0};
                    };
                    class Unit8 {
                        side = 0;
                        vehicle="O_CebuArmy_Rifleman_M4_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-40,0};
                    };
                };
                class O_CebuArmy_Woodland_R_Support_Team {
                    name="Support Team";
                    faction="O_CebuArmy_Woodland";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle="O_CebuArmy_Squad_Leader_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-0,0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle="O_CebuArmy_Light_AT_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-5,0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle="O_CebuArmy_Heavy_AT_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-10,0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle="O_CebuArmy_Team_Leader_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-15,0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle="O_CebuArmy_Team_Leader_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-20,0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle="O_CebuArmy_Light_AT_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-25,0};
                    };
                    class Unit6 {
                        side = 0;
                        vehicle="O_CebuArmy_Heavy_AT_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-30,0};
                    };
                };
                class O_CebuArmy_Woodland_R_Sniper_Team {
                    name="Sniper Team";
                    faction="O_CebuArmy_Woodland";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle="O_CebuArmy_Sniper_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-0,0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle="O_CebuArmy_Sniper_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-5,0};
                    };
                };
                class O_CebuArmy_Woodland_R_AA_Team {
                    name="AA Team";
                    faction="O_CebuArmy_Woodland_O_CebuArmy_Woodland";
                    side = 0;
                    class Unit0
                    {
                        side = 0;
                        vehicle="O_CebuArmy_Rifleman_M4_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle="O_CebuArmy_Heavy_AA_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-5,0};
                    };
                };
            };
            class Motorized {
                name="Motorized";

                class O_CebuArmy_Woodland_R_AA_Team {
                name="AA Team";
                faction="O_CebuArmy_Woodland";
                side = 0;
                class Unit0 {
                    side = 0;
                    vehicle="O_CebuArmy_AA_Missle_woodland_01";
                    rank="PRIVATE";
                    position[]={0,-0,0};
                };
                class Unit1 {
                    side = 0;
                    vehicle="O_CebuArmy_AA_Missle_woodland_01";
                    rank="MAJOR";
                    position[]={0,-15,0};
                };
                };
                class O_CebuArmy_Woodland_R_Jeep_Patrol {
                name="Jeep Patrol";
                faction="O_CebuArmy_Woodland";
                side = 0;
                class Unit0 {
                    side = 0;
                    vehicle="O_CebuArmy_M2_Landrover_woodland_01";
                    rank="SERGEANT";
                    position[]={0,-0,0};
                };
                class Unit1 {
                    side = 0;
                    vehicle="O_CebuArmy_M2_Landrover_woodland_01";
                    rank="SERGEANT";
                    position[]={0,-15,0};
                };
                };
            };
            class Mechanized {
                name="Mechanized";

                class O_CebuArmy_Woodland_R_AA_Vic_Team {
                    name="AA Vic Team";
                    faction="O_CebuArmy_Woodland";
                    side = 0;
                    class Unit0 {
                        side = 0;
                        vehicle="O_CebuArmy_M163A1_Vad_woodland_01";
                        rank="MAJOR";
                        position[]={0,-0,0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle="O_CebuArmy_M163A1_Vad_woodland_01";
                        rank="PRIVATE";
                        position[]={0,-15,0};
                    };
                };
            };
            class Armored {
                name="Armored";

                class O_CebuArmy_Woodland_R_M60_Tank_Team {
                name="M60 Tank Team";
                faction="O_CebuArmy_Woodland";
                side = 0;
                class Unit0 {
                    side = 0;
                    vehicle="O_CebuArmy_Tank_woodland_01";
                    rank="COLONEL";
                    position[]={0,-0,0};
                };
                class Unit1 {
                    side = 0;
                    vehicle="O_CebuArmy_Tank_woodland_01";
                    rank="SERGEANT";
                    position[]={0,-15,0};
                };
                };
                class O_CebuArmy_Woodland_R_Mixed_Tank_Team {
                name="Mixed Tank Team";
                faction="O_CebuArmy_Woodland";
                side = 0;
                class Unit0 {
                    side = 0;
                    vehicle="O_CebuArmy_M1A1_Abrams_woodland_01";
                    rank="COLONEL";
                    position[]={0,-0,0};
                };
                class Unit1 {
                    side = 0;
                    vehicle="O_CebuArmy_Tank_woodland_01";
                    rank="PRIVATE";
                    position[]={0,-15,0};
                };
                };
            };
            class SpecOps {
                name="Special Forces";

            };
            class Support {
                name="Support Infantry";

            };
            class Airborne {
                name="Airborne";

            };
            class Air {
                name="Air";

            };
        };
    };
    class Indep {
        class I_PhilippinesArmy_Woodland {
            name = "Philippines Armed Forces ";
            class Infantry {
                name = "Infantry";
                class CFP_B_USARMY_1991_WDL_RifleSquad {
                    name = "Rifle Squad";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Squad_Leader_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Team_Leader_Woodland_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Team_Leader_Woodland_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Rifleman_Woodland_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Rifleman_Woodland_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Autorifleman_Woodland_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Autorifleman_Woodland_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Grenadier_Woodland_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Grenadier_Woodland_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_TeamAT {
                    name = "Team (AT)";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.1;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Light_AT_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Heavy_AT_Woodland_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_Team {
                    name = "Team";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Rifleman_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Team_Leader_Woodland_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Autorifleman_Woodland_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Grenadier_Woodland_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_SniperTeam {
                    name = "Sniper Team";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;
                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Sniper_WDL_01";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Sniper_WDL_01";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Spotter_WDL_01";
                    };
                };
                class I_PhilippinesArmy_infantry_marksman_team_woodland {
                    name = "Marksman Team";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Marksman_Woodland_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_PhilippinesArmy_Marksman_Woodland_01";
                    };
                };
                class I_PhilippinesArmy_Woodland_B_AA_Team{
                    name="AA Team";
                    faction="I_PhilippinesArmy_Woodland_I_PhilippinesArmy_Woodland";
                    side = 2;
                    class Unit0
                    {
                    side = 2;
                    vehicle="I_PhilippinesArmy_Light_AA_Woodland_01";
                    rank="PRIVATE";
                    position[]={0,-0,0};
                    };
                    class Unit1
                    {
                    side = 2;
                    vehicle="I_PhilippinesArmy_Light_AA_Woodland_01";
                    rank="PRIVATE";
                    position[]={0,-5,0};
                    };
                };
            };
            class SpecOps {
                name = "SpecOps";
                class CFP_B_USARMY_1991_WDL_SFSquad {
                    name = "SF Squad";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Team_Leader_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Grenadier_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Explosives_Specialist_WDL_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Medic_WDL_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Auto_Rifleman_WDL_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Marksman_WDL_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Rifleman_WDL_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_SFFireTeam {
                    name = "SF Fire Team";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Team_Leader_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Grenadier_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Rifleman_WDL_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Auto_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_MotorizedSFTeam_Mk19 {
                    name = "Motorized SF Team [HMMWV SOV Mk19]";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_HMMWV_SOV_Mk19_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Team_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Grenadier_WDL_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Auto_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_MotorizedSFTeam_M2 {
                    name = "Motorized SF Team [HMMWV SOV M2]";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_HMMWV_SOV_M2_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Team_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Grenadier_WDL_01";
                    };
                    class Unit3 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_SF_Auto_Rifleman_WDL_01";
                    };
                };
            };
            class Motorized {
                name = "Motorized";
                class CFP_B_USARMY_1991_WDL_motorized_infantry_squad_mtvr {
                    name = "Motorized Infantry squad [MTVR]";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_MTVR_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Squad_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Grenadier_WDL_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Rifleman_AT_WDL_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Grenadier_WDL_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Asst_Auto_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_motorized_fire_team_humvee_m2 {
                    name = "Motorized Fire Team [Humvee M2]";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_HMMWV_M2_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_motorized_fire_team_humvee_mk19 {
                    name = "Motorized Fire Team [Humvee Mk19]";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_HMMWV_MK19_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_motorized_at_team {
                    name = "Motorized AT Team";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_HMMWV_TOW_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_AT_Specialist_Dragon_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Asst_AT_Specialist_Dragon_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_motorized_aa_team {
                    name = "Motorized AA Team";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_HMMWV_M2_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_AA_Specialist_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_AA_Specialist_WDL_01";
                    };
                };
            };
            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";
            };
            class Support {
                name = "Support";
            };
            class Mechanized {
                name = "Mechanized";
                class CFP_B_USARMY_1991_WDL_mechanized_infantry_squad_m113 {
                    name = "Mechanized Infantry Squad [M113]";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_M113A3_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Squad_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Grenadier_WDL_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Rifleman_AT_WDL_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Grenadier_WDL_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Asst_Auto_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_mechanized_infantry_squad_m2a2_bradley {
                    name = "Mechanized Infantry Squad [M2A2 Bradley]";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_M2A2_Bradley_IFV_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Squad_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Rifleman_AT_WDL_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Asst_Auto_Rifleman_WDL_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Rifleman_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_mechanized_infantry_squad_m2a3_bradley {
                    name = "Mechanized Infantry Squad [M2A3 Bradley]";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_M2A3_ERA_Bradley_IFV_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Squad_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Rifleman_AT_WDL_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Asst_Auto_Rifleman_WDL_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_Rifleman_WDL_01";
                    };
                };
            };
            class Armored {
                name = "Armored";
                class CFP_B_USARMY_1991_WDL_armored_m1a1_section {
                    name = "M1A1 Section";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_M1A1_Abrams_WDL_01";
                    };
                    class Unit1 {
                        position[] = {9,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_M1A1_Abrams_WDL_01";
                    };
                };
            };
            class Artillery {
                name = "Artillery";
                class CFP_B_USARMY_1991_WDL_artillery_m270_section_he {
                    name = "M270 Section [HE]";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_M270_MLRS_HE_WDL_01";
                    };
                    class Unit1 {
                        position[] = {7,-11,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_M270_MLRS_HE_WDL_01";
                    };
                };
                class CFP_B_USARMY_1991_WDL_artillery_m270_section_dpicm {
                    name = "M270 Section [DPICM]";
                    side = 2;
                    faction = "I_PhilippinesArmy_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_M270_MLRS_DPICM_WDL_01";
                    };
                    class Unit1 {
                        position[] = {7,-11,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "CFP_B_USARMY_1991_M270_MLRS_DPICM_WDL_01";
                    };
                };
            };
            class Naval {
                name = "Naval";
            };
            class Air {
                name = "Air";
            };
        };
    };
};
