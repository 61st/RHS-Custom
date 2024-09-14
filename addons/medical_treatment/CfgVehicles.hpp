class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Default;
            class Edit;
            class Combo;
            class Checkbox;
            class CheckboxNumber;
            class ModuleDescription;
            class Units;
        };

        class ModuleDescription {
            class AnyBrain;
        };
    };
    #include "MedicalModule.hpp"
    class Item_Base_F;
    class lxir_naloxoneItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Naloxone Autoinjector";
        author = "Alablm";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(lxir_naloxone,1);
        };
    };
};