class RscText;
class RscTitle: RscText {};
class RscShortcutButton;
class RscButtonMenu: RscShortcutButton {};
class RscButtonMenuCancel: RscButtonMenu {};
class RscButtonMenuOK: RscButtonMenu {};
class RscControlsGroup;
class RscListBox;
class RscListNBox;
class RscCheckBox;
class RscCombo;
class RscEdit;
class RscEditMulti: RscEdit {};
class RscPicture;
class RscToolbox;
class RscStructuredText;
class RscControlsTable;
class RscMapControl;
class ScrollBar;


class GVAR(RscButtonMenu): RscButtonMenu {
    style = "0x02 + 0x0C";
    font = "RobotoCondensed";
    sizeEx = QUOTE(lxim_ADMINMENU_STD_SIZEX_L);
    size = "(((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) * 0.9)";
    h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
};

class GVAR(RscText): RscText {
    sizeEx = QUOTE(lxim_ADMINMENU_STD_SIZEX);
};

class GVAR(RscTextLarge): RscText {
    sizeEx = QUOTE(lxim_ADMINMENU_STD_SIZEX_L);
};

class GVAR(RscSpectatorControlTableText): RscText {
    sizeEx = QUOTE(lxim_ADMINMENU_STD_SIZEX);
    h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
    w = "(6/10) * lxim_ADMINMENU_RESP_W_COL1";
    x = 0;
    y = 0;
};

class GVAR(RscTextMultiline): GVAR(RscText) {
    style = "0x00 + 0x10 + 0x0200";
    lineSpacing = 1;
};

class GVAR(RscEditMultiCode): RscEditMulti {
    autocomplete = "scripting";
};

class GVAR(RscCombo): RscCombo {
    font = "RobotoCondensed";
    sizeEx = QUOTE(lxim_ADMINMENU_STD_SIZEX);
};

class GVAR(RscTextIcon): RscText {
    style = "48 + 2048";
    type = 0;
};

class GVAR(RscListBox): RscListBox {
    font = "RobotoCondensed";
    sizeEx = QUOTE(lxim_ADMINMENU_STD_SIZEX);
};

class GVAR(RscListNBox): RscListNBox {
    font = "RobotoCondensed";
    sizeEx = QUOTE(lxim_ADMINMENU_STD_SIZEX);
};

class ADDON
{
    idd = IDD_lxim_ADMINMENU;
    movingEnable = 0;
    enableDisplay = 1;
    enableSimulation = 1;

    onLoad = QUOTE(_this call FUNC(onLoad););
    onUnload = QUOTE(_this call FUNC(onUnload););
    class Controls
    {
        class Title: RscTitle
        {
            idc = -1;
            text = "61st Mechanized Infantry Battalion Admin Menu";
            style = 0;
            colorBackground[] = {0, 0, 0, 0};
            x = "1 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            y = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            w = "15 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
            h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
        };

        class TitleFPS: Title
        {
            idc = IDC_lxim_ADMINMENU_FPS;
            text = "";
            style = 1;
            x = "16 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            w = "23 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
        };


        // Buttons for Tabs
        class TabDashboard: RscButtonMenu
        {
            idc = IDC_lxim_ADMINMENU_DASH;
            text = "Dashboard";
            tooltip = "";
            onButtonClick = QUOTE([ARR_2(ctrlParent param [0],IDC_lxim_ADMINMENU_G_DASH)] call FUNC(selectTab));
            colorBackground[] = {0, 0, 0, 0};
            x = "1 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            y = "2.1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            w = "5.8 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
            h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
        };
        class TabPlayerManagement: TabDashboard
        {
            idc = IDC_lxim_ADMINMENU_PMAN;
            text = "Player Management";
            tooltip = "Perform actions on players";
            onButtonClick = QUOTE([ARR_2(ctrlParent param [0],IDC_lxim_ADMINMENU_G_PMAN)] call FUNC(selectTab));
            x = "6.9 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            w = "9 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
        };
        // class TabRespawnPlayers: TabDashboard
        // {
        //     idc = IDC_lxim_ADMINMENU_RESP;
        //     text = "Respawn";
        //     tooltip = "Respawn dead players back in the game";
        //     onButtonClick = QUOTE([ARR_2(ctrlParent param [0],IDC_lxim_ADMINMENU_G_RESP)] call FUNC(selectTab));
        //     x = "16 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
        //     w = "4.8 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
        // };
        // class TabEndMission: TabDashboard
        // {
        //     idc = IDC_lxim_ADMINMENU_ENDM;
        //     text = "End Mission";
        //     tooltip = "Select and execute a mission ending";
        //     onButtonClick = QUOTE([ARR_2(ctrlParent param [0],IDC_lxim_ADMINMENU_G_ENDM)] call FUNC(selectTab));
        //     x = "20.9 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
        //     w = "5.9 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
        // };
        class TabMessageLog: TabDashboard
        {
            idc = IDC_lxim_ADMINMENU_MSGS;
            text = "Logs";
            tooltip = "Status and debug messages from 61st Mechanized Infantry Battalion components";
            onButtonClick = QUOTE([ARR_2(ctrlParent param [0],IDC_lxim_ADMINMENU_G_MSGS)] call FUNC(selectTab));
            // x = "26.9 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            // w = "3 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
            x = "16 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            w = "4.8 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
        };

        // Groups for Tabs
        class GroupBase: RscControlsGroup
        {
            x = "1.1 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            y = "3.3 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            w = "0";
            h = "0";
            class Controls {};
        };

        class GroupDashboard: GroupBase
        {
            idc = IDC_lxim_ADMINMENU_G_DASH;
            w =  QUOTE(lxim_GROUPBASE_W);
            h = QUOTE(lxim_GROUPBASE_H);
            #include "dashboard.hpp"
        };

