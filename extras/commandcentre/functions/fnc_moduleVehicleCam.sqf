// not documented: module called

params [
    ["_logic",objNull,[objNull]],
    ["_groups",[],[[]]],
    "_localGroups",
    "_logic"
];

if (not isServer) exitWith {};

private _objects = synchronizedObjects _logic;
{
    LXIR_CC_vehicleCamList pushBackUnique _x;
} foreach _objects;

publicVariable "LXIR_CC_vehicleCamList";