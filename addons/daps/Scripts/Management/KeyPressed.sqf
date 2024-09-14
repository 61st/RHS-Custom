if((vehicle player)==player)exitWith{};
if(dialog)exitWith{closeDialog 0};
execVM"daps\Scripts\Management\ShowDialog.sqf";
// Attempt manual rearm
_v call DAPS_fnc_Rearm2;
/*
if(!dapsAvailable)exitWith{};
private _v=vehicle player;
if(_v==player)exitWith{};
if(isNil{_v getVariable"dapsType"})exitWith{};
if(((str(findDisplay 312))find"312")>-1)exitWith{};
if!(isNull(getConnectedUAV player))exitWith{};
[_v,"",0,FALSE]spawn DAPS_fnc_Report;
// Attempt manual rearm
_v call DAPS_fnc_Rearm2;