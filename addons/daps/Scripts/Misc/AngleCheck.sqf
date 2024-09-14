// Returns TRUE if angle is equal or less than dapsMaxAngle
//θ = atan (h / d)
if(dapsMaxAngle<0)exitWith{TRUE};
private _v=_this select 0; // vehicle
private _p=_this select 1; // projectile
private _vPos=getPosASL _v;
private _pPos=getPosASL _p;
private _aV=_vPos select 2;
private _aP=_pPos select 2;
private _alt=_aP-_aV;
//if(dapsDebug)then{systemChat format["ALT: %1",round _alt]};
if(_alt<0)exitWith{TRUE};
private _d=_vPos distance2D _pPos;
private _angle=atan(_alt/_d);
if(dapsDebug)then{systemChat format["ANGLE: %1",round _angle]};
if(_angle>dapsMaxAngle)exitWith{FALSE};
TRUE