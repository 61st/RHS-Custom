/*
 * Author: Reeveli
 * Part of Reeveli's TFAR Scribbles.
 * UI for ANARC 164.

    1.1
    Increased nigh time threshold to <1
*/


#define TFAR_164_X 0.0413536 * safeZoneW + safeZoneX
#define TFAR_164_Y 0.0434751 * safeZoneH + safeZoneY
#define TFAR_164_W 0.431062 * safeZoneW
#define TFAR_164_H 0.7513 * safeZoneH

class anarc164_radio_dialog
{
    idd = 3174;
    movingEnable = 1;
    onUnload = "['OnRadioOpen', [player, TF_lr_dialog_radio, true, 'anarc164_radio_dialog', false]] call TFAR_fnc_fireEventHandlers;[TF_lr_dialog_radio # 0, [ctrlText 8009,ctrlText 8010,ctrlText 8011,ctrlText 8012,ctrlText 8013,ctrlText 8014]] call Rev_TFAR_fnc_saveScribble";
    onLoad = "if ((sunOrMoon < 1) AND (isNull objectParent player)) then {((_this select 0) displayCtrl 67676) ctrlSetTextColor [0.12,0.12,0.12,1];((_this select 0) displayCtrl 8000) ctrlSetTextColor [0.12,0.12,0.12,1]};";
    controlsBackground[] = {};
    objects[] = {};
    controls[] = {"background","Rev_list","Rev_fr_1","Rev_fr_2","Rev_fr_3","Rev_fr_4","Rev_fr_5","Rev_fr_6","Rev_desc_1","Rev_desc_2","Rev_desc_3","Rev_desc_4","Rev_desc_5","Rev_desc_6","enter","channel_edit","edit","clear","prev_channel","increase_volume","stereo","additional","speakers"};
    class background: RscBackPicture
    {
        idc = 67676;
        text = "\z\tfar\addons\backpacks\anarc164\ui\anarc164.paa";
        x = "0.0413536 * safeZoneW + safeZoneX";
        y = "0.0434751 * safeZoneH + safeZoneY";
        w = "0.431062 * safeZoneW";
        h = "0.7513 * safeZoneH";
        moving = 1;
    };
    class Rev_list: background
    {
        idc=8000;
        text="\reeveli_tfar_scribbles\anarc164\Rev_anarc164.paa";
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_164',false]);";
    };
    class Rev_fr_1: RscText
    {
        idc = 8001;
        text = "";
        font = "Caveat";
        sizeEx = TFAR_164_H * 0.028;
        colorText[] = {0,0,0,1};
        shadow = 0;
        x = TFAR_164_X + TFAR_164_W * 0.157;
        y = TFAR_164_Y + TFAR_164_H * 0.208;
        w = TFAR_164_W * 0.08;
        h = TFAR_164_H * 0.018;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_164',false]);[1,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_2: Rev_fr_1
    {
        idc = 8002;
        y = TFAR_164_Y + TFAR_164_H * 0.233;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_164',false]);[2,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_3: Rev_fr_1
    {
        idc = 8003;
        y = TFAR_164_Y + TFAR_164_H * 0.258;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_164',false]);[3,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_4: Rev_fr_1
    {
        idc = 8004;
        y = TFAR_164_Y + TFAR_164_H * 0.283;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_164',false]);[4,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_5: Rev_fr_1
    {
        idc= 8005;
        y = TFAR_164_Y + TFAR_164_H * 0.308;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_164',false]);[5,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_fr_6: Rev_fr_1
    {
        idc= 8006;
        y = TFAR_164_Y + TFAR_164_H * 0.333;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_164',false]);[6,_control] call Rev_TFAR_fnc_getLwFrq;";
    };
    class Rev_desc_1: RscEdit
    {
        idc = 8009;
        text = "";
        font = "Caveat";
        size = TFAR_164_H * 0.028;
        sizeEx = TFAR_164_H * 0.028;
        colorText[] = {0,0,0,1};
        shadow = 0;
        style = 512;
        x = TFAR_164_X + TFAR_164_W * 0.242;
        y = TFAR_164_Y + TFAR_164_H * 0.208;
        w = TFAR_164_W * 0.22;
        h = TFAR_164_H * 0.018;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_164',false]);[TF_lr_dialog_radio # 0, 1, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_2: Rev_desc_1
    {
        idc = 8010;
        y = TFAR_164_Y + TFAR_164_H * 0.233;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_164',false]);[TF_lr_dialog_radio # 0, 2, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_3: Rev_desc_1
    {
        idc = 8011;
        y = TFAR_164_Y + TFAR_164_H * 0.258;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_164',false]);[TF_lr_dialog_radio # 0, 3, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_4: Rev_desc_1
    {
        idc = 8012;
        y = TFAR_164_Y + TFAR_164_H * 0.283;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_164',false]);[TF_lr_dialog_radio # 0, 4, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_5: Rev_desc_1
    {
        idc = 8013;
        y = TFAR_164_Y + TFAR_164_H * 0.308;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_164',false]);[TF_lr_dialog_radio # 0, 5, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class Rev_desc_6: Rev_desc_1
    {
        idc = 8014;
        y = TFAR_164_Y + TFAR_164_H * 0.333;
        onLoad = "params ['_control','_config']; _control ctrlShow (missionnameSpace getvariable ['Rev_TFAR_164',false]);[TF_lr_dialog_radio # 0, 6, _control] call Rev_TFAR_fnc_loadScribble;";
    };
    class channel_edit: RscEditLCD
    {
        idc = 1411;
        x = "0.288078 * safeZoneW + safeZoneX";
        y = "0.2382 * safeZoneH + safeZoneY";
        w = "0.0324844 * safeZoneW";
        h = "0.0374 * safeZoneH";
        colorText[] = {1,0.5,0,1};
        colorBackground[] = {0,0,0,0};
        colorActive[] = {0,1,0,1};
        font = "TFAR_font_segments";
        shadow = 1;
        sizeEx = "(((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) * 1.2)";
        tooltip = "Current channel";
        canModify = 0;
    };
    class edit: RscEditLCD
    {
        idc = 1410;
        x = "0.201969 * safeZoneW + safeZoneX";
        y = "0.3515 * safeZoneH + safeZoneY";
        w = "0.0995156 * safeZoneW";
        h = "0.0352 * safeZoneH";
        colorText[] = {1,0.5,0,1};
        colorBackground[] = {0,0,0,0};
        colorActive[] = {0,0,0,1};
        font = "TFAR_font_segments";
        shadow = 1;
        sizeEx = "(((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 23) * 1.2)";
        tooltip = "Current frequency";
        canModify = 1;
        onKeyUp = "if (_this select 1 in [28,156]) then { [((ctrlParent (_this select 0))) displayCtrl 1410] call TFAR_backpacks_fnc_onButtonClick_Enter; private _channel = ((TF_lr_dialog_radio) call TFAR_fnc_getLrSettings) # 0; [_channel + 1, displayCtrl (8000 + _channel + 1)] call Rev_TFAR_fnc_getLwFrq;};";
        onLoad = "params ['_control','_config']; ctrlSetFocus _control";
    };
    class enter: HiddenRotator
    {
        idc = 3575;
        x = "0.233422 * safeZoneW + safeZoneX";
        y = "0.4373 * safeZoneH + safeZoneY";
        w = "0.037125 * safeZoneW";
        h = "0.0693 * safeZoneH";
        tooltip = "Set frequency";
        onButtonClick = "playSound 'TFAR_rotatorPush'; [((ctrlParent (_this select 0))) displayCtrl 1410] call TFAR_backpacks_fnc_onButtonClick_Enter; private _channel = ((TF_lr_dialog_radio) call TFAR_fnc_getLrSettings) # 0; [_channel + 1, displayCtrl (8000 + _channel + 1)] call Rev_TFAR_fnc_getLwFrq;"; action = "";
    };
    class clear: HiddenRotator
    {
        idc = 3576;
        x = "0.168453 * safeZoneW + safeZoneX";
        y = "0.4362 * safeZoneH + safeZoneY";
        w = "0.0376406 * safeZoneW";
        h = "0.0715 * safeZoneH";
        tooltip = "Clear frequency";
        action = "playSound 'TFAR_rotatorPush'; ctrlSetText [1410,'']; ctrlSetFocus ((findDisplay 3174) displayCtrl 1410);";
    };
    class prev_channel: HiddenRotator
    {
        idc = 3577;
        x = "0.297875 * safeZoneW + safeZoneX";
        y = "0.4384 * safeZoneH + safeZoneY";
        w = "0.0360937 * safeZoneW";
        h = "0.0671 * safeZoneH";
        tooltip = "Previous channel | Next channel";
        onMouseButtonDown = "[_this select 1, true, '%1'] call TFAR_fnc_setChannelViaDialog;";
    };
    class increase_volume: HiddenRotator
    {
        idc = 3579;
        x = "0.239094 * safeZoneW + safeZoneX";
        y = "0.5451 * safeZoneH + safeZoneY";
        w = "0.02475 * safeZoneW";
        h = "0.0462 * safeZoneH";
        tooltip = "Decrease volume | Increase volume";
        onMouseButtonDown = "[_this select 1, true] call TFAR_fnc_setVolumeViaDialog;";
    };
    class stereo: HiddenRotator
    {
        idc = 3580;
        x = "0.115344 * safeZoneW + safeZoneX";
        y = "0.566 * safeZoneH + safeZoneY";
        w = "0.0665527 * safeZoneW";
        h = "0.110006 * safeZoneH";
        action = "playSound 'TFAR_rotatorPush'; [TF_lr_dialog_radio,((TF_lr_dialog_radio call TFAR_fnc_getCurrentLrStereo) + 1) mod 3] call TFAR_fnc_setLrStereo; [TF_lr_dialog_radio] call TFAR_fnc_showRadioVolume;";
        tooltip = "Stereo settings";
    };
    class additional: HiddenRotator
    {
        idc = 12345;
        x = "0.103008 * safeZoneW + safeZoneX";
        y = "0.434185 * safeZoneH + safeZoneY";
        w = "0.0374025 * safeZoneW";
        h = "0.0700156 * safeZoneH";
        tooltip = "Set additional channel";
        action = "playSound 'TFAR_rotatorPush';[TF_lr_dialog_radio,TF_lr_dialog_radio call TFAR_fnc_getLrChannel] call TFAR_fnc_setAdditionalLrChannel;call TFAR_fnc_updateLRDialogToChannel;[TF_lr_dialog_radio, true] call TFAR_fnc_showRadioInfo;";
    };
    class speakers: HiddenFlip
    {
        idc = 123456;
        x = "0.27633 * safeZoneW + safeZoneX";
        y = "0.630886 * safeZoneH + safeZoneY";
        w = "0.0293761 * safeZoneW";
        h = "0.0406957 * safeZoneH";
        tooltip = "Speakers";
        action = "TF_lr_dialog_radio call TFAR_fnc_setLrSpeakers;[TF_lr_dialog_radio] call TFAR_fnc_showRadioSpeakers;";
    };
};