class CfgAmmo {
    class SmokeShell;
    // RHS american smoke grenades
    class SmokeShellGreen;
    class rhs_40mm_m715_Green: SmokeShellGreen {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.1;
    };
    class SmokeShellRed;
    class rhs_40mm_m713_Red: SmokeShellRed {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.1;
    };
    class rhs_40mm_m714_White: SmokeShell {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.1;
    };
    class SmokeShellYellow;
    class rhs_40mm_m716_yellow: SmokeShellYellow {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.1;
    };
    // RHS russian smoke grenades
    class rhs_g_vog25;
    class rhs_g_vg40md_green: rhs_g_vog25 {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.1;
    };

    class rhs_g_vg40md_red: rhs_g_vog25 {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.1;
    };

    class rhs_g_vg40md_white: rhs_g_vog25 {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.1;
    };
    class BulletBase;
    class rhssaf_ammo_762x39_m82_api;
    class rhssaf_ammo_762x39_m82_api_green: rhssaf_ammo_762x39_m82_api {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };

    class rhs_ammo_762x63_M1T_tracer: BulletBase { 
        ACE_ammoTempMuzzleVelocityShifts[] = {-5.3,-5.1,-4.6,-4.2,-3.4,-2.6,-1.4,-0.3,1.4,3,5.2};
        ACE_ballisticCoefficients[] = {0.25};
        ACE_barrelLengths[] = {305,660.4};
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 13;
        ACE_caliber = 7.823;
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {690,990};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class rhs_ammo_762x63_M2B_ball: BulletBase {
        ACE_ammoTempMuzzleVelocityShifts[] = {-5.3,-5.1,-4.6,-4.2,-3.4,-2.6,-1.4,-0.3,1.4,3,5.2};
        ACE_ballisticCoefficients[] = {0.25};
        ACE_barrelLengths[] = {305,660.4};
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 13;
        ACE_caliber = 7.823;
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {690,990};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class rhs_ammo_75x55_Ball: BulletBase { 
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.505};
        ACE_barrelLengths[] = {254, 583};
        ACE_bulletLength = 35.0012;
        ACE_bulletMass = 11.275;
        ACE_caliber = 7.7724;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {730, 780};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class rhs_ammo_792x33_SmE_ball: BulletBase {
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.275};
        ACE_barrelLengths[] = {419};
        ACE_bulletLength = 21.6;
        ACE_bulletMass = 8.1;
        ACE_caliber = 8.22;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {685};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class MissileBase;
    class M_Titan_AT: MissileBase {
        submunitionAmmo = "rhs_ammo_M_fgm148_AT_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0,0,-0.2};
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        warheadName = "TandemHEAT";
    };

    class ammo_Penetrator_base;
    class ammo_Penetrator_Titan_AT: ammo_Penetrator_base {
        warheadName = "TandemHEAT";
    };

    // Flare Time2Life
    #define CHANGETIMETOLIFE(NAME) class NAME; class TB_##NAME : NAME {timeToLive = 180;}
    CHANGETIMETOLIFE(rhsusf_40mm_white);
    CHANGETIMETOLIFE(rhsusf_40mm_green);
    CHANGETIMETOLIFE(rhsusf_40mm_red);

    #define ADD_PRECISE_SMOKE(TYPE) class TYPE; \
    class TYPE##_precise : TYPE \
    { \
        simulation = "shotSmoke"; \
        deflecting = 0; \
        deflectionSlowDown = 0.1; \
        deflectionDirDistribution = 0; \
        timeToLive = 120; \
    }
    ADD_PRECISE_SMOKE(rhs_40mm_smoke_green);
    ADD_PRECISE_SMOKE(rhs_40mm_smoke_red);
    ADD_PRECISE_SMOKE(rhs_40mm_smoke_white);
    ADD_PRECISE_SMOKE(rhs_40mm_smoke_yellow);



};
