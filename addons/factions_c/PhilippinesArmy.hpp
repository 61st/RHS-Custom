
    class CFP_B_USARMY_2003_Squad_Leader_WDL_01;
    class CFP_B_USARMY_2003_Squad_Leader_WDL_01_OCimport_01 : CFP_B_USARMY_2003_Squad_Leader_WDL_01 { scope = 0; class EventHandlers; };
    class CFP_B_USARMY_2003_Squad_Leader_WDL_01_OCimport_02 : CFP_B_USARMY_2003_Squad_Leader_WDL_01_OCimport_01 { class EventHandlers; };
    class CUP_B_M1A1_Woodland_US_Army;
    class CUP_B_M1A1_Woodland_US_Army_OCimport_01 : CUP_B_M1A1_Woodland_US_Army { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1A1_Woodland_US_Army_OCimport_02 : CUP_B_M1A1_Woodland_US_Army_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
        };
    };
    class CUP_B_M1126_ICV_M2_Woodland;
    class CUP_B_M1126_ICV_M2_Woodland_OCimport_01 : CUP_B_M1126_ICV_M2_Woodland { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1126_ICV_M2_Woodland_OCimport_02 : CUP_B_M1126_ICV_M2_Woodland_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class ObsTurret;
            class CommanderTurret;
        };
    };
    class CFP_B_USARMY_2003_HMMWV_M2_WDL_01;
    class CFP_B_USARMY_2003_HMMWV_M2_WDL_01_OCimport_01 : CFP_B_USARMY_2003_HMMWV_M2_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_2003_HMMWV_M2_WDL_01_OCimport_02 : CFP_B_USARMY_2003_HMMWV_M2_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class CFP_B_USARMY_2003_HMMWV_MK19_WDL_01;
    class CFP_B_USARMY_2003_HMMWV_MK19_WDL_01_OCimport_01 : CFP_B_USARMY_2003_HMMWV_MK19_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_2003_HMMWV_MK19_WDL_01_OCimport_02 : CFP_B_USARMY_2003_HMMWV_MK19_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class CFP_B_USARMY_2003_UH_60M_WDL_01;
    class CFP_B_USARMY_2003_UH_60M_WDL_01_OCimport_01 : CFP_B_USARMY_2003_UH_60M_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_2003_UH_60M_WDL_01_OCimport_02 : CFP_B_USARMY_2003_UH_60M_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
        };
    };
    class CFP_B_USARMY_2003_M2_Machine_Gun_WDL_01;
    class CFP_B_USARMY_2003_M2_Machine_Gun_WDL_01_OCimport_01 : CFP_B_USARMY_2003_M2_Machine_Gun_WDL_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_USARMY_2003_M2_Machine_Gun_WDL_01_OCimport_02 : CFP_B_USARMY_2003_M2_Machine_Gun_WDL_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class I_PhilippinesArmy_Squad_Leader_Woodland_01 : CFP_B_USARMY_2003_Squad_Leader_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        identityTypes[] = {"Head_NATO","LanguageENG_F","CUP_G_ARMY"};
        uniformClass = "U_I_CombatUniform_shortsleeve";
        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        weapons[] = {"CUP_arifle_M4A1_standard_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A1_standard_black","CUP_hgun_M9A1"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_standard_black","","CUP_acc_ANPEQ_15_Black_Top","CUP_optic_ACOG_TA01B_Black_PIP",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform_shortsleeve",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"H_HelmetIA","CUP_FR_NeckScarf2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_Team_Leader_Woodland_01 : I_PhilippinesArmy_Squad_Leader_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        identityTypes[] = {"Head_NATO","LanguageENG_F","CUP_G_ARMY"};
        uniformClass = "CUP_U_B_CZ_WDL_NoKneepads";
        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetHBK_headset_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        weapons[] = {"CUP_arifle_HK416_CQB_Wood","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_HK416_CQB_Wood","CUP_hgun_M9A1"};
        magazines[] = {"CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Emag","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_HK416_CQB_Wood","","CUP_acc_ANPEQ_15_Flashlight_OD_L","CUP_optic_HensoldtZO_od_PIP",{"CUP_30Rnd_556x45_Emag",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_CZ_WDL_NoKneepads",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"SmokeShell",2,1},{"CUP_30Rnd_556x45_Emag",8,30}}},{},"H_HelmetHBK_headset_F","CUP_G_ESS_BLK_Scarf_Face_Grn",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_Rifleman_Woodland_01 : I_PhilippinesArmy_Team_Leader_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        identityTypes[] = {"Head_NATO","LanguageENG_F","CUP_G_ARMY"};
        uniformClass = "U_I_CombatUniform";
        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        weapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_M9A1"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"H_HelmetIA","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_Autorifleman_Woodland_01 : I_PhilippinesArmy_Rifleman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        identityTypes[] = {"Head_NATO","LanguageENG_F","CUP_G_ARMY"};
        uniformClass = "U_I_CombatUniform";
        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        weapons[] = {"CUP_lmg_m249_pip1","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_lmg_m249_pip1","CUP_hgun_M9A1"};
        magazines[] = {"CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_15Rnd_9x19_M9","CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_15Rnd_9x19_M9","CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_m249_pip1","","","CUP_optic_ACOG_TA01B_Black_PIP",{"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",200},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform",{{"CUP_HandGrenade_M67",2,1},{"CUP_15Rnd_9x19_M9",3,15}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",3,200}}},{},"H_HelmetIA","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_Light_AT_Woodland_01 : I_PhilippinesArmy_Rifleman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "Light AT";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        identityTypes[] = {"Head_NATO","LanguageENG_F","CUP_G_ARMY"};
        uniformClass = "U_I_CombatUniform";
        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        weapons[] = {"CUP_arifle_M4A3_black","CUP_launch_RPG18","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","CUP_launch_RPG18","CUP_hgun_M9A1"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_RPG18","","","",{},{},""},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"H_HelmetIA","CUP_G_ESS_BLK",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_Light_AA_Woodland_01 : I_PhilippinesArmy_Rifleman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "AA";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        identityTypes[] = {"Head_NATO","LanguageENG_F","CUP_G_ARMY"};
        uniformClass = "U_I_CombatUniform";
        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        weapons[] = {"CUP_arifle_M4A3_black","CUP_launch_FIM92Stinger","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","CUP_launch_FIM92Stinger","CUP_hgun_M9A1"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_RPG18","","","",{},{},""},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"H_HelmetIA","CUP_G_ESS_BLK",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_Heavy_AT_Woodland_01 : I_PhilippinesArmy_Rifleman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy AT";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        identityTypes[] = {"Head_NATO","LanguageENG_F","CUP_G_ARMY"};
        uniformClass = "U_I_CombatUniform_shortsleeve";
        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        weapons[] = {"CUP_arifle_M4A3_black","launch_NLAW_F","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","launch_NLAW_F","CUP_hgun_M9A1"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"launch_NLAW_F","","","",{},{},""},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform_shortsleeve",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"H_HelmetIA","CUP_G_ESS_BLK_Scarf_Face_Grn_GPS",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_Marksman_Woodland_01 : I_PhilippinesArmy_Rifleman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        identityTypes[] = {"Head_NATO","LanguageENG_F","CUP_G_ARMY"};
        uniformClass = "U_I_CombatUniform_shortsleeve";
        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        weapons[] = {"CUP_srifle_m110_kac_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_srifle_m110_kac_black","CUP_hgun_M9A1"};
        magazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9","CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9","CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_m110_kac_black","","CUP_acc_Flashlight","CUP_optic_ACOG_TA01B_Black_PIP",{"CUP_20Rnd_762x51_B_M110",20},{},"CUP_bipod_VLTOR_Modpod_black"},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform_shortsleeve",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_20Rnd_762x51_B_M110",6,20}}},{},"H_HelmetIA","CUP_G_Scarf_Face_Grn",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_JTAC_Woodland_01 : I_PhilippinesArmy_Rifleman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "JTAC";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        identityTypes[] = {"Head_NATO","LanguageENG_F","CUP_G_ARMY"};
        uniformClass = "U_I_CombatUniform_shortsleeve";
        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        weapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_M9A1"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform_shortsleeve",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"SmokeShell",2,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"H_HelmetIA","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_Grenadier_Woodland_01 : I_PhilippinesArmy_Rifleman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        identityTypes[] = {"Head_NATO","LanguageENG_F","CUP_G_ARMY"};
        uniformClass = "U_I_CombatUniform_shortsleeve";
        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetIA","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        weapons[] = {"CUP_arifle_M4A1_BUIS_GL","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A1_BUIS_GL","CUP_hgun_M9A1"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_BUIS_GL","","","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform_shortsleeve",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"1Rnd_HE_Grenade_shell",4,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"H_HelmetIA","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_Crewman_Woodland_01 : I_PhilippinesArmy_Rifleman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        identityTypes[] = {"Head_NATO","LanguageENG_F","CUP_G_ARMY"};
        uniformClass = "U_Tank_green_F";
        linkedItems[] = {"H_HelmetCrew_I","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"H_HelmetCrew_I","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        weapons[] = {"CUP_arifle_M4A1_standard_short_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A1_standard_short_black","CUP_hgun_M9A1"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag_Tracer_Green","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag_Tracer_Green","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag_Tracer_Green","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag_Tracer_Green","CUP_15Rnd_9x19_M9"};
        backpack = "B_LegStrapBag_black_F";
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_standard_short_black","","CUP_acc_Flashlight","CUP_optic_CompM4",{"CUP_30Rnd_556x45_Stanag_Tracer_Green",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_Tank_green_F",{{"ACE_packingBandage",5},{"ACE_quikclot",5},{"ACE_tourniquet",2}}},{},{"B_LegStrapBag_black_F",{{"CUP_15Rnd_9x19_M9",4,15}}},"H_HelmetCrew_I","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_Pilot_Woodland_01 : I_PhilippinesArmy_Rifleman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        identityTypes[] = {"Head_NATO","LanguageENG_F","CUP_G_ARMY"};
        uniformClass = "U_I_CombatUniform";
        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_CrewHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_CrewHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"};
        weapons[] = {"CUP_arifle_M4A1_standard_short_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A1_standard_short_black","CUP_hgun_M9A1"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_standard_short_black","","CUP_acc_Flashlight","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_CombatUniform",{{"ACE_packingBandage",5},{"ACE_quikclot",5},{"ACE_tourniquet",2}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_30Rnd_556x45_Stanag",6,30}}},{},"H_CrewHelmetHeli_O","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","ACE_NVG_Gen4_Black"}};
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_Officer_Woodland_01 : I_PhilippinesArmy_Rifleman_Woodland_01 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        identityTypes[] = {"Head_NATO","LanguageENG_F","CUP_G_ARMY"};
        uniformClass = "U_I_OfficerUniform";
        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","SP_Beret_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","SP_Beret_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_M9A1"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_M9A1"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_ACOG2_PIP",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_I_OfficerUniform",{}},{"V_CarrierRigKBT_01_light_Olive_F",{{"CUP_15Rnd_9x19_M9",4,15},{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag",8,30}}},{},"SP_Beret_Black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_M1A2_Abrams_Woodland_01 : CUP_B_M1A1_Woodland_US_Army_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1A2 Abrams";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        crew = "I_PhilippinesArmy_Crewman_Woodland_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "I_PhilippinesArmy_Crewman_Woodland_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
        };
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\TrackedVehicles\CUP_TrackedVehicles_m1_abrams\Data\m1abrams_01_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\TrackedVehicles\CUP_TrackedVehicles_m1_abrams\Data\m1abrams_02_co.paa'];_unit setObjectTextureGlobal [2,'\CUP\TrackedVehicles\CUP_TrackedVehicles_m1_abrams\Data\m1abrams_03_co.paa'];_unit setObjectTextureGlobal [3,'\CUP\TrackedVehicles\CUP_TrackedVehicles_m1_abrams\Data\m1abrams_mg_mount_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Woodland";
    };
    class I_PhilippinesArmy_M1126_ICV_M2_Woodland_01 : CUP_B_M1126_ICV_M2_Woodland_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1126 ICV M2";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        crew = "I_PhilippinesArmy_Crewman_Woodland_01";
        class Turrets : Turrets {
            class ObsTurret : ObsTurret { gunnerType = "I_PhilippinesArmy_Crewman_Woodland_01"; };
            // class CommanderTurret : CommanderTurret { gunnerType = "CFP_B_USARMY_2003_Crewman_WDL_01"; };
        };
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body1_des_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body2_des_co.paa'];_unit setObjectTextureGlobal [2,'cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_body2_des_co.paa'];_unit setObjectTextureGlobal [3,'cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\icv_des_co.paa'];_unit setObjectTextureGlobal [4,'cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_alfa_des_co.paa'];_unit setObjectTextureGlobal [5,'cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_alfa_des_co.paa'];_unit setObjectTextureGlobal [6,'cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa'];_unit setObjectTextureGlobal [7,'cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa'];_unit setObjectTextureGlobal [8,'cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Woodland";
    };
    class I_PhilippinesArmy_M2_HUMVEE_Woodland_01 : CFP_B_USARMY_2003_HMMWV_M2_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HUMVEE";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        crew = "I_PhilippinesArmy_Rifleman_Woodland_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "I_PhilippinesArmy_Rifleman_Woodland_01"; };
        };
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_MK19_HUMVEE_Woodland_01 : CFP_B_USARMY_2003_HMMWV_MK19_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "MK19 HUMVEE";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        crew = "I_PhilippinesArmy_Rifleman_Woodland_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "I_PhilippinesArmy_Rifleman_Woodland_01"; };
        };
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_UH_60_Woodland_01 : CFP_B_USARMY_2003_UH_60M_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-60";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        crew = "I_PhilippinesArmy_Pilot_Woodland_01";
        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "I_PhilippinesArmy_Pilot_Woodland_01"; };
            class MainTurret : MainTurret { gunnerType = "I_PhilippinesArmy_Crewman_Woodland_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "I_PhilippinesArmy_Crewman_Woodland_01"; };
        };
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class I_PhilippinesArmy_M2_STANDING_Woodland_01 : CFP_B_USARMY_2003_M2_Machine_Gun_WDL_01_OCimport_02 {
        author = "CPT Cury";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 STANDING";
        side = 2;
        faction = "I_PhilippinesArmy_Woodland";
        crew = "CFP_B_USARMY_2003_Rifleman_WDL_01";
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "I_PhilippinesArmy_Rifleman_Woodland_01"; };
        };
        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
    class B_LegStrapBag_black_F;
    class CUP_B_M113A1_olive_USA;
    class CUP_B_M113A3_Med_olive_USA;
    class CUP_B_M113A3_HQ_olive_USA;
    class I_APC_Wheeled_03_cannon_F;
    class CUP_I_C130J_AAF;
    class CUP_I_L39_AAF;
    class I_Truck_02_covered_F;
    class I_Truck_02_medical_F;
    class I_Truck_02_fuel_F;
    class I_Truck_02_ammo_F;
    class CFP_B_USARMY_1991_HMMWV_Avenger_Des_01;

    class I_PhilippinesArmy_Woodland_Jet_Pilot: I_PhilippinesArmy_Pilot_Woodland_01 {
        faction = "I_PhilippinesArmy_Woodland";
        side = 2;
        displayName="Jet Pilot";
        uniformClass="U_I_pilotCoveralls";
        weapons[]={"I_PhilippinesArmy_Woodland_CUP_hgun_M9A1","Put","Throw"};
        respawnWeapons[]={"I_PhilippinesArmy_Woodland_CUP_hgun_M9A1","Put","Throw"};
        items[]={"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_tourniquet","ACE_tourniquet"};
        respawnItems[]={"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_tourniquet","ACE_tourniquet"};
        magazines[]={"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[]={"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_I","V_CarrierRigKBT_01_light_Olive_F"};
        respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_PilotHelmetFighter_I","V_CarrierRigKBT_01_light_Olive_F"};
        backpack="";
    };
    class I_PhilippinesArmy_Woodland_M113A3: CUP_B_M113A1_olive_USA {
        faction = "I_PhilippinesArmy_Woodland";
        side = 2;
        displayName="M113A3";
        hiddenSelectionsTextures[]={"cup\trackedvehicles\cup_trackedvehicles_newm113\data\camo\aaf\main_co.paa","cup\trackedvehicles\cup_trackedvehicles_newm113\data\camo\aaf\unique_co.paa","cup\trackedvehicles\cup_trackedvehicles_newm113\data\camo\aaf\accessories_co.paa","","cup\trackedvehicles\cup_trackedvehicles_m1abrams\data\usarmy_marks\w_front_ca.paa","cup\vehicles\cup_vehicles_core\data\fonts\stencilfont\1_ca.paa","cup\vehicles\cup_vehicles_core\data\fonts\stencilfont\4_ca.paa"};
        crew="I_PhilippinesArmy_Woodland_Crewman";
        typicalCargo[]={"I_PhilippinesArmy_Woodland_Crewman"};
    };
    class I_PhilippinesArmy_Woodland_M113A3_MEV: CUP_B_M113A3_Med_olive_USA {
        faction = "I_PhilippinesArmy_Woodland";
        side = 2;
        displayName="M113A3 MEV";
        hiddenSelectionsTextures[]={"cup\trackedvehicles\cup_trackedvehicles_newm113\data\camo\aaf\main_co.paa","cup\trackedvehicles\cup_trackedvehicles_newm113\data\camo\aaf\unique_co.paa","cup\trackedvehicles\cup_trackedvehicles_newm113\data\camo\aaf\accessories_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_newhmmwv\data\decals\red_crystal_co.paa","cup\trackedvehicles\cup_trackedvehicles_m1abrams\data\usarmy_marks\w_front_ca.paa","cup\vehicles\cup_vehicles_core\data\fonts\stencilfont\6_ca.paa","cup\vehicles\cup_vehicles_core\data\fonts\stencilfont\4_ca.paa"};
        crew="I_PhilippinesArmy_Woodland_Crewman";
        typicalCargo[]={"I_PhilippinesArmy_Woodland_Crewman"};
    };
    class I_PhilippinesArmy_Woodland_M113A3_HQ: CUP_B_M113A3_HQ_olive_USA {
        faction = "I_PhilippinesArmy_Woodland";
        side = 2;
        displayName="M113A3 HQ";
        hiddenSelectionsTextures[]={"cup\trackedvehicles\cup_trackedvehicles_newm113\data\camo\olive\main_co.paa","cup\trackedvehicles\cup_trackedvehicles_newm113\data\camo\olive\unique_co.paa","cup\trackedvehicles\cup_trackedvehicles_newm113\data\camo\olive\accessories_co.paa","","cup\trackedvehicles\cup_trackedvehicles_m1abrams\data\usarmy_marks\w_front_ca.paa","cup\vehicles\cup_vehicles_core\data\fonts\stencilfont\2_ca.paa","cup\vehicles\cup_vehicles_core\data\fonts\stencilfont\4_ca.paa"};
        crew="I_PhilippinesArmy_Woodland_Crewman";
        typicalCargo[]={"I_PhilippinesArmy_Woodland_Crewman"};
    };
    class I_PhilippinesArmy_Woodland_Pandur: I_APC_Wheeled_03_cannon_F {
        faction = "I_PhilippinesArmy_Woodland";
        side = 2;
        displayName="Pandur";
        hiddenSelectionsTextures[]={"a3\armor_f_gamma\apc_wheeled_03\data\apc_wheeled_03_ext_indp_co.paa","a3\armor_f_gamma\apc_wheeled_03\data\apc_wheeled_03_ext2_indp_co.paa","a3\armor_f_gamma\apc_wheeled_03\data\rcws30_indp_co.paa","a3\armor_f_gamma\apc_wheeled_03\data\apc_wheeled_03_ext_alpha_indp_co.paa","a3\armor_f\data\camonet_aaf_digi_green_co.paa","a3\armor_f\data\cage_aaf_co.paa"};
        crew="I_PhilippinesArmy_Crewman_Woodland_01";
        typicalCargo[]={"I_PhilippinesArmy_Crewman_Woodland_01"};
    };
    class I_PhilippinesArmy_Woodland_C130: CUP_I_C130J_AAF {
        faction = "I_PhilippinesArmy_Woodland";
        side = 2;
        displayName="C130";
        hiddenSelectionsTextures[]={"cup\airvehicles\cup_airvehicles_c130j\data\textures\c130j_body_aaf_co.paa","cup\airvehicles\cup_airvehicles_c130j\data\textures\c130j_wings_aaf_co.paa"};
        crew="I_PhilippinesArmy_Woodland_Jet_Pilot";
        typicalCargo[]={"I_PhilippinesArmy_Woodland_Jet_Pilot"};
    };
    class I_PhilippinesArmy_Woodland_L_39ZA: CUP_I_L39_AAF {
        faction = "I_PhilippinesArmy_Woodland";
        side = 2;
        displayName="L 39ZA";
        hiddenSelectionsTextures[]={"a3\air_f_gamma\plane_fighter_03\data\plane_fighter_03_body_1_indp_co.paa","a3\air_f_gamma\plane_fighter_03\data\plane_fighter_03_body_2_indp_co.paa"};
        crew="I_PhilippinesArmy_Woodland_Jet_Pilot";
        typicalCargo[]={"I_PhilippinesArmy_Woodland_Jet_Pilot"};
    };
    class I_PhilippinesArmy_Woodland_KamAZ: I_Truck_02_covered_F {
        faction = "I_PhilippinesArmy_Woodland";
        side = 2;
        displayName="KamAZ";
        hiddenSelectionsTextures[]={"a3\soft_f_beta\truck_02\data\truck_02_kab_indp_co.paa","a3\soft_f_beta\truck_02\data\truck_02_kuz_indp_co.paa","a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        crew="I_PhilippinesArmy_Rifleman_Woodland_01";
        typicalCargo[]={"I_PhilippinesArmy_Rifleman_Woodland_01"};
    };
    class I_PhilippinesArmy_Woodland_KamAZ_MEV: I_Truck_02_medical_F {
        faction = "I_PhilippinesArmy_Woodland";
        side = 2;
        displayName="KamAZ MEV";
        hiddenSelectionsTextures[]={"a3\soft_f_beta\truck_02\data\truck_02_kab_indp_co.paa","a3\soft_f_beta\truck_02\data\truck_02_kuz_indp_co.paa","a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        crew="I_PhilippinesArmy_Rifleman_Woodland_01";
        typicalCargo[]={"I_PhilippinesArmy_Rifleman_Woodland_01"};
    };
    class I_PhilippinesArmy_Woodland_KamAZ_Fuel: I_Truck_02_fuel_F {
        faction = "I_PhilippinesArmy_Woodland";
        side = 2;
        displayName="KamAZ Fuel";
        hiddenSelectionsTextures[]={"a3\soft_f_beta\truck_02\data\truck_02_kab_indp_co.paa","a3\soft_f_beta\truck_02\data\truck_02_fuel_indp_co.paa","a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        crew="I_PhilippinesArmy_Rifleman_Woodland_01";
        typicalCargo[]={"I_PhilippinesArmy_Rifleman_Woodland_01"};
    };
    class I_PhilippinesArmy_Woodland_KamAZ_Ammo: I_Truck_02_ammo_F {
        faction = "I_PhilippinesArmy_Woodland";
        side = 2;
        displayName="KamAZ Ammo";
        hiddenSelectionsTextures[]={"a3\soft_f_beta\truck_02\data\truck_02_kab_indp_co.paa","a3\soft_f_beta\truck_02\data\truck_02_repair_indp_co.paa","a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
        crew="I_PhilippinesArmy_Rifleman_Woodland_01";
        typicalCargo[]={"I_PhilippinesArmy_Rifleman_Woodland_01"};
    };
    class I_PhilippinesArmy_Woodland_Avenger: CFP_B_USARMY_1991_HMMWV_Avenger_Des_01 {
        faction = "I_PhilippinesArmy_Woodland";
        side = 2;
        displayName="Avenger";
        hiddenSelectionsTextures[]={"cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_body_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_m998a2_avenger_1_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_m998a2_avenger_3_co.paa"};
        crew="I_PhilippinesArmy_Crewman_Woodland_01";
        typicalCargo[]={"I_PhilippinesArmy_Crewman_Woodland_01"};
    };