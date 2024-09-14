sleep 3;
if!(isNil"dapsExit")exitWith{systemChat"DAPS exit"};
dapsReady=FALSE;
dapsDebug=FALSE;

dapsDebugArray=[]; // Only used during dev

dapsBlacklist=["DAPSblast","SmallSecondary","HelicopterExploSmall","HelicopterExploBig"]; // Blacklisted ammo types

//dapsDebug=TRUE;
//#include "\a3\editor_f\Data\Scripts\dikCodes.h"
// Vehicles that use each type of APS
dapsLight=[];
dapsMedium=[];
dapsHeavy=[];
dapsTrophyLV=[];
dapsTrophyMV=[];
dapsTrophyHV=[];
dapsTrophyHVe=[];
dapsArena=[];
dapsDazzler=[];
dapsDrozd=[];
dapsDrozd2=[];
dapsAfganit=[];
dapsAfganitE=[];
dapsIronFist=[];
dapsAMAP=[];
dapsPersonal=[];
dapsVitebsk=[];
dapsNemesis=[];

dapsMaxAngle=45;
dapsRearmRange=50;
dapsRearmTime=5;
dapsRearmDelay=5; //15
dapsBlastBig=FALSE;

dapsHitLimit=2000; // Limit APS ability to intercept by damage

dapsScriptMode=FALSE;
if!(isClass(configFile>>"cfgPatches">>"DrongosAPS"))then{dapsScriptMode=TRUE};

private _module=objNull;
dapsScriptWait=execVM"daps\Scripts\DefineVehicles.sqf";
waitUntil{scriptDone dapsScriptWait};

if(count(entities"DAPS_Options")>0)then{
    _module=(entities"DAPS_Options")select 0;
    if((_module getVariable"dapsDebug")=="TRUE")then{dapsDebug=TRUE};
    dapsMaxAngle=_module getVariable["dapsMaxAngle",45];
    dapsRearmRange=_module getVariable["dapsRearmRange",50];
    dapsRearmTime=_module getVariable["dapsRearmTime",5];
    dapsRearmDelay=_module getVariable["dapsRearmDelay",5];
    dapsHitLimit=_module getVariable["dapsHitLimit",2000];
    if((_module getVariable"dapsClearAll")=="TRUE")then{
        dapsLight=[];
        dapsMedium=[];
        dapsHeavy=[];
        dapsTrophyLV=[];
        dapsTrophyMV=[];
        dapsTrophyHV=[];
        dapsTrophyHVe=[];
        dapsArena=[];
        dapsDazzler=[];
        dapsDrozd=[];
        dapsDrozd2=[];
        dapsAfganit=[];
        dapsAfganitE=[];
        dapsIronFist=[];
        dapsAMAP=[];
        dapsPersonal=[];
        dapsVitebsk=[];
        dapsNemesis=[];
    };
};

dapsDefinitionsLoaded=TRUE;
dapsDefinitionsLoaded2=FALSE;

sleep 1;
if(count(entities"DAPS_AssignAPS")>0)then{
    waitUntil{dapsDefinitionsLoaded2};
    sleep 1;
};

// Vehicles with a single launcher
dapsSingle=[];
// Vehicles with double launchers
dapsDouble=[];
// All vehicles with APS
dapsAPStypes=[];
// Compile all vehicle types into single/double and the overall APS list
DAPS_fnc_CompileTypes=compile preprocessFile"daps\Scripts\Management\CompileTypes.sqf";
//if(isServer)then{call DAPS_fnc_CompileTypes};
call DAPS_fnc_CompileTypes;
DAPS_fnc_BroadcastTypes=compile preprocessFile"daps\Scripts\Management\BroadcastTypes.sqf";
//if(isServer)then{call DAPS_fnc_BroadcastTypes};
// Projectiles that have been dazzled
dapsDazzled=[];
//dapsSmokeLaunchers=[];
dapsSmokeLaunchers=["SmokeLauncher"];
// Vehicles that have been registered
dapsRegistered=[];
// Registered vehicles with no APS
dapsNoAPS=[];
dapsLoop=true;
// Classnames of ammo that will not activate APS.
dapsExcludedAmmo=[];

dapsAntiSpam=FALSE;

// Used to allow/disallow the DAPS dialog
dapsAvailable=TRUE;

DAPS_fnc_AngleCheck=compile preprocessFile"daps\Scripts\Misc\AngleCheck.sqf";

DAPS_fnc_ReportDIRCM=compile preprocessFile"daps\Scripts\DIRCM\Report.sqf";

DAPS_fnc_MisguideMissile=compile preprocessFile"daps\Scripts\Misc\MisguideMissile.sqf";
DAPS_fnc_MisguideSAM=compile preprocessFile"daps\Scripts\DIRCM\MisguideSAM.sqf";

