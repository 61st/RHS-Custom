if(dialog)then{
    private _vehicle=vehicle player;
    private _active=_vehicle getVariable"dapsActive";
    private _on="OFF";
    private _type="";
    if!(isNil{_vehicle getVariable"dapsType"})then{_type=_vehicle getVariable"dapsType"};
    if(_type=="")exitWith{};
    if(_active)then{
        ((findDisplay 10000)displayCtrl 10001)ctrlSetText format["%1   (%2)",_type,_on];
        _vehicle setVariable["dapsActive",FALSE];
        //hintSilent format["%1 %2",_type,_on];
    }else{
        _on="ON";
        ((findDisplay 10000)displayCtrl 10001)ctrlSetText format["%1   (%2)",_type,_on];
        _vehicle setVariable["dapsActive",TRUE];
        //hintSilent format["%1 %2",_type,_on];
    };
};