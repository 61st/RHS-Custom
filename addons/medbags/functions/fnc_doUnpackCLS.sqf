#include "..\script_component.hpp"
/*

 * \lxim_medical\supplies\functions\fn_doUnpackMedicKit.sqf
 * by YonV
 *
 * unpack medical supplies
 *
 * Arguments:
 * 0: unit - <OBJECT>
 *
 * Return:
 * nothing
 *
 * Example:
 * [player] call lxim_medical_supplies_fnc_doUnpackMedicKit;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_unit"];

_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {};

// -------------------------------------------------------------------------------------------------

[_unit] spawn {

    params ["_unit"];

    _unit playAction "Gear";

    if (!isNull objectParent _unit) then {
        playSound QGVAR(Medical_MedicKit_Open_1);
    } else {
        private _pitch = random [0.6, 1, 1.4];
        playSound3D ["z\lxim\addons\medbags\data\sounds\medickit_open_1.ogg", _unit]
    };

    lxim_MEDICAL_SUPPLIES_UNPACK_SUCCESS = false;
    lxim_MEDICAL_SUPPLIES_UNPACK_FAILURE = false;

    [
        2,
        [], { lxim_MEDICAL_SUPPLIES_UNPACK_SUCCESS = true; }, { lxim_MEDICAL_SUPPLIES_UNPACK_FAILURE = true; },
        hint "Unpacking CLS Kit....",
        {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;

    waitUntil {if ((lxim_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (lxim_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};

    if (lxim_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {

        _unit removeItem "lxim_medbags_CLS";

        private _order = [3,2,1];
        private _overflow = true;

        [_unit, "ACM_AmmoniaInhalant",2, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_Inhaler_Penthrox",1, _order, _overflow] call EFUNC(common,addItem);
        
        // Catastrophic Bleeding
        [_unit, "ACM_PressureBandage",8, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_EmergencyTraumaDressing",6, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACM_ElasticWrap",8, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACE_tourniquet",2, _order, _overflow] call EFUNC(common,addItem);
        
        // Airway
        [_unit, "ACM_SuctionBag",04, _order, _overflow] call EFUNC(common,addItem);

        [_unit, "ACM_PulseOximeter",01, _order, _overflow] call EFUNC(common,addItem);
        
        // Breathing
        [_unit, "ACM_ChestSeal",2, _order, _overflow] call EFUNC(common,addItem);
                
        // Circulation
        [_unit, "ACM_IV_16g",4, _order, _overflow] call EFUNC(common,addItem);

        [_unit, "ACM_FieldBloodTransfusionKit_500",24, _order, _overflow] call EFUNC(common,addItem);

        [_unit, "ACE_epinephrine",2, _order, _overflow] call EFUNC(common,addItem);
        
        [_unit, "ACE_salineIV_250",2, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_salineIV_500",2, _order, _overflow] call EFUNC(common,addItem);
                
        [_unit, "ACM_SAMSplint",02, _order, _overflow] call EFUNC(common,addItem);
        
        // Other
        [_unit, "ACM_Spray_Naloxone",02, _order, _overflow] call EFUNC(common,addItem);
        [_unit, "ACE_morphine",02, _order, _overflow] call EFUNC(common,addItem);
        
    };
    if (lxim_MEDICAL_SUPPLIES_UNPACK_FAILURE) exitWith {
        [_unit, QGVAR(Medical_MedicKit_Open_1)] call EFUNC(common,stop3dSound);
    };
};
