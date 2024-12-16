    // accuracy: 3.5 = sniper, 1.5 = soldier, 0.9 = truck, 0.5 = small vehicle 0.2 = building
    // armor: 3 = soldier, 20 = car, 150 = building, 150-300 = bmp, 300 = boat, 400-900 = tank, 10000 = ship
    // audible: 0.05 = soldier, 3 = motorcycle, 6 = tank, 18 = vanilla merkava/rhs tank
    // camouflage: 1 = soldier, 4 = truck, 8 = tank
    // radarTargetSize: 0.1 = fully stealth, 0.7 = small aircraft/semi-stealth, 1 = mid sized aircraft/car, 1.2 = tank/truck, 2 = large bomber (max value)

class CBA_Extended_EventHandlers;
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
	class MRAP_01_base_F: Car_F {
		class Sounds;
		class EventHandlers;
		class Components;
	};

	class rhsusf_MATV_base : MRAP_01_base_F {
        armor = 220; // 100
        audible = 5; // 6
        maxOmega = 600; // 230.38
        maxSpeed = 115; // 105
        normalSpeedForwardCoef = 0.7; // 0.48
    };
	class rhsusf_hmmwe_base: MRAP_01_base_F {
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
				frequency="0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
				volume="engineOn*camPos*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
			};
			class Engine {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1",
					0.44668359,
					1,
					250
				};
				frequency="0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
				volume="engineOn*camPos*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
			};
			class Engine1_ext {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2",
					0.56234133,
					1,
					300
				};
				frequency="0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
				volume="engineOn*camPos*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
			};
			class Engine2_ext {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid",
					0.70794576,
					1,
					350
				};
				frequency="0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
				volume="engineOn*camPos*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(2569/	3400),(2796/	3400)]))";
			};
			class Engine3_ext {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high",
					1,
					1,
					400
				};
				frequency="0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
				volume="engineOn*camPos*((rpm/	3400) factor[(2871/	3400),(3400/	3400)])";
			};
			class IdleThrust {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle",
					0.56234133,
					1,
					200
				};
				frequency="0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
			};
			class EngineThrust {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",
					0.70794576,
					1,
					350
				};
				frequency="0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
			};
			class Engine1_Thrust_ext {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2",
					0.89125091,
					1,
					400
				};
				frequency="0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
			};
			class Engine2_Thrust_ext {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid",
					1.1220185,
					1,
					425
				};
				frequency="0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(3400/	3400),(2796/	3400)]))";
			};
			class Engine3_Thrust_ext {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high",
					1.2589254,
					1,
					450
				};
				frequency="0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3400) factor[(2871/	3400),(3400/	3400)])";
			};
			class Idle_int {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle",
					0.25118864,
					1
				};
				frequency="0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
			};
			class Engine_int {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1",
					0.31622776,
					1
				};
				frequency="0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
			};
			class Engine1_int {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2",
					0.39810717,
					1
				};
				frequency="0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
			};
			class Engine2_int {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid",
					0.50118721,
					1
				};
				frequency="0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(3400/	3400),(2796/	3400)]))";
			};
			class Engine3_int {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high",
					0.63095737,
					1
				};
				frequency="0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	3400) factor[(2871/	3400),(3400/	3400)])";
			};
			class IdleThrust_int {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle",
					0.3548134,
					1
				};
				frequency="0.95	+	((rpm/	3400) factor[(604/	3400),(1058/	3400)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(453/	3400),(831/	3400)])	*	((rpm/	3400) factor[(1360/	3400),(982/	3400)]))";
			};
			class EngineThrust_int {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",
					0.44668359,
					1
				};
				frequency="0.9	+	((rpm/	3400) factor[(1058/	3400),(1587/	3400)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1058/	3400),(1360/	3400)])	*	((rpm/	3400) factor[(1738/	3400),(1511/	3400)]))";
			};
			class Engine1_Thrust_int {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2",
					0.56234133,
					1
				};
				frequency="0.9	+		((rpm/	3400) factor[(1587/	3400),(2116/	3400)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1436/	3400),(1738/	3400)])	*	((rpm/	3400) factor[(2267/	3400),(1889/	3400)]))";
			};
			class Engine2_Thrust_int {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid",
					0.70794576,
					1
				};
				frequency="0.9	+	((rpm/	3400) factor[(2116/	3400),(2720/	3400)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3400) factor[(1889/	3400),(2342/	3400)])	*	((rpm/	3400) factor[(3400/	3400),(2796/	3400)]))";
			};
			class Engine3_Thrust_int {
				sound[]= {
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high",
					0.79432821,
					1
				};
				frequency="0.95	+	((rpm/	3400) factor[(2720/	3400),(3400/	3400)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3400) factor[(2116/	3400),(3400/	3400)])";
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
	class rhsusf_mrzr_base;
    class rhsusf_mrzr4_d : rhsusf_mrzr_base // RHS MRZR-4
    {
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

	class rhsusf_stryker_base;
    class rhsusf_stryker_m1126_base : rhsusf_stryker_base {
        armor = 220; // 120
        audible = 15; // 14
    };

	class APC_Tracked_03_base_F;
    class RHS_M2A2_Base : APC_Tracked_03_base_F {
        armor = 510; // 290
        audible = 17; // 18
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

	class RHS_CH_47F_base;
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
        accuracy = 0.44; // 0.5
        accuracyDarkNightLightsOff = 0.0015; // 0.001
        accuracyNightLightsOff = 0.009; // 0.006
        accuracyNightLightsOn = 0.15; // 0.1
        armor = 95; // 50
        audible = 62; // 50
        camouflage = 86; // 100
        incomingMissileDetectionSystem = 16; // 0
        irTargetSize = 0.84; // 0.9
        LockDetectionSystem = "2 + 8 + 4"; // 0
        nvScanner = 1; // 0
        radarTargetSize = 1.05; // 1
        radarType = 8; // 1
    };

    class Heli_Transport_01_base_F;
    class RHS_UH60_Base : Heli_Transport_01_base_F {};
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
        nvScanner = 1; // 0
        radarTargetSize = 0.65; // 0.8
    };
	/* mraps ------------------------------------------------------------------------------------------------------------ */

    class rhsusf_M1239_base: MRAP_01_base_F {};
    class rhsusf_M1239_CROWS_base: rhsusf_M1239_base {};
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
};
