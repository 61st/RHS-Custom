class CfgAmmo {
    class B_40mm_GPR;
    class B_40mm_GPR_Tracer_Red;
    class B_40mm_APFSDS;
    class B_40mm_APFSDS_Tracer_Red;
    class lxir_B_40mm_HEI_Tracer_Red: B_40mm_GPR_Tracer_Red {
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 378;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 181;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2830;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        ace_vehicle_damage_incendiary = 0.3;
        indirectHitRange = 4;
        indirectHit = 8;
        typicalspeed = 1100;
    };
    class lxir_B_40mm_APFSDS_Tracer_Red: B_40mm_APFSDS_Tracer_Red {
        ace_vehicle_damage_incendiary = 0.4;
        caliber = 8;
        hit = 120;
        indirectHit = 8;
        indirectHitRange = 0.2;
        typicalspeed = 1385;
    };
    class lxir_B_40mm_HEI: B_40mm_GPR {
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 378;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 181;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2830;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        ace_vehicle_damage_incendiary = 0.3;
        indirectHitRange = 4;
        indirectHit = 8;
        typicalspeed = 1100;
    };
    class lxir_B_40mm_APFSDS: B_40mm_APFSDS {
        ace_vehicle_damage_incendiary = 0.4;
        caliber = 8;
        hit = 120;
        indirectHit = 8;
        indirectHitRange = 0.2;
        typicalspeed = 1385;
    };

    // TODO: FCS Air Burst
    class lxir_B_40mm_HEAB_Tracer_Red: B_40mm_GPR_Tracer_Red {
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 363;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 185;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2900;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 3/5;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_large"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        deflecting = 0;
        indirectHitRange = 2;
        indirectHit = 6;
        airbursting = 1;
        ABSubmun = "lxir_B_40mm_HEAB_Helper";
    };
    class lxir_B_40mm_HEAB_Helper: B_40mm_GPR {
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 363;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 185;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2900;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 3/5;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_large"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        indirectHitRange = 2;
        indirectHit = 6;
        simulation = "shotRocket";
        timeToLive = 0;
    };

    class M_Titan_AP;
    class lxir_eng_round: M_Titan_AP {
        ace_frag_skip = 1;
        CraterEffects = "ATMissileCrater";
        allowAgainstInfantry = 1;
        displayName = "AS Titan";
        displayNameShort = "AS";
        explosionEffects = "BombExplosion";
        explosionForceCoef = 1;
        indirectHit = 3000;
        indirectHitRange = 75;
        class TopDown {
            ascendAngle = 30;
            ascendHeight = 150;
            descendDistance = 180;
            minDistance = 180;
        };
    };

    class B_35mm_AA;
    class lxir_40mm_AA_shells: B_35mm_AA {
        displayName = "40MM AA Flak";
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 363;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 185;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2830;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        hit = 80;
        weaponType = "cannon"; 
        typicalspeed = 1400;
    };

    class B_35mm_AA_Tracer_Red;
    class lxir_40mm_AA_shells_Tracer_Red: B_35mm_AA_Tracer_Red {
        displayName = "40MM AA Flak Red Tracer";
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 363;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 185;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2830;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        hit = 80;
        weaponType = "cannon"; 
        typicalspeed = 1400;
    };

    class G_40mm_HEDP;
    class lxir_B_30mm_HEAB_Helper: G_40mm_HEDP {
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 363;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 185;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2843;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
        indirectHitRange = 2;
        indirectHit = 6;
        simulation = "shotRocket";
        timeToLive = 0;
    };
    class lxir_40mm_G_belt: G_40mm_HEDP {
        displayName = "40MM HE";
        ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
        ace_frag_metal = 363;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 185;  // Amount of explosive filler (grams) - information below
        ace_frag_gurney_c = 2830;  // Gurney velocity constant for explosive type - information below
        ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
        ace_frag_classes[] = {"ACE_frag_medium"};  // Type of fragments - information below
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
        ace_frag_force = 0;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
    };
};