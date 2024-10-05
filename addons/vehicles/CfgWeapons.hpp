class CfgWeapons {
    class CannonCore;
    class autocannon_Base_F: CannonCore {
        class player;
    };
    class autocannon_40mm_CTWS: autocannon_Base_F {
        class HE: autocannon_Base_F {};
        class AP: autocannon_Base_F {};
    };
    class lxim_autocannon_40mm_CTWS: autocannon_40mm_CTWS {
        displayName = "Bushmaster IV";
        reloadTime = 0.15;
        class HE: HE {
            displayName = "Bushmaster IV HE";
            magazines[] = {"lxim_60Rnd_40mm_MP_shells","lxim_60Rnd_40mm_MP_shells_Tracer_Red","lxim_60Rnd_40mm_HEI_shells_Tracer_Red"};
        };
        class AP: AP {
            displayName = "Bushmaster IV AP";
            burst = 6;
            magazines[] = {"lxim_40Rnd_40mm_APFSDS_shells","lxim_40Rnd_40mm_APFSDS_shells_Tracer_Red"};
        };
    };

    class autocannon_35mm: autocannon_Base_F {};
    class lxim_autocannon_40mm_GDF: autocannon_35mm {
        displayName = "Bushmaster IV-A";
        magazines[] = {"lxim_280Rnd_40mm_AA_shells","lxim_280Rnd_40mm_AA_shells_Tracer_Red"};
        cursorAim = "cannon";
        shotFromTurret = 1;
        class GunParticles {
            class FirstEffect {
                directionName = "Konec hlavne";
                effectName = "AutoCannonFired";
                positionName = "Usti hlavne";
            };
            class SecondEffect {
                directionName = "Konec hlavne";
                effectName = "AutoCannonFired";
                positionName = "Usti hlavne";
            };
            class Shell {
                directionName = "shell_eject_dir";
                effectName = "HeavyGunCartridge1";
                positionName = "shell_eject_pos";
            };
        };
    };

    class GMG_40mm;
    class lxim_autocannon_40mm_ENG: GMG_40mm {
        displayName = "Bushmaster IV-G";
        magazines[] = {"lxim_120Rnd_40mm_G_belt"};

    };

    class missiles_titan;
    class missiles_titan_aa_2Rnd: missiles_titan {
        magazines[]= {
            "2Rnd_Titan_long_missiles_AA"
        };
    };
};