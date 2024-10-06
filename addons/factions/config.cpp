#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "lxir_main"
        };
        authorUrl = "https://github.com/task-force-war-wolf/lxir/";
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"


#include "CfgFactionClasses.sqf"
#include "rhs_msv.sqf"
#include "rhs_rfgf.sqf"
#include "rhs_vdv.sqf"
#include "rhs_vmf.sqf"
#include "rhs_tv.sqf"
