if!(dialog)then{createDialog"dapsDialog";waitUntil{dialog};};ctrlShow[10000,TRUE];
private _type="";
private _active=FALSE;
private _on="OFF";
private _vehicle=vehicle player;
if!(isNil{_vehicle getVariable"dapsType"})then{_type=_vehicle getVariable"dapsType"};
if(_type=="")exitWith{systemChat"No APS"};

if!(dialog)then{createDialog"dapsDialog";waitUntil{dialog};};ctrlShow[10000,TRUE];

if(_vehicle getVariable"dapsActive")then{_active=TRUE;_on="ON"};

((findDisplay 10000)displayCtrl 10001)ctrlSetText format["%1   (%2)",_type,_on];

private _charges=0;
private _chargesMax=0;
private _chargesL=0;
private _chargesLmax=0;
private _chargesR=0;
private _chargesRmax=0;

private _text1="";
private _text2="";
private _text3="";
if!(isNil{_vehicle getVariable"dapsAmmoR"})then{
    _chargesL=_vehicle getVariable"dapsAmmoL";
    _chargesR=_vehicle getVariable"dapsAmmoR";
    _chargesLmax=_vehicle getVariable"dapsAmmoMaxL";
    _chargesRmax=_vehicle getVariable"dapsAmmoMaxR";
    _text1=format["Charges:    L: %1/%2      R: %3/%4",_chargesL,_chargesLmax,_chargesR,_chargesRmax];
    //_text1="Charges:";
    //_text2=format[" Left: %1/%2    Right: %3/%4",_chargesL,_chargesLmax,_chargesR,_chargesRmax];
    //_text3=format["    Right: %1/%2",_chargesR,_chargesRmax];
    ((findDisplay 10000)displayCtrl 10002)ctrlSetStructuredText parseText _text1;
    ((findDisplay 10000)displayCtrl 10003)ctrlSetStructuredText parseText _text2;
    //((findDisplay 10000)displayCtrl 10004)ctrlSetStructuredText parseText _text3;
}else{
    _charges=_vehicle getVariable"dapsAmmo";
    _chargesMax=_vehicle getVariable"dapsAmmoMax";
    _text1=format["Charges: %1/%2",_charges,_chargesMax];
    ((findDisplay 10000)displayCtrl 10002)ctrlSetStructuredText parseText _text1;
};


/*
_allActions=[];
_index=0;
if(dyelSearch)exitWith{
    if!((uniform _man)=="")then{_allActions pushBack(uniform _man)};
    if!((backpack _man)=="")then{_allActions pushBack(backpack _man)};
    if!((vest _man)=="")then{_allActions pushBack(vest _man)};
    if!((headgear _man)=="")then{_allActions pushBack(headgear _man)};
    if!((goggles _man)=="")then{_allActions pushBack(goggles _man)};
    _allActions=_allActions+weapons _man+magazines _man+items _man+assignedItems _man;
    {if(_x=="")then{_allActions=_allActions-[_x]}}forEach _allActions;
    _allActions pushBack"<";
    {
    _item=_x call DYEL_fnc_DisplayNameByClass;
    _list lbAdd format["%1",_item];
    _list lbSetData[_index,_x];
    _index=_index+1;
    }forEach _allActions;
};

_allActions=[
["Any information?","INFO"]
];
_manActions=[];
if!(isNil{_man getVariable"dyelActions"})then{_manActions=_man getVariable"dyelActions"};
{_allActions pushBackUnique _x}forEach _manActions; // this unit only
_status="";

_animState="";
_animState=toLower(animationState _man);
if(count(_animState splitString"0_")>1)then{_animState=((toLower(animationState _man))splitString"0_")select 1};

_vehicles=[];
if(toLower(animationState _man)in["amovpercmstpssurwnondnon","inbasemoves_handsbehindback2"])then{
    _vehicles=nearestObjects[_man,["Car","Tanks","Air","Ship"],10];
    if((count _vehicles)<1)exitWith{};
    {if((_x emptyPositions"cargo")<1)then{_vehicles=_vehicles-[_x]}}forEach _vehicles;
    if((count _vehicles)<1)exitWith{};
    _allActions pushBack[toUpper(format["GET IN %1",(_vehicles select 0)call DYEL_fnc_DisplayName]),"GET IN"];
};

//systemChat str _animstate;copytoclipboard str _animstate;

//,"inbasemoves_handsbehindback2"
if(_animState in[
"handsbehindback2",
"aidlpsitmstpssurwnondnon",
"acts_aidlpsitmstpssurwnondnon",
"amovpercmstpssurwnondnon"
]
)then{
    if(_animState=="amovpercmstpssurwnondnon")then{_allActions pushBack["RESTRAIN","RESTRAIN"]};
    if(_animState=="handsbehindback2")then{_allActions pushBack["SIT DOWN","SIT DOWN"]};
    _allActions pushBack["RELEASE","RELEASE"];
    _allActions pushBack["MOVE PRISONER","MOVE PRISONER"];
    //if!(_animState=="amovpercmstpssurwnondnon")then{_allActions pushBack["SEARCH","SEARCH"]};
    if(_animState=="aidlpsitmstpssurwnondnon")then{_allActions pushBack["SEARCH","SEARCH"]};
}else{
    _allActions pushBack["Leave the area.","LEAVE"];
    _allActions pushBack["RESTRAIN","RESTRAIN"];
};
{_allActions pushBack _x}forEach dyelActionsMan;
if!((animationState _man)=="Acts_AidlPsitMstpSsurWnonDnon_loop")then{_allActions pushBack["Bye.","BYE"]};

// Actions
_index=0;
_action=[];
{
_action=_allActions select _index;
_list lbAdd format["%1",_action select 0]; // name in list
_list lbSetData[_index,_action select 1]; // script string
_index=_index+1;
}forEach _allActions;
_rank="";
if!((side _man)==CIVILIAN)then{_rank=format["%1 ",rank _man]};
_text=format["%1%2    %3    %4    %5",_rank,name _man,_man call DYEL_fnc_DisplayName,group _man,side _man];
((findDisplay 10000)displayCtrl 10001)ctrlSetStructuredText parseText format["%1",_text];