DAPS_fnc_IsIRguided=compile preprocessFile"daps\Scripts\Misc\IsIRguided.sqf";
DAPS_fnc_IsLaserGuided=compile preprocessFile"daps\Scripts\Misc\IsLaserGuided.sqf";
DAPS_fnc_IsRadarGuided=compile preprocessFile"daps\Scripts\Misc\IsRadarGuided.sqf";
DAPS_fnc_IsVisualGuided=compile preprocessFile"daps\Scripts\Misc\IsVisualGuided.sqf";

DAPS_fnc_Recheck=compile preprocessFile"daps\Scripts\Management\ForceRecheck.sqf";
DAPS_fnc_HasCharges=compile preprocessFile"daps\Scripts\Misc\HasCharges.sqf";
DAPS_fnc_KeyPressed=compile preprocessFile"daps\Scripts\Management\KeyPressed.sqf";
DAPS_fnc_KeyPressed2=compile preprocessFile"daps\Scripts\Management\KeyPressed2.sqf";
//DAPS_fnc_ShowDialog=compile preprocessFile"daps\Scripts\Management\ShowDialog.sqf";
DAPS_fnc_Time=compile preprocessFile"daps\Scripts\Misc\Time.sqf";
DAPS_fnc_Indicator=compile preprocessFile"daps\Scripts\Report\Indicator.sqf";
DAPS_fnc_Active=compile preprocessFile"daps\Scripts\Misc\Active.sqf";
DAPS_fnc_Inc=compile preprocessFile"daps\Scripts\Misc\GetIncoming.sqf";
DAPS_fnc_CountAmmo=compile preprocessFile"daps\Scripts\Misc\CountAmmo.sqf";
DAPS_fnc_RearmCheck=compile preprocessFile"daps\Scripts\Misc\RearmCheck.sqf";
DAPS_fnc_Rearm2=compile preprocessFile"daps\Scripts\Misc\Rearm2.sqf";
DAPS_fnc_ReportRearm=compile preprocessFile"daps\Scripts\Report\ReportRearm.sqf";
// Register an individual vehicle
DAPS_fnc_RegisterVehicle=compile preprocessFile"daps\Scripts\Management\RegisterVehicle.sqf";
// Register all vehicles
DAPS_fnc_RegisterAll=compile preprocessFile"daps\Scripts\Management\RegisterAll.sqf";
// Check for unregistered (ie. newly spawned) vehicles every five seconds and runs DAPS_fnc_RegisterAll;
DAPS_fnc_RegisterLoop=compile preprocessFile"daps\Scripts\Management\RegisterLoop.sqf";
DAPS_fnc_RearmAPS=compile preprocessFile"daps\Scripts\Management\RearmAPS.sqf";
DAPS_fnc_Report=compile preprocessFile"daps\Scripts\Report\Report.sqf";
//DAPS_fnc_BroadcastTypes=compile preprocessFile"daps\Scripts\Management\BroadcastTypes.sqf";
DAPS_fnc_CustomAmmo=compile preprocessFile"daps\Scripts\Management\CustomAmmo.sqf";

DAPS_fnc_Blast=compile preprocessFile"daps\Scripts\Misc\Blast.sqf";
DAPS_fnc_DeductAmmo=compile preprocessFile"daps\Scripts\Misc\DeductAmmo.sqf";
DAPS_fnc_PopSmokeTurn=compile preprocessFile"daps\Scripts\Misc\PopSmokeTurn.sqf";
DAPS_fnc_PopSmoke=compile preprocessFile"daps\Scripts\Misc\PopSmoke.sqf";
DAPS_fnc_PopSmoke2=compile preprocessFile"daps\Scripts\Misc\PopSmoke2.sqf";
DAPS_fnc_CanSmoke=compile preprocessFile"daps\Scripts\Misc\CanSmoke.sqf";
DAPS_fnc_GetDirection=compile preprocessFile"daps\Scripts\Misc\GetDirection.sqf";
DAPS_fnc_RelDir=compile preprocessFile"daps\Scripts\Misc\RelDir.sqf";
DAPS_fnc_RelDir2=compile preprocessFile"daps\Scripts\Misc\RelDir2.sqf";
DAPS_fnc_RelPos=compile preprocessFile"daps\Scripts\Misc\RelPos.sqf";
DAPS_fnc_React=compile preprocessFile"daps\Scripts\Misc\React.sqf";

DAPS_fnc_APSlight=compile preprocessFile"daps\Scripts\APS\APSlight.sqf";
DAPS_fnc_APSmedium=compile preprocessFile"daps\Scripts\APS\APSmedium.sqf";
DAPS_fnc_APSheavy=compile preprocessFile"daps\Scripts\APS\APSheavy.sqf";
DAPS_fnc_Generic=compile preprocessFile"daps\Scripts\APS\Generic.sqf";

DAPS_fnc_TrophyLV=compile preprocessFile"daps\Scripts\APS\TrophyLV.sqf";
DAPS_fnc_APSTrophyLV=compile preprocessFile"daps\Scripts\APS\APSTrophyLV.sqf";

