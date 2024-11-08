class CfgAmmo {
    class SmokeShell;
    class G_40mm_Smoke: SmokeShell {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.1;
    };
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
};