        class GroupPlayerManagement: GroupBase
        {
            idc = IDC_lxim_ADMINMENU_G_PMAN;
            w =  QUOTE(lxim_GROUPBASE_W);
            h = QUOTE(lxim_GROUPBASE_H);
            #include "playerManagement.hpp"
        };

        class GroupRespawn: GroupBase
        {
            idc = IDC_lxim_ADMINMENU_G_RESP;
            w =  QUOTE(lxim_GROUPBASE_W);
            h = QUOTE(lxim_GROUPBASE_H);
            #include "respawn.hpp"
        };

        class GroupEndMission: GroupBase
        {
            idc = IDC_lxim_ADMINMENU_G_ENDM;
            w =  QUOTE(lxim_GROUPBASE_W);
            h = QUOTE(lxim_GROUPBASE_H);
            #include "endMission.hpp"
        };

        class GroupMessageLog: GroupBase
        {
            idc = IDC_lxim_ADMINMENU_G_MSGS;
            w =  QUOTE(lxim_GROUPBASE_W);
            h = QUOTE(lxim_GROUPBASE_H);
            #include "messageLog.hpp"
        };

        // Utility Tab
        class UtilityTitleBackground: RscText
        {
            idc = IDC_lxim_ADMINMENU_UTIL_TBACK;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
            x = "1 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            y = "3.2 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            w = "38 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
            h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
        };
        class UtilityTitle: RscTitle
        {
            idc = IDC_lxim_ADMINMENU_UTIL_TITLE;
            text = "Utility Title";
            style = 0;
            colorBackground[] = {0, 0, 0, 0};
            x = "1 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            y = "3.2 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            w = "38 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
            h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
        };
        class UtilityGroup: GroupBase
        {
            idc = IDC_lxim_ADMINMENU_G_UTIL;
            y = "4.3 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            w = "37.8 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
            h = "19.6 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
        };
    };

    class ControlsBackground
    {
        class TitleBackground: RscText
        {
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
            x = "1 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            y = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            w = "38 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
            h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
        };
        class TabsBackgroundLeft: TitleBackground
        {
            colorBackground[] = {0, 0, 0, 1};
            y = "2.1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
        };
        class MainBackground: TitleBackground
        {
            colorBackground[] = {0, 0, 0, 0.7};
            y = "3.2 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            h = "20.8 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
        };
    };
};

#include "modal.hpp"



class GVAR(respawnMapDialog) {
    idd = IDC_lxim_ADMINMENU_RESP_MAP_DISPLAY;
    movingEnable = 0;
    class controlsBackground {
    };
    class objects {
    };
    class controls {
        class FullRespawnMap : RscMapControl
        {
            idc = IDC_lxim_ADMINMENU_RESP_MAP_CONTROL;
            type = 100;
            x = QUOTE(0 * safeZoneW + safeZoneX);
            y = QUOTE(0 * safeZoneH + safeZoneY);
            w = QUOTE(1 * safeZoneW);
            h = QUOTE(1 * safeZoneH);
            onDraw = QUOTE(_this call FUNC(respawn_mapDrawIcons));
            onSetFocus = QUOTE(_this spawn FUNC(respawn_mapLoaded)); //"['respawnMapLoaded'] spawn lxim_respawn_fnc_handleRespawnUI";
            onMouseButtonDown = QUOTE(_this spawn FUNC(respawn_mapClick)); //"['respawnMap_onMouseButtonDown',_this] spawn lxim_respawn_fnc_handleRespawnUI";
            onKeyUp = QUOTE(_this spawn FUNC(respawn_mapKeyUp)); //"['respawnMap_keyUp',_this] spawn lxim_respawn_fnc_handleRespawnUI";
        };
    };
};


class GVAR(adminEyeDialog) {
    idd = IDC_lxim_ADMINMENU_ADME_MAP_DISPLAY;
    movingEnable = 0;
    class controlsBackground {
    };
    class objects {
    };
    class controls {
        class FullRespawnMap : RscMapControl
        {
            idc = IDC_lxim_ADMINMENU_ADME_MAP_CONTROL;
            type = 100;
            x = QUOTE(0 * safeZoneW + safeZoneX);
            y = QUOTE(0 * safeZoneH + safeZoneY);
            w = QUOTE(1 * safeZoneW);
            h = QUOTE(1 * safeZoneH);
            onDraw = QUOTE(_this call FUNC(adminEye_draw));
            onMouseButtonDown = QUOTE(_this spawn FUNC(adminEye_onClick));
            onSetFocus = QUOTE(_this spawn FUNC(adminEye_onLoad));
            onKeyUp = QUOTE(_this spawn FUNC(adminEye_onKeyPress));
        };
    };
};


class GVAR(spectatorControlUnitDialog) {
    idd = -1;
    movingEnable = 0;
    class Controls {};
    class ControlsBackground {
        class Title: RscTitle {
            idc = -1;
            text = "Select Unit in Vehicle";
            x = "1 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            y = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            w = "19 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
            h = "1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
            shadow = 1;
            style = 0;
        };
        class Background: RscText {
            onLoad = QUOTE(_this call FUNC(remoteControl_dialog));
            x = "1 * (((safeZoneW / safeZoneH) min 1.2) / 40) + (safeZoneX + (safeZoneW - ((safeZoneW / safeZoneH) min 1.2))/2)";
            y = "2.1 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25) + (safeZoneY + (safeZoneH - (((safeZoneW / safeZoneH) min 1.2) / 1.2))/2)";
            w = "19 * (((safeZoneW / safeZoneH) min 1.2) / 40)";
            h = "16 * ((((safeZoneW / safeZoneH) min 1.2) / 1.2) / 25)";
            colorBackground[] = {0,0,0,0.7};
        };
    };
};
