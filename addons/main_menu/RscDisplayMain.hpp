
class RscDisplayMain: RscStandardDisplay {
    // delete all Spotlights added directly to the display. (only saw it in WS CDLC so far)
    delete Spotlight;
    class Controls {
        class lxirJoin : RscButton {
            idc = -1;
            text = QPATHTOF(data\menulogo.paa);
            colorBackground[] = {0,0,0,0};
            colorBackgroundActive[] = {0.5324,0.4134,0.0543,1};
            colorFocused[] = {1,1,1,1};
            colorText[] = {1,1,1,0.5};

            h = "2 * 	(pixelH * pixelGrid * 2)";
            x = "safezoneX + safezoneW - 4 *         2 *     (pixelW * pixelGrid * 2)";
            w = "4 *     (pixelW * pixelGrid * 2)";
            y = "safezoneY + 2 * 	(pixelH * pixelGrid * 2)";

            tooltip = CSTRING(lxirJoin_tooltip);
            url = CSTRING(lxirJoin_url);
            onMouseEnter = "";
            onSetFocus = "";
            onMouseExit = "";
            onKillFocus = "";

            style = 48;
        };
    };
};
