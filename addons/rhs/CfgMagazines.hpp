class CfgMagazines {
    class CA_Magazine;
    class 30Rnd_556x45_Stanag;
    class rhs_mag_30Rnd_556x45_M855_Stanag;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag;
    class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red;
    class rhs_mag_30Rnd_556x45_Mk262_Stanag;
    class rhs_mag_30Rnd_556x45_Mk318_Stanag;

    #include "magazines\CfgMagAK.hpp"
    #include "magazines\CfgMagNATO556.hpp"
    #include "magazines\CfgMagAK556.hpp"
    #include "magazines\CfgMagMisc.hpp"
    #include "magazines\CfgMagRifleMisc.hpp"
    /* TITANS ----------------------------------------------------------------------------------------------------------- */
    class 2Rnd_GAT_missiles;
    class GVAR(2Rnd_AT_missiles): 2Rnd_GAT_missiles {
        displayName = "AT Missile";
        displayNameShort="AT";
        count=2;
    };
    class GVAR(2Rnd_AA_missiles): 2Rnd_GAT_missiles {
        ammo = "M_Titan_AA";
        displayName = "AA Missile";
        displayNameShort="AA";
        count=2;
    };
    class GVAR(2Rnd_AP_missiles): 2Rnd_GAT_missiles {
        ammo = "M_Titan_AP";
        displayName = "AP Missile";
        displayNameShort="AP";
        count=2;
    };
    class GVAR(2Rnd_BB_missiles): 2Rnd_GAT_missiles {
        ammo = QGVAR(Titan_BB_round);
        displayName = "BB Missile";
        displayNameShort="BB";
        count=2;
    };
};
