#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "lxim_main",
            "tweed_uaf_21_cfg",
            "tweed_uaf_21_cfg"
        };
        authorUrl = URL;
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "xtdW28.hpp"
#include "CfgUnitNoms.hpp"

class CfgUnitRanks {
    class lxim_UA_OCP_w1 {
        displayName="US OCP w1 Warrant Officer 1";
        material="\tweed_eden_21\patches\fabr.rvmat";
        texture="z\lxim\addons\media\images\rank\w1.paa";
        textureVehicle="";
    };
    class lxim_UA_OCP_cw2 {
        displayName="US OCP cw2 Chief Warrant Officer 2";
        material="\tweed_eden_21\patches\fabr.rvmat";
        texture="z\lxim\addons\media\images\rank\w2.paa";
        textureVehicle="";
    };
    class lxim_UA_OCP_cw3 {
        displayName="US OCP cw3 Chief Warrant Officer 3";
        material="\tweed_eden_21\patches\fabr.rvmat";
        texture="z\lxim\addons\media\images\rank\w3.paa";
        textureVehicle="";
    };
    class lxim_UA_OCP_cw4 {
        displayName="US OCP cw4 Chief Warrant Officer 4";
        material="\tweed_eden_21\patches\fabr.rvmat";
        texture="z\lxim\addons\media\images\rank\w4.paa";
        textureVehicle="";
    };
    class lxim_UA_OCP_cw5 {
        displayName="US OCP cw5 Chief Warrant Officer 5";
        material="\tweed_eden_21\patches\fabr.rvmat";
        texture="z\lxim\addons\media\images\rank\w5.paa";
        textureVehicle="";
    };
};


