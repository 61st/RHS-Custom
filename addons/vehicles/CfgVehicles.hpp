class CBA_Extended_EventHandlers;
class CfgVehicles {
    class All {};
    class AllVehicles: All {};
    class Land: AllVehicles {};
    class LandVehicle: Land {};
    class Tank: LandVehicle {};
    class Car: LandVehicle {};
    class Car_F: Car {};
    class Wheeled_APC_F: Car_F {};
    class Tank_F: Tank {};
    class APC_Tracked_03_base_F: Tank_F {};
    class RHS_M2A2_Base: APC_Tracked_03_base_F {};
    class RHS_M2A2: RHS_M2A2_Base {};
    class RHS_M2A3: RHS_M2A2 {};
    class RHS_M2A3_BUSKI: RHS_M2A3 {};
    class rhsusf_stryker_base: Wheeled_APC_F {};
    class rhsusf_stryker_m1126_base: rhsusf_stryker_base {};
    class rhsusf_stryker_m1126_m2_base: rhsusf_stryker_m1126_base {};
    class rhsusf_stryker_m1132_m2_base: rhsusf_stryker_m1126_m2_base {};
    

    /* Brads ------------------------------------------------------------------------------------------------------------ */

    /* Strykers --------------------------------------------------------------------------------------------------------- */
    class rhsusf_stryker_m1132_m2_wd: rhsusf_stryker_m1132_m2_base {
        scope = 1;
        scopeCurator = 0;
    };
    class GVAR(m1132_m2_wd) : rhsusf_stryker_m1132_m2_wd {
        scope = 2;
        scopeCurator = 2;
    };
};