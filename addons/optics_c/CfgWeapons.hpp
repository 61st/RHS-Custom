class CfgWeapons {
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class CUP_optic_ISM1400A7;
    class CUP_optic_ISM1400A7_tan;
    class CUP_optic_ISM1400A7_OD;
    class CUP_optic_ISM1400A7_green;
    class GVAR(optic_ISM1400A7): CUP_optic_ISM1400A7 {
        author = QAUTHOR;
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        displayName="[61ST] ISM - Advanced";
        descriptionShort="[61ST] ISM";
        class CBA_ScriptedOptic {
            bodyTexture = "\z\ace\addons\xm157\data\ace_vector_body_co.paa";
            // bodyTextureNight = ".paa"; // optional
            bodyTextureSize = 1;
            hideMagnification = 1; // no point, and it flickers at 1x
            disableTilt = 0;
        };
        weaponInfoType = "ace_xm157_info";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass=14;
            opticType=2;
            weaponInfoType = QGVAR(info);
            optics = 1;
            inertia=0.2;
            modelOptics = "\x\cba\addons\optics\cba_optic_big_100.p3d";
            class OpticsModes {
                class Reflex {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = "8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomMax = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomInit = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class ReflexScope:Reflex {
                    distanceZoomMax = 300;
                    distanceZoomMin = 300;
                    memoryPointCamera = "opticView";
                    opticsDisablePeripherialVision = 0;
                    opticsFlare = 1;
                    opticsID = 2;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5", "ACE_OpticsRadBlur1"};
                    opticsZoomInit = 0.0872665;
                    opticsZoomMax = 0.0872665;
                    opticsZoomMin = 0.0872665;
                    useModelOptics = 1;
                    visionMode[]={};
                };
            };
        };
    };
    class GVAR(optic_ISM1400A7_tan): CUP_optic_ISM1400A7_tan {
        author = QAUTHOR;
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        displayName="[61ST] ISM Tan - Advanced";
        descriptionShort="[61ST] ISM (TAN)";
        class CBA_ScriptedOptic {
            bodyTexture = "\z\ace\addons\xm157\data\ace_vector_body_co.paa";
            // bodyTextureNight = ".paa"; // optional
            bodyTextureSize = 1;
            hideMagnification = 1; // no point, and it flickers at 1x
            disableTilt = 0;
        };
        weaponInfoType = "ace_xm157_info";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass=14;
            opticType=2;
            weaponInfoType = QGVAR(info);
            optics = 1;
            inertia=0.2;
            modelOptics = "\x\cba\addons\optics\cba_optic_big_100.p3d";
            class OpticsModes {
                class Reflex {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = "8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomMax = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomInit = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class ReflexScope:Reflex {
                    distanceZoomMax = 300;
                    distanceZoomMin = 300;
                    memoryPointCamera = "opticView";
                    opticsDisablePeripherialVision = 0;
                    opticsFlare = 1;
                    opticsID = 2;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5", "ACE_OpticsRadBlur1"};
                    opticsZoomInit = 0.0872665;
                    opticsZoomMax = 0.0872665;
                    opticsZoomMin = 0.0872665;
                    useModelOptics = 1;
                    visionMode[]={};
                };
            };
        };
    };
    class GVAR(optic_ISM1400A7_od): CUP_optic_ISM1400A7_OD {
        author = QAUTHOR;
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        displayName="[61ST] ISM OD - Advanced";
        descriptionShort="[61ST] ISM (OD)";
        class CBA_ScriptedOptic {
            bodyTexture = "\z\ace\addons\xm157\data\ace_vector_body_co.paa";
            // bodyTextureNight = ".paa"; // optional
            bodyTextureSize = 1;
            hideMagnification = 1; // no point, and it flickers at 1x
            disableTilt = 0;
        };
        weaponInfoType = "ace_xm157_info";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass=14;
            opticType=2;
            weaponInfoType = QGVAR(info);
            optics = 1;
            inertia=0.2;
            modelOptics = "\x\cba\addons\optics\cba_optic_big_100.p3d";
            class OpticsModes {
                class Reflex {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = "8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomMax = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomInit = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class ReflexScope:Reflex {
                    distanceZoomMax = 300;
                    distanceZoomMin = 300;
                    memoryPointCamera = "opticView";
                    opticsDisablePeripherialVision = 0;
                    opticsFlare = 1;
                    opticsID = 2;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5", "ACE_OpticsRadBlur1"};
                    opticsZoomInit = 0.0872665;
                    opticsZoomMax = 0.0872665;
                    opticsZoomMin = 0.0872665;
                    useModelOptics = 1;
                    visionMode[]={};
                };
            };
        };
    };
    class GVAR(optic_ISM1400A7_green): CUP_optic_ISM1400A7_green {
        author = QAUTHOR;
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        displayName="[61ST] ISM Green - Advanced";
        descriptionShort="[61ST] ISM (Green)";
        class CBA_ScriptedOptic {
            bodyTexture = "\z\ace\addons\xm157\data\ace_vector_body_co.paa";
            // bodyTextureNight = ".paa"; // optional
            bodyTextureSize = 1;
            hideMagnification = 1; // no point, and it flickers at 1x
            disableTilt = 0;
        };
        weaponInfoType = "ace_xm157_info";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass=14;
            opticType=2;
            weaponInfoType = QGVAR(info);
            optics = 1;
            inertia=0.2;
            modelOptics = "\x\cba\addons\optics\cba_optic_big_100.p3d";
            class OpticsModes {
                class Reflex {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = "8 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomMax = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    opticsZoomInit = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class ReflexScope:Reflex {
                    distanceZoomMax = 300;
                    distanceZoomMin = 300;
                    memoryPointCamera = "opticView";
                    opticsDisablePeripherialVision = 0;
                    opticsFlare = 1;
                    opticsID = 2;
                    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5", "ACE_OpticsRadBlur1"};
                    opticsZoomInit = 0.0872665;
                    opticsZoomMax = 0.0872665;
                    opticsZoomMin = 0.0872665;
                    useModelOptics = 1;
                    visionMode[]={};
                };
            };
        };
    };
    
};
