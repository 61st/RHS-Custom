#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "a3_props_f_orange",
            "rhsusf_main_loadorder",
            "ACM_core"
        };
        units[] = {
            QGVAR(Item_FirstAid),
            QGVAR(Item_MedicKit),
            QGVAR(Item_CLS),
            QGVAR(Item_DrugKit),
            QGVAR(Item_Trauma),
            QGVAR(Item_mopp)
        };
        weapons[] = {
            QGVAR(FirstAid),
            QGVAR(MedicKit),
            QGVAR(CLS),
            QGVAR(DrugKit),
            QGVAR(Trauma),
            QGVAR(mopp)
        };
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
