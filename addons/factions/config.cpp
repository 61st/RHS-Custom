#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "lxim_main",
            "cba_main",
            "rhs_main_loadorder",
            "rhsgref_main_loadorder",
            "rhssaf_main_loadorder",
            "rhsusf_main_loadorder",
            "aceax_gearinfo"
        };
        authorUrl = "https://github.com/task-force-war-wolf/lxim/";
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"


#include "CfgFactionClasses.hpp"

class CfgGroups {
    class EAST {
        #include "rhs_msv.hpp"
        #include "rhs_rfgf.hpp"
        #include "rhs_vdv.hpp"
        #include "rhs_vmf.hpp"
        #include "rhs_tv.hpp"
    };
};
