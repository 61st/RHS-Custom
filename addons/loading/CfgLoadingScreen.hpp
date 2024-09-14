#define LOADING_SCREEN_CLASS(className,authorName) \
    class className { \
        author = QUOTE(authorName); \
        path = QPATHTOF(ui\##className##.paa); \
        class Noise { \
            text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa"; \
        }; \
    }

class GVAR(CfgLoadingScreen) {
    class Backgrounds {
        LOADING_SCREEN_CLASS(clearingoutHD,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(debriefHD,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(firefightHD,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(HALOHD,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(IgotyouHD,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(mainroad,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(nightflightHD,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(planepose,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(recoveryHD,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(stackupHD,61st Mechanized Infantry Battalion);
        LOADING_SCREEN_CLASS(WardaddyHD,61st Mechanized Infantry Battalion);
    };
};
