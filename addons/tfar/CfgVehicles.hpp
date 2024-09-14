class CBA_Extended_EventHandlers;
class CfgVehicles {
    class ReammoBox;
    class Bag_Base: ReammoBox {
        tf_range = 40000;
    };

    class B_RadioBag_01_base_F: Bag_Base {
        tf_hasLRradio = 1;
    };
    class B_RadioBag_01_black_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_digi_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_eaf_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_ghex_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_hex_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_mtp_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_oucamo_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_tropic_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };
    class B_RadioBag_01_wdl_F: B_RadioBag_01_base_F {
        tf_range = 40000;
    };

    class TFAR_Bag_Base;
    class TFAR_rt1523g: TFAR_Bag_Base {
        mass = 75;
        maximumLoad = 160;
    };
    class TFAR_rt1523g_big: TFAR_rt1523g {
        mass = 90;
        maximumLoad = 240;
    };
    class TFAR_rt1523g_sage: TFAR_rt1523g {
        mass = 90;
        maximumLoad = 240;
    };

    class TFAR_mr3000: TFAR_Bag_Base {
        mass = 90;
        maximumLoad = 240;
    };

    class TFAR_anprc155: TFAR_Bag_Base {
        mass = 90;
        maximumLoad = 240;
    };

    class TFAR_anarc164: TFAR_Bag_Base {
        mass = 90;
        maximumLoad = 240;
    };
    class TFAR_anarc210: TFAR_Bag_Base {
        mass = 90;
        maximumLoad = 240;
    };
    class TFAR_mr6000l: TFAR_Bag_Base {
        mass = 90;
        maximumLoad = 240;
    };

    class TFAR_bussole: TFAR_Bag_Base {
        mass = 75;
        maximumLoad = 160;
    };

    class Boat_F;
    class SDV_01_base_F: Boat_F {
        TFAR_hasIntercom = 1;
    };

    #define TFAR_INTERCOM \
    class TFAR_IntercomChannel {\
        condition = "true";\
        displayName = "Intercom Channel";\
        icon = "";\
        statement = "";\
        class TFAR_IntercomChannel_1 {\
            condition = "_vehicle = vehicle ACE_Player; if (getNumber (configOf _vehicle >> 'TFAR_hasIntercom') == 0) exitWith {false}; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',netID ACE_Player],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";\
            displayName = "Cargo";\
            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',netID ACE_Player],0,true];";\
        };\
        class TFAR_IntercomChannel_2 {\
            condition = "_vehicle = vehicle ACE_Player; if (getNumber (configOf _vehicle >> 'TFAR_hasIntercom') == 0) exitWith {false}; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',netID ACE_Player],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";\
            displayName = "Crew";\
            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',netID ACE_Player],1,true];";\
        };\
        class TFAR_IntercomChannel_disabled {\
            condition = "_vehicle = vehicle ACE_Player; if (getNumber (configOf _vehicle >> 'TFAR_hasIntercom') == 0) exitWith {false}; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',netID ACE_Player],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";\
            displayName = "Disabled";\
            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',netID ACE_Player],-1,true];";\
        };\
        class TFAR_IntercomChannel_Misc_1 {\
            condition = "_vehicle = vehicle ACE_Player; if (getNumber (configOf _vehicle >> 'TFAR_hasIntercom') == 0) exitWith {false}; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',netID ACE_Player],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";\
            displayName = "Misc channel 1";\
            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',netID ACE_Player],2,true];";\
        };\
        class TFAR_IntercomChannel_Misc_2 {\
            condition = "_vehicle = vehicle ACE_Player; if (getNumber (configOf _vehicle >> 'TFAR_hasIntercom') == 0) exitWith {false}; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',netID ACE_Player],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 3";\
            displayName = "Misc channel 2";\
            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',netID ACE_Player],3,true];";\
        };\
        class TFAR_IntercomChannel_Misc_3 {\
            condition = "_vehicle = vehicle ACE_Player; if (getNumber (configOf _vehicle >> 'TFAR_hasIntercom') == 0) exitWith {false}; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',netID ACE_Player],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 4";\
            displayName = "Misc channel 3";\
            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',netID ACE_Player],4,true];";\
        };\
    }

    class LandVehicle;
    class Car: LandVehicle {
        class ACE_SelfActions {
            TFAR_INTERCOM;
        };
    };
    class Tank: LandVehicle {
        class ACE_SelfActions {
            TFAR_INTERCOM;
        };
    };

    class Ship;
    class Ship_F: Ship {
        class ACE_SelfActions {
            TFAR_INTERCOM;
        };
    };

    class Air;
    class Helicopter: Air {
        class ACE_SelfActions {
            TFAR_INTERCOM;
        };
    };
    class Plane: Air {
        class ACE_SelfActions {
            TFAR_INTERCOM;
        };
    };
};
