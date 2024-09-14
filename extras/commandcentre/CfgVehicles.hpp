class CBA_Extended_EventHandlers;
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

    #include "ModuleCommsTower.hpp"
    #include "ModuleSingleScreen.hpp"
    #include "ModuleMultiScreen.hpp"
    #include "ModuleStationaryRadio.hpp"
    #include "ModuleVehicleCam.hpp"
};
