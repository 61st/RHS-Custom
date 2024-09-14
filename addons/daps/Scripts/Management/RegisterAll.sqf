private _pv=FALSE;
{
if!(_x in dapsRegistered)then{dapsRegistered pushBack _x;_x remoteExec["DAPS_fnc_RegisterVehicle"];_pv=TRUE};
}forEach vehicles;
{if!(alive _x)then{dapsRegistered=dapsRegistered-[_x]}}forEach dapsRegistered;
if(_pv)then{publicVariable"dapsRegistered"};