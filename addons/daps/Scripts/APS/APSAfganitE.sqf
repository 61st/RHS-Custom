private _v=_this;
//if!(local _v)exitWith{};
private _m=[];
private _r=[];
private _s=[];
private _sm=[];
private _p=[];
private _l=0;
private _sh=FALSE;
private _1=objNull;
private _2=objNull;
_v setVariable["dapsActive",TRUE,TRUE];
_v setVariable["dapsLastAmmo",(_v call DAPS_fnc_CountAmmo),TRUE];
_v setVariable["dapsType","Afganit Enhanced",TRUE];
_v setVariable["dapsAmmoR",5,TRUE];
_v setVariable["dapsAmmoMaxR",5,TRUE];
_v setVariable["dapsAmmoL",5,TRUE];
_v setVariable["dapsAmmoMaxL",5,TRUE];
private _time=-1;
private _reg=[];
while{TRUE}do{
    if!(alive _v)exitWith{};
    if(_v call DAPS_fnc_Active)then{
        _s=_v nearObjects["ShellCore",300];
        _r=_v nearObjects["RocketCore",200];
        _m=_v nearObjects["MissileCore",200];
        _sm=_v nearObjects["SubmunitionCore",200];
        _p=_v nearObjects["ammo_Penetrator_Base",200];
        _r=_r+_m+_s+_sm+_p;
        {if((typeOf _x)in dapsBlacklist)then{_reg pushBackUnique _x}}forEach _r;
        _r=_r-_reg;
        if((count _r)>0)then{_1=_r select 0;if(_1 in _s)then{_sh=TRUE};[_v,_1,_sh]spawn DAPS_fnc_Afganit;_l=.5;_sh=FALSE;_reg pushBack(_r select 0)};
        if((count _r)>1)then{_2=_r select 1;if(_2 in _s)then{_sh=TRUE};[_v,_2,_sh]spawn DAPS_fnc_Afganit;_l=.5;_sh=FALSE;_reg pushBack(_r select 1)};
        if(_l>0)then{sleep _l;_l=0};
    };
    //{if!(alive _x)then{_reg=_reg-[_x]}}forEach _reg;
    if((call DAPS_fnc_Time)>_time)then{
        _v call DAPS_fnc_RearmCheck;
        _time=(call DAPS_fnc_Time)+dapsRearmDelay;
        {if!(alive _x)then{_reg=_reg-[_x]}}forEach _reg;
    };
    sleep .005;
};