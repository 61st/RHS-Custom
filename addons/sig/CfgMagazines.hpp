/*
 * Author: AUTHOR
 * Function description
 *
 * Arguments:
 * 0: Objects <ARRAY>
 * 1: All <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[bob, ted], false] call lxim_main_fnc_example
 *
 * Public: No
 */

class CfgMagazines {
    class KAR_20Rnd_Fury;
    class KAR_20Rnd_Fury_blk;
    class KAR_20Rnd_Fury_RT;
    class KAR_20Rnd_Fury_RT_blk;
    class KAR_100Rnd_Fury;
    class KAR_100Rnd_Fury_blk;
    class KAR_100Rnd_Fury_RT;
    class KAR_100Rnd_Fury_RT_blk;

    class GVAR(25Rnd_Fury): KAR_20Rnd_Fury {
        displayname="[61st] 25rnd .277 Fury";
        displaynameshort=".277";
        count=25;
        mass=16;
    };
    class GVAR(25Rnd_Fury_blk): KAR_20Rnd_Fury_blk {
        displayname="[61st] 25rnd .277 Fury (Black)";
        displaynameshort=".277";
        count=25;
        mass=16;
    };
    class GVAR(25Rnd_Fury_RT): KAR_20Rnd_Fury_RT {
        displayname="[61st] 25rnd .277 Fury (Red Tracer)";
        displaynameshort=".277 (Red Tracer)";
        count=25;
        mass=16;
    };
    class GVAR(25Rnd_Fury_RT_blk): KAR_20Rnd_Fury_RT_blk {
        displayname="[61st] 25rnd .277 Fury (Black/Red Tracer)";
        displaynameshort=".277 (Red Tracer)";
        count=25;
        mass=16;
    };

    class GVAR(150Rnd_Fury): KAR_100Rnd_Fury {
        displayname="[61st] 150rnd .277 Fury";
        displaynameshort=".277";
        count=150;
        ACE_isBelt = 1;
        mass=44;
    };
    class GVAR(150Rnd_Fury_blk): KAR_100Rnd_Fury_blk {
        displayname="[61st] 150rnd .277 Fury (Black)";
        displaynameshort=".277";
        count=150;
        ACE_isBelt = 1;
        mass=44;
    };
    class GVAR(150Rnd_Fury_RT): KAR_100Rnd_Fury_RT {
        displayname="[61st] 150rnd .277 Fury (Red Tracer)";
        displaynameshort=".277 (Red Tracer)";
        count=150;
        ACE_isBelt = 1;
        mass=44;
        tracersEvery = 5;
    };
    class GVAR(150Rnd_Fury_RT_blk): KAR_100Rnd_Fury_RT_blk {
        displaynameshort=".277 (Red Tracer)";
        displayname="[61st] 150rnd .277 Fury (Black/Red Tracer)";
        count=150;
        ACE_isBelt = 1;
        mass=44;
        tracersEvery = 5;
    };
};

