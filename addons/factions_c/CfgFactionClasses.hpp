/*
 * Author: AUTHOR
 * Function description
 *
 * Arguments:
 * 0: Objects <ARRAY>
 * 1: All <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[bob, ted], false] call lxir_main_fnc_example
 *
 * Public: No
 */

class CfgFactionClasses {
    class NO_CATEGORY;
    class O_CebuArmy_Woodland: NO_CATEGORY {
        displayName = "61st Cebu Armed Forces";
        side = 2;
        flag = "\A3\ui_f\data\map\markers\flags\Altis_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\Altis_ca.paa";
        priority = 0;
    };
    class I_PhilippinesArmy_Woodland: NO_CATEGORY {
        displayName = "61st Philippines Armed Forces";
        side = 1;
        flag = "ca\Ca_E\data\flag_blufor_co.paa";
        icon = "ca\Ca_E\data\flag_blufor_co.paa";
        priority = 0;
    };
};