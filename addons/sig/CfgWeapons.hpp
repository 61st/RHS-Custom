class CfgWeapons {
    class KAR_XM7;
    class KAR_XM7_BLK;
    class KAR_XM7_G;
    class KAR_XM7_BLK_G;
    class KAR_XM250;
    class KAR_XM250_BLK;

    class GVAR(XM7): KAR_XM7 {
        author=QAUTHOR;
        dlc = QUOTE(PREFIX);
        scope=2;
        scopeArsenal=2;
        ACE_clearJamAction="GestureReloadSPAR_01";
        ACE_checkTemperatureAction="Gear";
        ace_overheating_dispersion = 0.75;
        ace_overheating_mrbs = 3000;
        ace_overheating_slowdownFactor = 1;
        displayName="[61st] Sig MCX Spear";
        hiddenSelections[]={"Camo2", "Camo3", "Camo4", "Camo5", "Camo6", "Camo7", "Camo8"};
        hiddenSelectionsTextures[]={QPATHTOF(data\UpperReceiver_co.paa), "\KAR_XM7\data\tex\stock_co.paa", "\KAR_XM7\data\tex\magazine_co.paa", QPATHTOF(data\LowerReceiver_co.paa), "\KAR_XM7\data\tex\ironsight_co.paa", "\KAR_XM7\data\tex\handguard_co.paa", "\KAR_XM7\data\tex\details_co.paa"};
        baseWeapon = QGVAR(XM7);
        magazines[]={QGVAR(25Rnd_Fury),QGVAR(25Rnd_Fury_blk),QGVAR(25Rnd_Fury_RT),QGVAR(25Rnd_Fury_RT_blk)};
    };
    class GVAR(XM7_G): KAR_XM7_G {
        author=QAUTHOR;
        dlc = QUOTE(PREFIX);
        scope=2;
        scopeArsenal=2;
        ACE_clearJamAction="GestureReloadSPAR_01";
        ACE_checkTemperatureAction="Gear";
        ace_overheating_dispersion = 0.75;
        ace_overheating_mrbs = 3000;
        ace_overheating_slowdownFactor = 1;
        displayName="[61st] Sig MCX Spear (Grip)";
        hiddenSelections[]={"Camo2", "Camo3", "Camo4", "Camo5", "Camo6", "Camo7", "Camo8"};
        hiddenSelectionsTextures[]={QPATHTOF(data\UpperReceiver_co.paa), "\KAR_XM7\data\tex\stock_co.paa", "\KAR_XM7\data\tex\magazine_co.paa", QPATHTOF(data\LowerReceiver_co.paa), "\KAR_XM7\data\tex\ironsight_co.paa", "\KAR_XM7\data\tex\handguard_co.paa", "\KAR_XM7\data\tex\details_co.paa"};
        baseWeapon = QGVAR(XM7_G);
        magazines[]={QGVAR(25Rnd_Fury),QGVAR(25Rnd_Fury_blk),QGVAR(25Rnd_Fury_RT),QGVAR(25Rnd_Fury_RT_blk)};
    };

    class GVAR(XM7_BLK): KAR_XM7_BLK {
        author=QAUTHOR;
        dlc = QUOTE(PREFIX);
        scope=2;
        scopeArsenal=2;
        ACE_clearJamAction="GestureReloadSPAR_01";
        ACE_checkTemperatureAction="Gear";
        ace_overheating_dispersion = 0.75;
        ace_overheating_mrbs = 3000;
        ace_overheating_slowdownFactor = 1;
        displayName="[61st] Sig MCX Spear (Black)";
        hiddenSelections[]={"Camo2", "Camo3", "Camo4", "Camo5", "Camo6", "Camo7", "Camo8"};
        hiddenSelectionsTextures[]={QPATHTOF(data\UpperReceiver_blk_co.paa), "\KAR_XM7\data\tex\stock_blk_co.paa", "\KAR_XM7\data\tex\magazine_blk_co.paa", QPATHTOF(data\LowerReceiver_blk_co.paa), "\KAR_XM7\data\tex\ironsight_co.paa", "\KAR_XM7\data\tex\handguard_blk_co.paa", "\KAR_XM7\data\tex\details_blk_co.paa"};
        baseWeapon = QGVAR(XM7_BLK);
        magazines[]={QGVAR(25Rnd_Fury),QGVAR(25Rnd_Fury_blk),QGVAR(25Rnd_Fury_RT),QGVAR(25Rnd_Fury_RT_blk)};
    };

    class GVAR(XM7_BLK_G): KAR_XM7_BLK_G {
        author=QAUTHOR;
        dlc = QUOTE(PREFIX);
        scope=2;
        scopeArsenal=2;
        ACE_clearJamAction="GestureReloadSPAR_01";
        ACE_checkTemperatureAction="Gear";
        ace_overheating_closedBolt = 1;
        ace_overheating_dispersion = 0.75;
        ace_overheating_mrbs = 3000;
        ace_overheating_slowdownFactor = 1;
        displayName="[61st] Sig MCX Spear (Grip/Black)";
        hiddenSelections[]={"Camo2", "Camo3", "Camo4", "Camo5", "Camo6", "Camo7", "Camo8"};
        hiddenSelectionsTextures[]={QPATHTOF(data\UpperReceiver_blk_co.paa), "\KAR_XM7\data\tex\stock_blk_co.paa", "\KAR_XM7\data\tex\magazine_blk_co.paa", QPATHTOF(data\LowerReceiver_blk_co.paa), "\KAR_XM7\data\tex\ironsight_co.paa", "\KAR_XM7\data\tex\handguard_blk_co.paa", "\KAR_XM7\data\tex\details_blk_co.paa"};
        baseWeapon = QGVAR(XM7_BLK_G);
        magazines[]={QGVAR(25Rnd_Fury),QGVAR(25Rnd_Fury_blk),QGVAR(25Rnd_Fury_RT),QGVAR(25Rnd_Fury_RT_blk)};
    };

    class GVAR(M250): KAR_XM250 {
        author=QAUTHOR;
        dlc = QUOTE(PREFIX);
        scope=2;
        scopeArsenal=2;
        displayName="[61st] M250";
        recoil="recoil_mk200";
        ACE_checkTemperatureAction="Gear";
        ACE_clearJamAction="GestureReloadMMG02";
        ace_overheating_allowSwapBarrel = 1;
        ace_overheating_closedBolt = 0;
        ace_overheating_dispersion = 0.75;
        ace_overheating_mrbs = 3000;
        ace_overheating_slowdownFactor = 1;
        modes[]={"manual", "close", "short", "medium", "far_optic1", "far_optic2"};
        magazines[]={QGVAR(150Rnd_Fury),QGVAR(150Rnd_Fury_blk),QGVAR(150Rnd_Fury_RT),QGVAR(150Rnd_Fury_RT_blk)};
        baseWeapon = QGVAR(M250);
    };

    class GVAR(M250_BLK): KAR_XM250_BLK {
        author=QAUTHOR;
        dlc = QUOTE(PREFIX);
        scope=2;
        scopeArsenal=2;
        displayName="[61st] M250 (Black)";
        recoil="recoil_mk200";
        ACE_checkTemperatureAction="Gear";
        ACE_clearJamAction="GestureReloadMMG02";
        ace_overheating_allowSwapBarrel = 1;
        ace_overheating_closedBolt = 0;
        ace_overheating_dispersion = 0.75;
        ace_overheating_mrbs = 3000;
        ace_overheating_slowdownFactor = 1;
        modes[]={"manual", "close", "short", "medium", "far_optic1", "far_optic2"};
        magazines[]={QGVAR(150Rnd_Fury),QGVAR(150Rnd_Fury_blk),QGVAR(150Rnd_Fury_RT),QGVAR(150Rnd_Fury_RT_blk)};
        baseWeapon = QGVAR(M250_BLK);
    };
};