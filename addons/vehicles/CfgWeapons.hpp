class CfgWeapons {
    class CannonCore;
    class autocannon_Base_F: CannonCore {
        class player;
    };
    class autocannon_40mm_CTWS: autocannon_Base_F {
        class HE: autocannon_Base_F {};
        class AP: autocannon_Base_F {};
    };
    class lxir_autocannon_40mm_CTWS: autocannon_40mm_CTWS {
        displayName = "Bushmaster IV";
        class HE: HE {
            displayName = "Bushmaster IV HE";
            magazines[] = {"lxir_60Rnd_40mm_MP_shells","lxir_60Rnd_40mm_MP_shells_Tracer_Red","lxir_60Rnd_40mm_HEI_shells_Tracer_Red"};
        };
        class AP: AP {
            displayName = "Bushmaster IV AP";
            magazines[] = {"lxir_60Rnd_40mm_APFSDS_shells","lxir_60Rnd_40mm_APFSDS_shells_Tracer_Red"};
        };
    };

    class autocannon_35mm: autocannon_Base_F {};
    class lxir_autocannon_40mm_GDF: autocannon_35mm {
        displayName = "Bushmaster IV-A";
        magazines[] = {"lxir_280Rnd_40mm_AA_shells","lxir_280Rnd_40mm_AA_shells_Tracer_Red"};
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
    class lxir_autocannon_40mm_ENG: GMG_40mm {
        displayName = "Bushmaster IV-G";
        magazines[] = {"lxir_200Rnd_40mm_G_belt"};

    };
    class missiles_titan;
    class missiles_titan_aa_2Rnd: missiles_titan {
        magazines[]= {
            "2Rnd_Titan_long_missiles_AA"
        };
    };
    class missiles_titan_eng_2Rnd: missiles_titan {
        magazines[]= {
            "2Rnd_Titan_long_missiles_ENG"
        };
    };
};