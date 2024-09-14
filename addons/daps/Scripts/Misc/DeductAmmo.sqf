private _v=_this select 0;
private _s=_this select 1;
private _am=(_this select 2)-1;
if(_am<0)then{_am=0};
if(_s=="LEFT")then{_v setVariable["dapsAmmoL",_am,TRUE];};
if(_s=="RIGHT")then{_v setVariable["dapsAmmoR",_am,TRUE]};
if(_s=="")then{_v setVariable["dapsAmmo",_am,TRUE]};
TRUE