DAPS_fnc_TrophyMV=compile preprocessFile"daps\Scripts\APS\TrophyMV.sqf";
DAPS_fnc_APSTrophyMV=compile preprocessFile"daps\Scripts\APS\APSTrophyMV.sqf";

DAPS_fnc_TrophyHVe2=compile preprocessFile"daps\Scripts\APS\TrophyHVe2.sqf";
DAPS_fnc_TrophyHVe=compile preprocessFile"daps\Scripts\APS\TrophyHVe.sqf";
DAPS_fnc_TrophyHV=compile preprocessFile"daps\Scripts\APS\TrophyHV.sqf";
DAPS_fnc_APSTrophyHVe=compile preprocessFile"daps\Scripts\APS\APSTrophyHVe.sqf";
DAPS_fnc_APSTrophyHV=compile preprocessFile"daps\Scripts\APS\APSTrophyHV.sqf";

DAPS_fnc_Arena=compile preprocessFile"daps\Scripts\APS\Arena.sqf";
DAPS_fnc_APSArena=compile preprocessFile"daps\Scripts\APS\APSArena.sqf";

DAPS_fnc_Dazzler=compile preprocessFile"daps\Scripts\APS\Dazzler.sqf";
DAPS_fnc_APSDazzler=compile preprocessFile"daps\Scripts\APS\APSDazzler.sqf";

DAPS_fnc_Drozd2=compile preprocessFile"daps\Scripts\APS\Drozd2.sqf";
DAPS_fnc_Drozd=compile preprocessFile"daps\Scripts\APS\Drozd.sqf";
DAPS_fnc_APSDrozd2=compile preprocessFile"daps\Scripts\APS\APSDrozd2.sqf";
DAPS_fnc_APSDrozd=compile preprocessFile"daps\Scripts\APS\APSDrozd.sqf";

DAPS_fnc_Afganit2=compile preprocessFile"daps\Scripts\APS\Afganit2.sqf";
DAPS_fnc_Afganit=compile preprocessFile"daps\Scripts\APS\Afganit.sqf";
DAPS_fnc_APSAfganit=compile preprocessFile"daps\Scripts\APS\APSAfganit.sqf";
DAPS_fnc_APSAfganitE=compile preprocessFile"daps\Scripts\APS\APSAfganitE.sqf";


DAPS_fnc_IronFist=compile preprocessFile"daps\Scripts\APS\IronFist.sqf";
DAPS_fnc_APSIronFist=compile preprocessFile"daps\Scripts\APS\APSIronFist.sqf";

DAPS_fnc_AMAP2=compile preprocessFile"daps\Scripts\APS\AMAP2.sqf";
DAPS_fnc_AMAP=compile preprocessFile"daps\Scripts\APS\AMAP.sqf";
DAPS_fnc_APSAMAP=compile preprocessFile"daps\Scripts\APS\APSAMAP.sqf";

DAPS_fnc_Vitebsk2=compile preprocessFile"daps\Scripts\DIRCM\Vitebsk2.sqf";
DAPS_fnc_Vitebsk=compile preprocessFile"daps\Scripts\DIRCM\Vitebsk.sqf";

DAPS_fnc_Nemesis2=compile preprocessFile"daps\Scripts\DIRCM\Nemesis2.sqf";
DAPS_fnc_Nemesis=compile preprocessFile"daps\Scripts\DIRCM\Nemesis.sqf";

//https://community.bistudio.com/wiki/DIK_KeyCodes
#include "\a3\editor_f\Data\Scripts\dikCodes.h"
sleep 1;
["Drongo's APS","APS dialog",["Show Dialog","Tool Tip"],"",{call DAPS_fnc_KeyPressed},[DIK_A,[FALSE,FALSE,TRUE]]]call cba_fnc_addKeybind;

/*
dapsKeyHandle=[]spawn{
    while{TRUE}do{
        //https://community.bistudio.com/wiki/inputAction/actions
        if((inputaction"cycleThrownItems")>.1)then{
            call DAPS_fnc_KeyPressed;
            sleep .3;
        };
        sleep .1;
    };
};

dapsKeyHandle2=[]spawn{
    while{TRUE}do{
        //https://community.bistudio.com/wiki/inputAction/actions
        if((inputaction"handgun")>.1)then{
            call DAPS_fnc_KeyPressed2;
            sleep .3;
        };
        sleep .1;
    };
};
*/

[]spawn{
    {if!(alive _x)then{dapsDazzled=dapsDazzled-[_x]}}forEach dapsDazzled;
    sleep 300;
};

dapsReady=TRUE;
dapsServer=FALSE;
if(isServer)then{
    dapsServer=TRUE;
    publicVariable"dapsServer";
    if(dapsDebug)then{"REGISTER LOOP"remoteExec["systemChat"];"REGISTER LOOP"remoteExec["hint"]};
    []spawn DAPS_fnc_RegisterLoop;
    sleep 3;
    call DAPS_fnc_BroadcastTypes;
};