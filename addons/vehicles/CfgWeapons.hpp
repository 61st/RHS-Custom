class CfgWeapons {
    class CannonCore;
    class autocannon_Base_F: CannonCore {
        class player;
    };
    class autocannon_30mm_CTWS: autocannon_Base_F {
        class HE: autocannon_Base_F {};
        class AP: autocannon_Base_F {};
    };
    class GVAR(autocannon_35mm_CTWS): autocannon_30mm_CTWS {
        displayName = "Bushmaster III MP";
        muzzles[] = {"HE","AP","AA"};
        reloadTime = 0.15;
        class HE: HE {
            displayName = "Bushmaster III HE";
            magazines[] = {
                QGVAR(80Rnd_35mm_HE_shells),
                QGVAR(80Rnd_35mm_HE_shells_Tracer_Red),
                QGVAR(80Rnd_35mm_MP_shells),
                QGVAR(80Rnd_35mm_MP_shells_Tracer_Red)
            };
        };
        class AP: AP {
            displayName = "Bushmaster III AP";
            magazines[] = {
                QGVAR(80Rnd_35mm_APFSDS_shells),
                QGVAR(80Rnd_35mm_APFSDS_shells_Tracer_Red),
                QGVAR(80Rnd_35mm_AP_shells),
                QGVAR(80Rnd_35mm_AP_shells_Tracer_Red)
            };
        };
        class AA: HE {
            displayName = "Bushmaster III AA";
            burst = 6;
            magazines[] = {
                QGVAR(120Rnd_35mm_AA_shells),
                QGVAR(120Rnd_35mm_AA_shells_Tracer_Red),
                QGVAR(120Rnd_35mm_ABM_shells),
                QGVAR(120Rnd_35mm_ABM_shells_Tracer_Red)
            };
        };
    };

    class missiles_titan;
    class GVAR(missiles_titan): missiles_titan {
        magazines[]= {
            QGVAR(2Rnd_AT_missiles),
            QGVAR(2Rnd_AA_missiles),
            QGVAR(2Rnd_AP_missiles),
            QGVAR(2Rnd_BB_missiles)
        };
    };
};