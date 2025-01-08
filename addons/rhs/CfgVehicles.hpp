    // accuracy: 3.5 = sniper, 1.5 = soldier, 0.9 = truck, 0.5 = small vehicle 0.2 = building
    // armor: 3 = soldier, 20 = car, 150 = building, 150-300 = bmp, 300 = boat, 400-900 = tank, 10000 = ship
    // audible: 0.05 = soldier, 3 = motorcycle, 6 = tank, 18 = vanilla merkava/rhs tank
    // camouflage: 1 = soldier, 4 = truck, 8 = tank
    // radarTargetSize: 0.1 = fully stealth, 0.7 = small aircraft/semi-stealth, 1 = mid sized aircraft/car, 1.2 = tank/truck, 2 = large bomber (max value)

class CBA_Extended_EventHandlers;
class DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class AnimationSources;
class HScrollbar;
class IGUIBack;
class RscButton;
class RscButtonMenu;
class RscControlsGroup {
    class VScrollbar;
    class HScrollbar;
};
class RscOpticsText;
class RscOpticsValue;
class RscPicture;
class RscShortcutButton;
class RscText;
class RscTextCheckBox;
class VScrollbar;
class CfgVehicles {
    class rhs_vdv_gorka_r_g_gloves_rifleman;
    class GVAR(moppsuit_item): rhs_vdv_gorka_r_g_gloves_rifleman {
        author = QAUTHOR;
        side = 1;
        displayName = "[61ST] MOPP Suit";
        hiddenSelections[]={"camo1", "camo2"};
        hiddenSelectionsTextures[]={QPATHTOF(data\mopp_mc.paa), QPATHTOF(data\mopp_gloves.paa)};
        class TransportItems {
            class GVAR(moppsuit) {
                name = QGVAR(moppsuit);
                count = 1;
            };
        };
    };
    class B_AssaultPack_Base;
    class rhs_sidor: B_AssaultPack_Base {
        maximumLoad = 160;
    };
    class rhs_rpg: B_AssaultPack_Base {
        maximumLoad = 160;
    };
    class rhs_medic_bag: B_AssaultPack_Base {
        mass = 20;
        maximumLoad = 160;
    };
    class rhsusf_assault_eagleaiii_ucp : B_AssaultPack_Base {
        mass = 50; // 20
        maximumLoad = 280; // 160
    };
    class LandVehicle;
    class Car: LandVehicle {
        class NewTurret;
    };
    class Car_F: Car {
        class AnimationSources;
        class Turrets {
            class MainTurret: NewTurret {
                class ViewOptics;
            };
        };
        class HitPoints {
            class HitLFWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRF2Wheel;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
        };
    };
    class Tank : LandVehicle {
        class NewTurret;
        class Sounds;
        class HitPoints;
    };
    class Tank_F : Tank {
        class Turrets {
            class MainTurret : NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
        class AnimationSources;
        class ViewPilot;
        class ViewOptics;
        class ViewCargo;
        class HeadLimits;
        class HitPoints : HitPoints {
            class HitHull;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
        class Sounds : Sounds {
            class Engine;
            class Movement;
        };
    };
    class MBT_01_base_F : Tank_F {
        class EventHandlers;
        class Turrets {
            class MainTurret : NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
    };
    class Wheeled_APC_F : Car_F {
        class ViewPilot;
        class ViewOptics;
        class ViewCargo;
        class NewTurret;
        class Turrets {
            class MainTurret : NewTurret {
                class ViewOptics;
                class ViewGunner;
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
        class EventHandlers;
        class Components;
    };
    // Abrams
    class rhsusf_m1a1tank_base : MBT_01_base_F {
        acre_hasInfantryPhone = 1;
        acre_infantryPhoneIntercom[] = {"CrewIntercom"};
        acre_infantryPhoneControlActions[] = {"CrewIntercom"};
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"crew"};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"crew"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class OpticsIn {
                    class Wide : ViewOptics {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                    class Medium : Wide {
                    };
                    class Wide_TI : Wide {
                        gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_2";
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                    class Wide2_TI : Wide_TI {
                        gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_2";
                    };
                    class Medium_TI : Wide_TI {
                        gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_2";
                    };
                    class Medium2_TI : Wide_TI {
                        gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_2";
                    };
                    class Narrow_TI : Wide_TI {
                        gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_2";
                    };
                };
            };
        };
    };
    class rhsusf_m1a1hc_wd : rhsusf_m1a1tank_base {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class OpticsIn {
                    class Wide : ViewOptics {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                    class Medium : Wide {
                    };
                    class Wide_TI : Wide {
                        gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_2";
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                    class Wide2_TI : Wide_TI {
                        gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_2";
                    };
                    class Medium_TI : Wide_TI {
                        gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_2";
                    };
                    class Medium2_TI : Wide_TI {
                        gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_2";
                    };
                    class Narrow_TI : Wide_TI {
                        gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_2";
                    };
                };
            };
        };
    };
    class rhsusf_m1a2tank_base : rhsusf_m1a1tank_base {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class OpticsIn {
                    class Wide : ViewOptics {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                    class Medium : Wide {
                    };
                    class Wide_TI : Wide {
                        gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1_2";
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                    class Wide2_TI : Wide_TI {
                        gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1_2";
                    };
                    class Medium_TI : Wide_TI {
                        gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1_2";
                    };
                    class Medium2_TI : Wide_TI {
                        gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1_2";
                    };
                    class Narrow_TI : Wide_TI {
                        gunnerOpticsModel="\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1_2";
                    };
                };
            };
        };
    };
    class rhsusf_m1a2sep2_base : rhsusf_m1a2tank_base {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics;
                    class CROWS_Turret : CommanderOptics {
                        weapons[]={"RHS_M2_Abrams_Commander", "Laserdesignator_vehicle"};
                        magazines[]={"rhs_mag_100rnd_127x99_mag_Tracer_Red", "rhs_mag_100rnd_127x99_mag_Tracer_Red", "rhs_mag_100rnd_127x99_mag_Tracer_Red", "rhs_mag_100rnd_127x99_mag_Tracer_Red", "rhs_mag_100rnd_127x99_mag_Tracer_Red", "rhs_mag_100rnd_127x99_mag_Tracer_Red", "rhs_mag_100rnd_127x99_mag_Tracer_Red", "rhs_mag_100rnd_127x99_mag_Tracer_Red", "rhs_mag_100rnd_127x99_mag_Tracer_Red", "rhs_mag_100rnd_127x99_mag_Tracer_Red", "Laserbatteries"};
                    };
                };
            };
        };
    };
    class MRAP_01_base_F: Car_F {
        class Sounds;
        class EventHandlers;
        class Components;
    };
    class rhsusf_MATV_base : MRAP_01_base_F {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_intercom";
                shortName = "$STR_ACRE_sys_intercom_intercom";
                allowedPositions[] = {"crew", {"cargo", "all"}};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Crew Rack";
                shortName = "Crew";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {{"turret", "all"}, {"cargo", 1}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Pax Rack";
                shortName = "Pax";
                allowedPositions[] = {{"cargo", "all"}};
            };
        };
        armor = 220; // 100
        audible = 5; // 6
        maxOmega = 600; // 230.38
        maxSpeed = 115; // 105
        normalSpeedForwardCoef = 0.7; // 0.48
    };
    // M113
    class APC_Tracked_02_base_F;
    class rhsusf_m113tank_base: APC_Tracked_02_base_F {
        acre_hasInfantryPhone = 1;
        acre_infantryPhoneIntercom[] = {"CrewIntercom"};
        acre_infantryPhoneControlActions[] = {"CrewIntercom"};
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 3;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Crew Rack";
                shortName = "Crew";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"crew"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Pax Rack";
                shortName = "Pax";
                allowedPositions[] = {{"cargo", "all"}};
            };
        };
    };
    // Ambulance
    class rhsusf_caiman_base;
    class rhsusf_M1220_usarmy_d: rhsusf_caiman_base {};
    class rhsusf_M1230a1_usarmy_d: rhsusf_M1220_usarmy_d {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 3;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Crew Rack";
                shortName = "Crew";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"crew"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Pax Rack";
                shortName = "Pax";
                allowedPositions[] = {{"cargo", "all"}};
            };
        };
    };
    class rhsusf_hmmwe_base: MRAP_01_base_F {
        class AcreIntercoms {};
        class AcreRacks {
            class Rack_1 {
                displayName = "Dash Lower";
                shortName = "D.Low";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"crew", "all"};
            };
            class Rack_2 {
                displayName = "Dash Upper";
                shortName = "D.Up";
                componentName = "ACRE_VRC110";
                allowedPositions[] = {"crew", "all"};
            };
        };
        dlc="RHS_USAF";
        category="Car";
        insideSoundCoef=0.40000001;
        
        class Sounds {
            class Idle_ext {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle",
                    0.39810717,
                    1,
                    150
                };
                frequency="0.95 + ((rpm/ 3400) factor[(604/ 3400),(1058/ 3400)])*0.15";
                volume="engineOn*camPos*(((rpm/ 3400) factor[(453/ 3400),(831/ 3400)]) * ((rpm/ 3400) factor[(1360/ 3400),(982/ 3400)]))";
            };
            class Engine {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1",
                    0.44668359,
                    1,
                    250
                };
                frequency="0.9 + ((rpm/ 3400) factor[(1058/ 3400),(1587/ 3400)])*0.2";
                volume="engineOn*camPos*(((rpm/ 3400) factor[(1058/ 3400),(1360/ 3400)]) * ((rpm/ 3400) factor[(1738/ 3400),(1511/ 3400)]))";
            };
            class Engine1_ext {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2",
                    0.56234133,
                    1,
                    300
                };
                frequency="0.9 +  ((rpm/ 3400) factor[(1587/ 3400),(2116/ 3400)])*0.2";
                volume="engineOn*camPos*(((rpm/ 3400) factor[(1436/ 3400),(1738/ 3400)]) * ((rpm/ 3400) factor[(2267/ 3400),(1889/ 3400)]))";
            };
            class Engine2_ext {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid",
                    0.70794576,
                    1,
                    350
                };
                frequency="0.9 + ((rpm/ 3400) factor[(2116/ 3400),(2720/ 3400)])*0.2";
                volume="engineOn*camPos*(((rpm/ 3400) factor[(1889/ 3400),(2342/ 3400)]) * ((rpm/ 3400) factor[(2569/ 3400),(2796/ 3400)]))";
            };
            class Engine3_ext {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high",
                    1,
                    1,
                    400
                };
                frequency="0.95 + ((rpm/ 3400) factor[(2720/ 3400),(3400/ 3400)])*0.1";
                volume="engineOn*camPos*((rpm/ 3400) factor[(2871/ 3400),(3400/ 3400)])";
            };
            class IdleThrust {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle",
                    0.56234133,
                    1,
                    200
                };
                frequency="0.95 + ((rpm/ 3400) factor[(604/ 3400),(1058/ 3400)])*0.15";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3400) factor[(453/ 3400),(831/ 3400)]) * ((rpm/ 3400) factor[(1360/ 3400),(982/ 3400)]))";
            };
            class EngineThrust {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",
                    0.70794576,
                    1,
                    350
                };
                frequency="0.9 + ((rpm/ 3400) factor[(1058/ 3400),(1587/ 3400)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3400) factor[(1058/ 3400),(1360/ 3400)]) * ((rpm/ 3400) factor[(1738/ 3400),(1511/ 3400)]))";
            };
            class Engine1_Thrust_ext {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2",
                    0.89125091,
                    1,
                    400
                };
                frequency="0.9 +  ((rpm/ 3400) factor[(1587/ 3400),(2116/ 3400)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3400) factor[(1436/ 3400),(1738/ 3400)]) * ((rpm/ 3400) factor[(2267/ 3400),(1889/ 3400)]))";
            };
            class Engine2_Thrust_ext {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid",
                    1.1220185,
                    1,
                    425
                };
                frequency="0.9 + ((rpm/ 3400) factor[(2116/ 3400),(2720/ 3400)])*0.2";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3400) factor[(1889/ 3400),(2342/ 3400)]) * ((rpm/ 3400) factor[(3400/ 3400),(2796/ 3400)]))";
            };
            class Engine3_Thrust_ext {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high",
                    1.2589254,
                    1,
                    450
                };
                frequency="0.95 + ((rpm/ 3400) factor[(2720/ 3400),(3400/ 3400)])*0.1";
                volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 3400) factor[(2871/ 3400),(3400/ 3400)])";
            };
            class Idle_int {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle",
                    0.25118864,
                    1
                };
                frequency="0.95 + ((rpm/ 3400) factor[(604/ 3400),(1058/ 3400)])*0.15";
                volume="engineOn*(1-camPos)*(((rpm/ 3400) factor[(453/ 3400),(831/ 3400)]) * ((rpm/ 3400) factor[(1360/ 3400),(982/ 3400)]))";
            };
            class Engine_int {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1",
                    0.31622776,
                    1
                };
                frequency="0.9 + ((rpm/ 3400) factor[(1058/ 3400),(1587/ 3400)])*0.2";
                volume="engineOn*(1-camPos)*(((rpm/ 3400) factor[(1058/ 3400),(1360/ 3400)]) * ((rpm/ 3400) factor[(1738/ 3400),(1511/ 3400)]))";
            };
            class Engine1_int {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2",
                    0.39810717,
                    1
                };
                frequency="0.9 +  ((rpm/ 3400) factor[(1587/ 3400),(2116/ 3400)])*0.2";
                volume="engineOn*(1-camPos)*(((rpm/ 3400) factor[(1436/ 3400),(1738/ 3400)]) * ((rpm/ 3400) factor[(2267/ 3400),(1889/ 3400)]))";
            };
            class Engine2_int {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid",
                    0.50118721,
                    1
                };
                frequency="0.9 + ((rpm/ 3400) factor[(2116/ 3400),(2720/ 3400)])*0.2";
                volume="engineOn*(1-camPos)*(((rpm/ 3400) factor[(1889/ 3400),(2342/ 3400)]) * ((rpm/ 3400) factor[(3400/ 3400),(2796/ 3400)]))";
            };
            class Engine3_int {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high",
                    0.63095737,
                    1
                };
                frequency="0.95 + ((rpm/ 3400) factor[(2720/ 3400),(3400/ 3400)])*0.1";
                volume="engineOn*(1-camPos)*((rpm/ 3400) factor[(2871/ 3400),(3400/ 3400)])";
            };
            class IdleThrust_int {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle",
                    0.3548134,
                    1
                };
                frequency="0.95 + ((rpm/ 3400) factor[(604/ 3400),(1058/ 3400)])*0.15";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3400) factor[(453/ 3400),(831/ 3400)]) * ((rpm/ 3400) factor[(1360/ 3400),(982/ 3400)]))";
            };
            class EngineThrust_int {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",
                    0.44668359,
                    1
                };
                frequency="0.9 + ((rpm/ 3400) factor[(1058/ 3400),(1587/ 3400)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3400) factor[(1058/ 3400),(1360/ 3400)]) * ((rpm/ 3400) factor[(1738/ 3400),(1511/ 3400)]))";
            };
            class Engine1_Thrust_int {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2",
                    0.56234133,
                    1
                };
                frequency="0.9 +  ((rpm/ 3400) factor[(1587/ 3400),(2116/ 3400)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3400) factor[(1436/ 3400),(1738/ 3400)]) * ((rpm/ 3400) factor[(2267/ 3400),(1889/ 3400)]))";
            };
            class Engine2_Thrust_int {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid",
                    0.70794576,
                    1
                };
                frequency="0.9 + ((rpm/ 3400) factor[(2116/ 3400),(2720/ 3400)])*0.2";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3400) factor[(1889/ 3400),(2342/ 3400)]) * ((rpm/ 3400) factor[(3400/ 3400),(2796/ 3400)]))";
            };
            class Engine3_Thrust_int {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high",
                    0.79432821,
                    1
                };
                frequency="0.95 + ((rpm/ 3400) factor[(2720/ 3400),(3400/ 3400)])*0.1";
                volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 3400) factor[(2116/ 3400),(3400/ 3400)])";
            };
            class TiresRockOut {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
                    1.4125376,
                    1,
                    60
                };
                frequency="1";
                volume="camPos*rock*(speed factor[2, 20])";
            };
            class TiresSandOut {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
                    1.4125376,
                    1,
                    60
                };
                frequency="1";
                volume="camPos*sand*(speed factor[2, 20])";
            };
            class TiresGrassOut {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
                    1.2589254,
                    1,
                    60
                };
                frequency="1";
                volume="camPos*grass*(speed factor[2, 20])";
            };
            class TiresMudOut {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
                    1.1220185,
                    1,
                    60
                };
                frequency="1";
                volume="camPos*mud*(speed factor[2, 20])";
            };
            class TiresGravelOut {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
                    1.2589254,
                    1,
                    60
                };
                frequency="1";
                volume="camPos*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltOut {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
                    1.1220185,
                    1,
                    60
                };
                frequency="1";
                volume="camPos*asphalt*(speed factor[2, 20])";
            };
            class NoiseOut {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
                    1.1220185,
                    1,
                    90
                };
                frequency="1";
                volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
            };
            class TiresRockIn {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
                    0.70794576,
                    1
                };
                frequency="1";
                volume="(1-camPos)*rock*(speed factor[2, 20])";
            };
            class TiresSandIn {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
                    0.70794576,
                    1
                };
                frequency="1";
                volume="(1-camPos)*sand*(speed factor[2, 20])";
            };
            class TiresGrassIn {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
                    0.70794576,
                    1
                };
                frequency="1";
                volume="(1-camPos)*grass*(speed factor[2, 20])";
            };
            class TiresMudIn {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
                    0.70794576,
                    1
                };
                frequency="1";
                volume="(1-camPos)*mud*(speed factor[2, 20])";
            };
            class TiresGravelIn {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
                    0.70794576,
                    1
                };
                frequency="1";
                volume="(1-camPos)*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltIn {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
                    0.70794576,
                    1
                };
                frequency="1";
                volume="(1-camPos)*asphalt*(speed factor[2, 20])";
            };
            class NoiseIn {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
                    0.56234133,
                    1
                };
                frequency="1";
                volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
            };
            class breaking_ext_road {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
                    0.70794576,
                    1,
                    80
                };
                frequency=1;
                volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
            };
            class acceleration_ext_road {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    0.70794576,
                    1,
                    80
                };
                frequency=1;
                volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_ext_road {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    0.70794576,
                    1,
                    80
                };
                frequency=1;
                volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_ext_road {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    0.70794576,
                    1,
                    80
                };
                frequency=1;
                volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_ext_dirt {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
                    0.70794576,
                    1,
                    60
                };
                frequency=1;
                volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
            };
            class acceleration_ext_dirt {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",
                    0.70794576,
                    1,
                    60
                };
                frequency=1;
                volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_ext_dirt {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
                    0.70794576,
                    1,
                    60
                };
                frequency=1;
                volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_ext_dirt {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
                    0.70794576,
                    1,
                    60
                };
                frequency=1;
                volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_int_road {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
                    0.63095737,
                    1
                };
                frequency=1;
                volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
            };
            class acceleration_int_road {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
                    0.63095737,
                    1
                };
                frequency=1;
                volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_int_road {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
                    0.63095737,
                    1
                };
                frequency=1;
                volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_int_road {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
                    0.63095737,
                    1
                };
                frequency=1;
                volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_int_dirt {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
                    0.63095737,
                    1
                };
                frequency=1;
                volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
            };
            class acceleration_int_dirt {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",
                    0.63095737,
                    1
                };
                frequency=1;
                volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_int_dirt {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
                    0.63095737,
                    1
                };
                frequency=1;
                volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_int_dirt {
                sound[]= {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
                    0.63095737,
                    1
                };
                frequency=1;
                volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
        };
        class EventHandlers: EventHandlers {
            init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
        };
    };
    // RHS MRZR-4
    class rhsusf_mrzr_base;
    class rhsusf_mrzr4_d : rhsusf_mrzr_base {
        class AcreIntercoms {};
        class AcreRacks {};
        accuracy = 1.25; // 0.25
        accuracyDarkNightLightsOff = 0.0005; // 0.001
        accuracyNightLightsOff = 0.003; // 0.006
        accuracyNightLightsOn = 0.05; // 0.1
        audible = 0.75; // 5
        camouflage = 1.15; // 2
        irTargetSize = 0.2; // n.a.
        maxOmega = 950; // 837.76
        visualTargetSize = 0.2; // n.a.
    };
    // Strykers
    class rhsusf_stryker_base: Wheeled_APC_F {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"all"};
                limitedPositions[] = {};
                numLimitedPositions = 1;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";
                allowedPositions[] = {"all"};
                limitedPositions[] = {};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Crew Rack";
                shortName = "Crew";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"all"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Pax Rack";
                shortName = "Pax";
                allowedPositions[] = {"all"};
            };
        };
    };
    class rhsusf_stryker_m1126_base: rhsusf_stryker_base {
        armor = 220; // 120
        audible = 15; // 14
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class OpticsIn {
                    class DaysightWFOV : ViewOptics {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                    class ThermalWFOV : DaysightWFOV {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                    class ThermalNFOV : ThermalWFOV {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                    class DaysightNFOV : DaysightWFOV {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                    class DaysightVNFOV : DaysightWFOV {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                };
            };
        };
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"all"};
                limitedPositions[] = {};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";
                allowedPositions[] = {"all"};
                limitedPositions[] = {};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Crew Rack";
                shortName = "Crew";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"all"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Pax Rack";
                shortName = "Pax";
                allowedPositions[] = {"all"};
            };
        };
    };
    class rhsusf_stryker_m1126_m2_base: rhsusf_stryker_m1126_base {};
    class rhsusf_stryker_m1127_base: rhsusf_stryker_m1126_base {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"all"};
                limitedPositions[] = {};
                numLimitedPositions = 3;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";
                allowedPositions[] = {"all"};
                limitedPositions[] = {};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Crew Rack";
                shortName = "Crew";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"all"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Pax Rack";
                shortName = "Pax";
                allowedPositions[] = {"all"};
            };
        };
    };
    class rhsusf_stryker_m1134_base : rhsusf_stryker_m1126_m2_base {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"all"};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Crew Rack";
                shortName = "Crew";
                componentName = "ACRE_VRC110";
                mountedRadio = "ACRE_PRC152";
                allowedPositions[] = {"all"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Pax Rack";
                shortName = "Pax";
                allowedPositions[] = {"all"};
            };
        };
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class OpticsIn {
                    class DaysightWFOV : ViewOptics {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                    class DaysightNFOV : DaysightWFOV {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                    class ThermalWFOV : DaysightWFOV {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                    class ThermalWFOV2X : ThermalWFOV {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                    class ThermalNFOV : ThermalWFOV {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                    class DaysightNFOV2X : ThermalNFOV {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                };
            };
        };
    };
    class APC_Tracked_03_base_F : Tank_F {
        class Turrets {
            class MainTurret : NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
    };
    // Bradley
    class RHS_M2A2_Base : APC_Tracked_03_base_F {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 1;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Crew Rack";
                shortName = "Crew";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "commander", "gunner", "crew"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Pax Rack";
                shortName = "Pax";
                allowedPositions[] = {{"cargo", "all"}};
            };
        };
        armor = 510; // 290
        audible = 17; // 18
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class OpticsIn {
                    class Wide {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                };
            };
        };
    };
    class RHS_M2A2 : RHS_M2A2_Base {
    };
    class RHS_M2A3 : RHS_M2A2 {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class OpticsIn {
                    class Wide {
                        visionMode[]={"Normal", "NVG", "Ti"};
                    };
                };
            };
        };
    };
    class RHS_C130J_Base;
    class RHS_C130J : RHS_C130J_Base {
        accuracy = 0.1; // 0.15
        armor = 70; // 50
        audible = 210; // 60
        camouflage = 600; // 100
        irTargetSize = 1.8; // 1.2
        visualTargetSize = 1.95; // 1.5
        radarTargetSize = 1.95; // 1.5
    };
    class Heli_Transport_02_base_F;
    class RHS_CH_47F_base: Heli_Transport_02_base_F {
        acre_hasInfantryPhone = 0;
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 4;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Crew Rack";
                shortName = "Crew";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "copilot", "crew"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Pax Rack";
                shortName = "Pax";
                allowedPositions[] = {{"cargo", "all"}};
            };
        };
    };
    class RHS_CH_47F : RHS_CH_47F_base {
        accuracy = 0.35; // 0.5
        accuracyDarkNightLightsOff = 0.003; // 0.001
        accuracyNightLightsOff = 0.018; // 0.006
        accuracyNightLightsOn = 0.3; // 0.1
        armor = 75; // 30
        audible = 74; // 50
        camouflage = 120; // 100
        irTargetSize = 1.14; // 1.2
        radarTargetSize = 1.65; // 1.12
        radarType = 8; // 4
    };
    class Heli_Attack_01_base_F;
    class RHS_AH64_base : Heli_Attack_01_base_F {
        acre_hasInfantryPhone = 0;
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"crew"};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"crew"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
        accuracy = 0.44; // 0.5
        accuracyDarkNightLightsOff = 0.0015; // 0.001
        accuracyNightLightsOff = 0.009; // 0.006
        accuracyNightLightsOn = 0.15; // 0.1
        armor = 95; // 50
        audible = 62; // 50
        camouflage = 86; // 100
        fuelConsumptionRate = 0.2;
        incomingMissileDetectionSystem = 16; // 0
        irTargetSize = 0.84; // 0.9
        LockDetectionSystem = "2 + 8 + 4"; // 0
        nvScanner = 1; // 0
        radarTargetSize = 1.05; // 1
        radarType = 8; // 1
    };
    class Heli_Transport_01_base_F;
    class RHS_UH60_Base: Heli_Transport_01_base_F {
        acre_hasInfantryPhone = 0;
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 4;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Crew Rack";
                shortName = "Crew";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "copilot","crew"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Pax Rack";
                shortName = "Pax";
                allowedPositions[] = {{"cargo", "all"}};
            };
        };
    };
    class RHS_UH60M_base : RHS_UH60_Base {
        accuracy = 0.42; // 0.5
        accuracyDarkNightLightsOff = 0.002; // 0.001
        accuracyNightLightsOff = 0.012; // 0.006
        accuracyNightLightsOn = 0.2; // 0.1
        armor = 55; // 40
        audible = 64; // 50
        camouflage = 88; // 100
        incomingMissileDetectionSystem = 16; // 0
        irTargetSize = 0.86; // 0.9
        LockDetectionSystem = "2 + 8 + 4"; // 0
        nvScanner = 1; // 0
        radarTargetSize = 1.25; // 1
    };
    class Helicopter_Base_H;
    class RHS_MELB_base : Helicopter_Base_H {
        acre_hasInfantryPhone = 0;
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 4;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"crew"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
        bodyFrictionCoef=0.2;
        cyclicAsideForceCoef=2;
        cyclicForwardForceCoef=0.43;
        liftForceCoef=1.8;
        accuracy = 1.1; // 0.5
        accuracyDarkNightLightsOff = 0.0005; // 0.001
        accuracyNightLightsOff = 0.003; // 0.006
        accuracyNightLightsOn = 0.05; // 0.1
        audible = 48; // 50
        camouflage = 45; // 100
        camShakeCoef = 0.8; // 0
        incomingMissileDetectionSystem = 16; // 0
        irTargetSize = 0.31; // 0.7
        LockDetectionSystem = "2 + 8 + 4"; // 0
        maxSpeed=260;
        nvScanner = 1; // 0
        radarTargetSize = 0.65; // 0.8
    };
    //mraps
    class rhsusf_M1239_base: MRAP_01_base_F {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_intercom";
                shortName = "$STR_ACRE_sys_intercom_intercom";
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {{"cargo", 0, 1}, {"ffv", {0}}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    }; 

    class rhsusf_M1239_CROWS_base: rhsusf_M1239_base {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_intercom";
                shortName = "$STR_ACRE_sys_intercom_intercom";
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Upper Rack";
                shortName = "R.Up";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {{"cargo", 0, 1}, {"ffv", {0}}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Lower Rack";
                shortName = "R.Low";
            };
        };
    };
    class rhsusf_M1239_Deploy_base: rhsusf_M1239_CROWS_base {
        ace_refuel_fuelCargo = 1000;
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 1200;
    };
    class rhsusf_M1239_M2_socom_d: rhsusf_M1239_CROWS_base {
        ace_refuel_fuelCargo = 1000;
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 1200;
    };
    class rhsusf_M1239_M2_Deploy_socom_d :rhsusf_M1239_Deploy_base {
        ace_refuel_fuelCargo = 1000;
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 1200;
    };

    class APC_Wheeled_03_base_F: Wheeled_APC_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };
    };
    class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F {};
    class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F {
        class MFD {
            class MFD_Driver_Heading {
                topLeft = "MFD_1_TL";
                topRight = "MFD_1_TR";
                bottomLeft = "MFD_1_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84,0.86,0.84};
                alpha = 0.5;
                enableParallax = 0;
                font = "LCD14";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {0.61,0.62,0};
                    alpha = 1;
                    condition = "on";
                    class Driver_Heading {
                        type = "text";
                        source = "heading";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.5,0},1};
                        right[] = {{1,0},1};
                        down[] = {{0.5,0.81},1};
                    };
                };
            };
            class MFD_Commander_Display_Damage {
                topLeft = "mfd_com_TL";
                topRight = "mfd_com_TR";
                bottomLeft = "mfd_com_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1,1,1};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0,0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Damage_Hull {
                        type = "text";
                        source = "static";
                        text = "HULL";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.04,0.18},1};
                        right[] = {{0.065,0.18},1};
                        down[] = {{0.04,0.44},1};
                    };
                    class Damage_Engine {
                        type = "text";
                        source = "static";
                        text = "ENG";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.11,0.18},1};
                        right[] = {{0.135,0.18},1};
                        down[] = {{0.11,0.44},1};
                    };
                    class Damage_Fuel {
                        type = "text";
                        source = "static";
                        text = "FUEL";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.178,0.18},1};
                        right[] = {{0.203,0.18},1};
                        down[] = {{0.178,0.44},1};
                    };
                    class Damage_Wheels {
                        type = "text";
                        source = "static";
                        text = "WHL";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.04,0.55},1};
                        right[] = {{0.065,0.55},1};
                        down[] = {{0.04,0.81},1};
                    };
                    class Damage_Gun {
                        type = "text";
                        source = "static";
                        text = "GUN";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.11,0.55},1};
                        right[] = {{0.135,0.55},1};
                        down[] = {{0.11,0.81},1};
                    };
                    class Damage_Turret {
                        type = "text";
                        source = "static";
                        text = "TRT";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.178,0.55},1};
                        right[] = {{0.203,0.55},1};
                        down[] = {{0.178,0.81},1};
                    };
                };
            };
            class MFD_Commander_Display {
                topLeft = "mfd_com_TL";
                topRight = "mfd_com_TR";
                bottomLeft = "mfd_com_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1,1,1};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones {
                    class FuelScale {
                        type = "linear";
                        source = "fuel";
                        sourceIndex = 1;
                        sourceScale = 1.0;
                        min = 0;
                        max = 1;
                        minPos[] = {0,0};
                        maxPos[] = {-0.09,0};
                    };
                };
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Main_Gun {
                        type = "text";
                        source = "static";
                        text = "MAIN GUN";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.273,0.18},1};
                        right[] = {{0.298,0.18},1};
                        down[] = {{0.273,0.44},1};
                    };
                    class Main_Gun_Ammo_count {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 2;
                        sourceIndex = 0;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.273,0.55},1};
                        right[] = {{0.298,0.55},1};
                        down[] = {{0.273,0.81},1};
                    };
                    class Main_Gun_Ammo_Type_text {
                        type = "text";
                        source = "static";
                        text = "TYPE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.385,0.18},1};
                        right[] = {{0.41,0.18},1};
                        down[] = {{0.385,0.44},1};
                    };
                    class Main_Gun_Ammo_Type {
                        type = "text";
                        source = "ammoFormat";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.385,0.55},1};
                        right[] = {{0.41,0.55},1};
                        down[] = {{0.385,0.81},1};
                    };
                    class Coax {
                        type = "text";
                        source = "static";
                        text = "COAX";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.498,0.18},1};
                        right[] = {{0.523,0.18},1};
                        down[] = {{0.498,0.44},1};
                    };
                    class Coax_Ammo_count {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 2;
                        sourceIndex = 1;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.498,0.55},1};
                        right[] = {{0.523,0.55},1};
                        down[] = {{0.498,0.81},1};
                    };
                    class Azimuth {
                        type = "text";
                        source = "static";
                        text = "GUN AZIM";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.605,0.18},1};
                        right[] = {{0.63,0.18},1};
                        down[] = {{0.605,0.44},1};
                    };
                    class Azimuth_number {
                        type = "text";
                        source = "[x]turretworld";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.61,0.55},1};
                        right[] = {{0.635,0.55},1};
                        down[] = {{0.61,0.81},1};
                    };
                    class Smoke {
                        type = "text";
                        source = "static";
                        text = "SMOKE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.717,0.18},1};
                        right[] = {{0.742,0.18},1};
                        down[] = {{0.717,0.44},1};
                    };
                    class Fuel_background_white {
                        color[] = {0.2,0.2,0.2};
                        alpha = 0.1;
                        condition = "1";
                        class Background {
                            type = "polygon";
                            points[] = {{{{0.787,0.7},1},{{0.877,0.7},1},{{0.877,0.9},1},{{0.787,0.9},1}}};
                        };
                    };
                    class Fuel_background_green {
                        color[] = {0,0.7,0};
                        condition = "fuel>=0.5";
                        class Background {
                            type = "polygon";
                            points[] = {{{{0.787,0.7},1},{"FuelScale",{0.877,0.7},1},{"FuelScale",{0.877,0.9},1},{{0.787,0.9},1}}};
                        };
                    };
                    class Fuel_background_yellow {
                        color[] = {0.9,0.7,0};
                        condition = "fuel<0.5";
                        class Background {
                            type = "polygon";
                            points[] = {{{{0.787,0.7},1},{"FuelScale",{0.877,0.7},1},{"FuelScale",{0.877,0.9},1},{{0.787,0.9},1}}};
                        };
                    };
                    class Fuel_background_red {
                        color[] = {0.7,0,0};
                        condition = "fuel<0.3";
                        class Background {
                            type = "polygon";
                            points[] = {{{{0.787,0.7},1},{"FuelScale",{0.877,0.7},1},{"FuelScale",{0.877,0.9},1},{{0.787,0.9},1}}};
                        };
                    };
                    class Fuel {
                        type = "text";
                        source = "static";
                        text = "FUEL";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.83,0.18},1};
                        right[] = {{0.855,0.18},1};
                        down[] = {{0.83,0.44},1};
                    };
                    class Fuel_number {
                        type = "text";
                        source = "fuel";
                        sourceScale = 100;
                        sourceLength = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.1;
                        pos[] = {{0.835,0.4},1};
                        right[] = {{0.86,0.4},1};
                        down[] = {{0.835,0.66},1};
                    };
                    class Fuel_percent_sign {
                        type = "text";
                        source = "static";
                        text = "%";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.845,0.4},1};
                        right[] = {{0.87,0.4},1};
                        down[] = {{0.845,0.66},1};
                    };
                };
            };
            class MFD_Commander_OnScreen {
                topLeft = "PIP_COM_TL";
                topRight = "PIP_COM_TR";
                bottomLeft = "PIP_COM_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1,1,1};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0,0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Azimuth_number {
                        type = "text";
                        source = "[x]turretworld";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.22,0.435},1};
                        right[] = {{0.245,0.435},1};
                        down[] = {{0.22,0.472},1};
                    };
                    class Elevation_Text {
                        type = "text";
                        source = "static";
                        text = "E: ";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.2,0.28},1};
                        right[] = {{0.225,0.28},1};
                        down[] = {{0.2,0.317},1};
                    };
                    class Elevation_Number {
                        type = "text";
                        source = "[y]turretworld";
                        sourceScale = 1;
                        sourceLength = 4;
                        sourcePrecision = 1;
                        refreshRate = 0;
                        align = "center";
                        scale = 1;
                        pos[] = {{0.23,0.28},1};
                        right[] = {{0.255,0.28},1};
                        down[] = {{0.23,0.317},1};
                    };
                    class Lased_Range {
                        type = "text";
                        source = "laserDist";
                        sourceScale = 1;
                        sourceLength = 4;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.75,0.28},1};
                        right[] = {{0.775,0.28},1};
                        down[] = {{0.75,0.317},1};
                    };
                    class VisionMode_Text {
                        type = "text";
                        source = "static";
                        text = "WFOV";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.75,0.65},1};
                        right[] = {{0.775,0.65},1};
                        down[] = {{0.75,0.687},1};
                    };
                    class VisionMode_String {
                        type = "text";
                        source = "visionMode";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.825,0.65},1};
                        right[] = {{0.85,0.65},1};
                        down[] = {{0.825,0.687},1};
                    };
                };
            };
            class MFD_Commander_Display_MainTurret {
                topLeft = "mfd_com_TL";
                topRight = "mfd_com_TR";
                bottomLeft = "mfd_com_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1,1,1};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0,0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Smoke_ammo {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 3;
                        sourceIndex = 0;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.72,0.55},1};
                        right[] = {{0.745,0.55},1};
                        down[] = {{0.72,0.81},1};
                    };
                };
            };
            class MFD_Gunner_Ready_To_Fire {
                topLeft = "mfd_gun_cli_TL";
                topRight = "mfd_gun_cli_TR";
                bottomLeft = "mfd_gun_cli_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0,0,0};
                alpha = 0.5;
                enableParallax = 0;
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {0,0,0};
                    alpha = 1;
                    condition = "1";
                    class Top_text {
                        type = "text";
                        source = "static";
                        text = "READY TO";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.45,0.05},1};
                        right[] = {{0.67,0.05},1};
                        down[] = {{0.45,0.55},1};
                    };
                    class Bottom_text {
                        type = "text";
                        source = "static";
                        text = "FIRE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.465,0.45},1};
                        right[] = {{0.685,0.45},1};
                        down[] = {{0.465,0.95},1};
                    };
                };
            };
            class MFD_Gunner_Display {
                topLeft = "mfd_gun_TL";
                topRight = "mfd_gun_TR";
                bottomLeft = "mfd_gun_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1,1,1};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Main_armament {
                        type = "text";
                        source = "static";
                        text = "MAIN ARMAMENT";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,-0.003},1};
                        right[] = {{0.075,-0.003},1};
                        down[] = {{0.015,0.075},1};
                    };
                    class Machinegun {
                        type = "text";
                        source = "static";
                        text = "COAX MG";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.31},1};
                        right[] = {{0.075,0.31},1};
                        down[] = {{0.015,0.388},1};
                    };
                    class Main_armament_ammo_type {
                        type = "text";
                        source = "static";
                        text = "AMMO TYPE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.545,-0.003},1};
                        right[] = {{0.605,-0.003},1};
                        down[] = {{0.545,0.075},1};
                    };
                    class Lased_distance_elevation {
                        type = "text";
                        source = "static";
                        text = "LASED DIST";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.84},1};
                        right[] = {{0.069,0.84},1};
                        down[] = {{0.015,0.918},1};
                    };
                    class Azimut {
                        type = "text";
                        source = "static";
                        text = "AZIMUTH";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.915},1};
                        right[] = {{0.075,0.915},1};
                        down[] = {{0.015,0.993},1};
                    };
                    class Damage {
                        type = "text";
                        source = "static";
                        text = "DAMAGE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.39},1};
                        right[] = {{0.075,0.39},1};
                        down[] = {{0.015,0.468},1};
                    };
                    class Heading {
                        type = "text";
                        source = "[x]turretworld";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 0.2;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.34,0.915},1};
                        right[] = {{0.4,0.915},1};
                        down[] = {{0.34,0.993},1};
                    };
                    class Lased_Range {
                        type = "text";
                        source = "laserDist";
                        sourceScale = 1;
                        sourceLength = 4;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.335,0.84},1};
                        right[] = {{0.395,0.84},1};
                        down[] = {{0.335,0.918},1};
                    };
                };
            };
            class MFD_Gunner_Main_Armament_Ammo_Type {
                topLeft = "mfd_gun_TL";
                topRight = "mfd_gun_TR";
                bottomLeft = "mfd_gun_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84,0.86,0.84};
                alpha = 0.5;
                turret[] = {0};
                enableParallax = 0;
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Gunner_AmmoType {
                        type = "text";
                        source = "ammoFormat";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "center";
                        refreshRate = 0.1;
                        pos[] = {{0.56,0.09},1};
                        right[] = {{0.62,0.09},1};
                        down[] = {{0.56,0.168},1};
                    };
                };
            };
            class MFD_Gunner_Coax_Ammo {
                topLeft = "mfd_gun_TL";
                topRight = "mfd_gun_TR";
                bottomLeft = "mfd_gun_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84,0.86,0.84};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0};
                font = "EtelkaMonospaceProBold";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Gunner_Text_1 {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        sourceIndex = 1;
                        align = "left";
                        refreshRate = 0.1;
                        pos[] = {{0.38,0.31},1};
                        right[] = {{0.43,0.31},1};
                        down[] = {{0.38,0.388},1};
                    };
                };
            };
            class MFD_Gunner_AmmoIndicator_Main_Armament {
                topLeft = "mfd_gun_TL";
                topRight = "mfd_gun_TR";
                bottomLeft = "mfd_gun_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84,0.86,0.84};
                alpha = 0.5;
                enableParallax = 0;
                turret[] = {0};
                font = "EtelkaMonospacePro";
                class material {
                    ambient[] = {1,1,1,1};
                    diffuse[] = {1,1,1,1};
                    emissive[] = {1000,1000,1000,1};
                };
                class Bones{};
                class Draw {
                    color[] = {1,1,1};
                    alpha = 1;
                    condition = "1";
                    class Main_Armament_Ammo_Type_1 {
                        type = "text";
                        source = "static";
                        text = "MP-T";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.065},1};
                        right[] = {{0.075,0.065},1};
                        down[] = {{0.015,0.143},1};
                    };
                    class Gunner_Text_1 {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 2;
                        sourceIndex = 0;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.1;
                        pos[] = {{0.38,0.065},1};
                        right[] = {{0.44,0.065},1};
                        down[] = {{0.38,0.143},1};
                    };
                    class Main_Armament_Ammo_Type_2 {
                        type = "text";
                        source = "static";
                        text = "APFSDS-T";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.125},1};
                        right[] = {{0.065,0.125},1};
                        down[] = {{0.015,0.203},1};
                    };
                    class Gunner_Text_2 {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 2;
                        sourceIndex = 0;
                        sourcePrecision = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.1;
                        pos[] = {{0.38,0.125},1};
                        right[] = {{0.44,0.125},1};
                        down[] = {{0.38,0.203},1};
                    };
                    class Main_Armament_Ammo_Type_3 {
                        type = "text";
                        source = "static";
                        text = "AT MISSILE";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.1;
                        pos[] = {{0.015,0.185},1};
                        right[] = {{0.065,0.185},1};
                        down[] = {{0.015,0.263},1};
                    };
                    class Gunner_Text_3 {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        sourceLength = 2;
                        sourceIndex = 2;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.1;
                        pos[] = {{0.38,0.185},1};
                        right[] = {{0.43,0.185},1};
                        down[] = {{0.38,0.263},1};
                    };
                };
            };
        };
        memoryPointDriverOptics = "driverview";
        driverInfoPanelCameraPos = "driverview_old";
        viewDriverInExternal = 1;
        viewDriverShadowAmb = 0.5;
        viewDriverShadowDiff = 0.05;
        driverForceOptics = 0;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {};
                };
            };
        };
        class AnimationSources: AnimationSources {};
        class Components;
    };
    /* BASE ------------------------------------------------------------------------------------------------------------- */
    class GVAR(mk20_base_F): I_APC_Wheeled_03_cannon_F {
        scope = 1;
        scopeCurator = 1;
        displayName = "M20A2";
        author = QAUTHOR;
        picture = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
        side = 1;
        ace_vehicle_damage_hullFireProb = 0.5;
        ace_hunterkiller = 1;
        radarType = 2;
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        receiveRemoteTargets = 1;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class DataLinkSensorComponent: SensorTemplateDataLink{};
                };
            };
        };
        maxSpeed = 125;
        maximumLoad = 6000;
        enginePower = 447;
        terrainCoef = 1;
        vehicleClass = "APCs""";
        textureList[] = {"Blu",1};
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","CamoNet","CamoSlat"};
        class EventHandlers;
        class TextureSources {
            class Blu_green {
                displayName = "M20A2";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert {
                displayName = "M20 Desert";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_01_ext_d.paa),QPATHTOF(data\outlaw_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_V21a {
                displayName = "M20 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_V21b {
                displayName = "M20 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_V22a {
                displayName = "M20 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_green_V22b {
                displayName = "M20 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_g.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_V21a {
                displayName = "M20 Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_V21b {
                displayName = "M20 Desert 1/1/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_1_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_1_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_V22a {
                displayName = "M20 Desert 1/2/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_a_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_a_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert_V22b {
                displayName = "M20 Desert 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\outlaw_1_2_b_01_ext_d.paa),QPATHTOF(data\outlaw_1_2_b_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_green_rino {
                displayName = "M20 1/2/B";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_ext_g.paa),QPATHTOF(data\rino_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };

            class Blu_Desert_rino {
                displayName = "M20 Desert 1/1/A";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\rino_01_ext_d.paa),QPATHTOF(data\rino_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
            factions[] = {QUOTE(PREFIX)};
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {
                    "RHS_weap_M242BC",
                    "rhs_weap_m240_bradley_coax",
                    QGVAR(missiles_titan)
                };
                magazines[] = {
                    "rhs_mag_1100Rnd_762x51_M240",
                    "rhs_mag_1100Rnd_762x51_M240",

                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_230Rnd_25mm_M242_HEI",

                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",

                    QGVAR(2Rnd_AA_missiles),
                    QGVAR(2Rnd_AT_missiles),
                    QGVAR(2Rnd_AT_missiles)
                };  
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {"SmokeLauncher"};
                        magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
                    };
                };
            };
        };
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                masterPositions[] = {"commander"};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                connectedByDefault = 1;
            };
            class Intercom_2: Intercom_1 {
                displayName = "Passenger intercom";
                shortName = "Pax";
                allowedPositions[] = {"crew", {"cargo", "all"}};
                disabledPositions[] = {};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                connectedByDefault = 0;
            };
        };

        // Infantry Phone
        acre_hasInfantryPhone = 1;
        acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"intercom_1"};
        acre_infantryPhoneDisableRinging = 0; // If set to 1, the ringing functionality will not be available
        acre_infantryPhoneCustomRinging[] = {"A3\Sounds_F\sfx\alarm_independent.wss", 5.0, 1.0, 1.0, 50}; // The alarm sound will be played every 5 seconds and will be audible until 50m. Volume and sound pitch are both set to 1

        class AcreRacks {
            class Rack_1 {
                displayName = "VEHICLE";             // Name displayed in the interaction menu
                shortName = "VEH";
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {"crew"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};             // Use this to attach simple components like Antennas. Not yet fully implemented
                mountedRadio = "ACRE_PRC117F";                 // Predefined mounted radio
                isRadioRemovable = 1;                 // Radio can be removed
                intercom[] = {"intercom_1"};                      // No access to intercoms. All units in intercom will be able to hear/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
            class Rack_2 {
                displayName = "SQUAD";             // Name displayed in the interaction menu
                shortName = "SQD";
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {"crew"};       // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};             // Use this to attach simple components like Antennas. Not yet fully implemented
                mountedRadio = "ACRE_PRC117F";                 // Predefined mounted radio
                isRadioRemovable = 1;                 // Radio can be removed
                intercom[] = {"Intercom_1"};                      // No access to intercoms. All units in intercom will be able to hear/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
            class Rack_3 {
                displayName = "PASSENGER";             // Name displayed in the interaction menu
                shortName = "PAX";
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {"inside"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};             // Use this to attach simple components like Antennas. Not yet fully implemented
                mountedRadio = "ACRE_PRC117F";                 // Predefined mounted radio
                isRadioRemovable = 1;                 // Radio can be removed
                intercom[] = {"intercom_2"};                      // No access to intercoms. All units in intercom will be able to hear/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
        };
    };
    class GVAR(outlaw_unarmed_base_F): GVAR(mk20_base_F) {
        supplyRadius = 10;
        attendant = 1;
        forceInGarage = 1;
        scope = 0;
        scopeCurator = 0;
        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
        };
        textureList[] = {"Blu",1};
        class TextureSources {
            class Blu_Woodland {
                displayName = "M20 MEV Green";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\med_01_ext_g.paa),QPATHTOF(data\med_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
            class Blu_Desert {
                displayName = "M20 MEV Desert";
                author = QAUTHOR;
                textures[] = {QPATHTOF(data\med_01_ext_d.paa),QPATHTOF(data\med_02_ext_d.paa),QPATHTOF(data\outlaw_turret_d.paa),QPATHTOF(data\outlaw_03_ext_d.paa),QPATHTOF(data\camonet_desert_co.paa),QPATHTOF(data\cage_desert_co.paa)};
                factions[] = {QUOTE(PREFIX)};
            };
        };
        class AnimationSources {
            class BreakWater {
                source = "user";
                initPhase = 0;
                animPeriod = 2;
            };
            class Missiles_revolving {
                source = "revolving";
                weapon = "missiles_titan";
            };
            class Missiles_reloadMagazine: Missiles_revolving {
                source = "reloadMagazine";
            };
            class muzzle_rot {
                source = "ammorandom";
                weapon = "autocannon_30mm_CTWS";
            };
            class muzzle_hide {
                source = "reload";
                weapon = "autocannon_30mm_CTWS";
            };
            class HitEngine_src {
                source = "Hit";
                hitpoint = "HitEngine";
                raw = 1;
            };
            class HitFuel_src {
                source = "Hit";
                hitpoint = "HitFuel";
                raw = 1;
            };
            class HitHull_src {
                source = "Hit";
                hitpoint = "HitHull";
                raw = 1;
            };
            class HitMainGun_src {
                source = "Hit";
                hitpoint = "HitGun";
                raw = 1;
            };
            class HitTurret_src {
                source = "Hit";
                hitpoint = "HitTurret";
                raw = 1;
            };
            class HitComTurret_src {
                source = "Hit";
                hitpoint = "HitComTurret";
                raw = 1;
            };
            class HitSLAT_Left_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_1";
                raw = 1;
            };
            class HitSLAT_Left_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_2";
                raw = 1;
            };
            class HitSLAT_Left_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Left_3";
                raw = 1;
            };
            class HitSLAT_Right_1_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_1";
                raw = 1;
            };
            class HitSLAT_Right_2_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_2";
                raw = 1;
            };
            class HitSLAT_Right_3_src {
                source = "Hit";
                hitpoint = "HitSLAT_Right_3";
                raw = 1;
            };
            class HitSLAT_back_src {
                source = "Hit";
                hitpoint = "HitSLAT_back";
                raw = 1;
            };
            class HitSLAT_front_src {
                source = "Hit";
                hitpoint = "HitSLAT_front";
                raw = 1;
            };
            class showCamonetHull {
                displayName = "$STR_A3_animationsources_showcamonethull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags {
                displayName = "$STR_A3_animationsources_showbagshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
            class showBags2 {
                displayName = "$STR_A3_animationsources_showbagsturret0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showTools {
                displayName = "$STR_A3_animationsources_showtoolshull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
            class showSLATHull {
                displayName = "$STR_A3_animationsources_showslathull0";
                author = QAUTHOR;
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
                mass = -50;
            };
        };
        driverCanSee = "4+8+2+32+16";
        gunnerCanSee = "4+2+8+32+16";
        weapons[] = {"TruckHorn","SmokeLauncher","rhsusf_weap_duke"};
        magazines[] = {"SmokeLauncherMag","rhsusf_mag_duke"};
        class Turrets {};
        threat[] = {0,0,0};
    };
    /* G ---------------------------------------------------------------------------------------------------------------- */
    class GVAR(mk20): GVAR(mk20_base_F) {
        displayName = "M20A2 [RHS]";
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        acre_hasInfantryPhone = 1;
        acre_infantryPhoneIntercom[] = {"CrewIntercom"};
        acre_infantryPhoneControlActions[] = {"CrewIntercom"};
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 1;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Crew Rack";
                shortName = "Crew";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "commander", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Pax Rack";
                shortName = "Pax";
                allowedPositions[] = {{"cargo", "all"}};
            };
        };
        forceInGarage = 0;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "lxim_EdSubcat_vehicles_green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    /* UNARMED ---------------------------------------------------------------------------------------------------------- */
    class GVAR(mev_mk20): GVAR(outlaw_unarmed_base_F) {
        displayName = "M20-MEV Green [RHS]";
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        acre_hasInfantryPhone = 1;
        acre_infantryPhoneIntercom[] = {"CrewIntercom"};
        acre_infantryPhoneControlActions[] = {"CrewIntercom"};
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 1;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Crew Rack";
                shortName = "Crew";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "commander", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Pax Rack";
                shortName = "Pax";
                allowedPositions[] = {{"cargo", "all"}};
            };
        };
        forceInGarage = 1;
        crew = "B_crew_F";
        class MyAmbulance {
            attendant = 1;
        };
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "lxim_EdSubcat_vehicles_green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\med_01_ext_g.paa),QPATHTOF(data\med_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    class GVAR(repair_mk20): GVAR(outlaw_unarmed_base_F) {
        displayName = "M20A-SUP Green [RHS]";
        ace_cargo_space = 12;
        author = QAUTHOR;
        scope = 2;
        scopeCurator = 2;
        faction = QUOTE(PREFIX);
        acre_hasInfantryPhone = 1;
        acre_infantryPhoneIntercom[] = {"CrewIntercom"};
        acre_infantryPhoneControlActions[] = {"CrewIntercom"};
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"crew"};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 1;
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";
                allowedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                limitedPositions[] = {"crew"};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Crew Rack";
                shortName = "Crew";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "commander", "gunner"};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Pax Rack";
                shortName = "Pax";
                allowedPositions[] = {{"cargo", "all"}};
            };
        };
        forceInGarage = 1;
        transportAmmo = 0;
        ace_refuel_fuelCargo = 1000;
        ace_repair_canRepair = 1;
        ace_rearm_defaultSupply = 1200;
        transportSoldier = 4;
        crew = "B_crew_F";
        typicalCargo[] = {"B_soldier_F"};
        editorSubcategory = "lxim_EdSubcat_vehicles_green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\outlaw_01_ext_g.paa),QPATHTOF(data\outlaw_02_ext_g.paa),QPATHTOF(data\outlaw_turret_g.paa),QPATHTOF(data\outlaw_03_ext_g.paa),QPATHTOF(data\camonet_woodland_co.paa),QPATHTOF(data\cage_woodland_co.paa)};
    };
    // Mk V Special Operations Craft
    class RHS_Ship;
    class rhsusf_mkvsoc: RHS_Ship {
        class AcreIntercoms {
            class CrewIntercom {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";
                allowedPositions[] = {"crew"};
                connectedByDefault = 1;
            };
            class PaxIntercom {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";
                allowedPositions[] = {{"cargo", "all"}};
                limitedPositions[] = {"crew"};
                numLimitedPositions = 2;
                connectedByDefault = 1;
            };
        };
        class AcreRacks {
            class Rack_1 {
                displayName = "Crew Rack";
                shortName = "Crew";
                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                allowedPositions[] = {"driver", "commander", {"turret", {5}}};
                intercom[] = {"CrewIntercom"};
            };
            class Rack_2: Rack_1 {
                displayName = "Pax Rack";
                shortName = "Pax";
                allowedPositions[] = {{"cargo", "all"}};
            };
        };
    };
};
