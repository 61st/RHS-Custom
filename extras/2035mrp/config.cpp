//配置模组的大致信息
class CfgPatches
{
    class 2035_MRP
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1;
        requiredAddons[] = {};
    };
};

//除背包外的所有装备均属于Weapons类
class cfgWeapons
{
    //此处需首先定义列举所拓展装备的基础类
    class UniformItem;
    class Uniform_Base;
    class V_PlateCarrier1_rgr;
    class VestItem;
    class H_HelmetB;
    class HeadgearItem;
    class NVGoggles;
    
    //配置头盔范例，未注明部分照抄或灵性发挥
    
    //无盔罩Highcut----------------------------------------------------------------------------------------------------------
    
    //无盔罩Highcut基础类
    class opscore_highcut_base: H_HelmetB
    {
        author = "Kiyo";
        scope = 1;
        displayName = "HighCut Helmet Base";
        picture = "\2035mrp\UI\Helmet\ui_opscore_sample.paa";
        model = "\2035mrp\Model\Helmet\opscore_HighCut_1.p3d";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_blk_co.paa"
        };
        //注：上方未列出的贴图均已直接写入p3d (一般为通用项)，需使用blender更改
        descriptionShort="Armor Level III";
        class ItemInfo: HeadgearItem
        {
            uniformModel = "\2035mrp\Model\Helmet\opscore_HighCut_1.p3d";
            mass = 50;
            hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
            //基础类此处须再次定义此项(子类不需要)，否则子类无法正常加载变种贴图
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };
    
    // 黑色
    class opscore_highcut_blk_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Black | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_blk_US.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_blk_co.paa"
        };
    };
    
    // 橄榄绿
    class opscore_highcut_od_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Olive Drab | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_od_US.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_od_co.paa"
        };
    };
    
    // 游骑兵绿
    class opscore_highcut_rgr_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Ranger Green | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_rgr_US.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_rgr_co.paa"
        };
    };
    
    // 狼棕色
    class opscore_highcut_coy_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Coyote | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_coy_US.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_coy_co.paa"
        };
    };
    
    // 沙色
    class opscore_highcut_tan_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Tan | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_tan_US.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_tan_co.paa"
        };
    };
    
    // 蟒纹沙色
    class opscore_highcut_tan_snake_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Tan & SnakeSkin | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_tan_snake_US.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_tan_snake_co.paa"
        };
    };
    
    // 蟒纹狼棕
    class opscore_highcut_coy_snake_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Coyote & SnakeSkin | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_coy_snake_US.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_coy_snake_co.paa"
        };
    };
    
    // 蟒纹橄榄绿
    class opscore_highcut_od_snake_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Olive Drab & SnakeSkin | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_od_snake_US.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_od_snake_co.paa"
        };
    };
    
    // 蟒纹游骑兵绿
    class opscore_highcut_rgr_snake_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Ranger Green & SnakeSkin | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_rgr_snake_US.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_rgr_snake_co.paa"
        };
    };
        
    // 水转印AOR-1
    class opscore_highcut_aor1_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (AOR-1 | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_aor1_US.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_aor1_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_aor1_co.paa"
        };
    };
    
    // 水转印Multicam
    class opscore_highcut_mc_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Multicam | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_mc_US.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_mc_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_mc_co.paa"
        };
    };
    
    // 水转印AOR-2
    class opscore_highcut_aor2_US: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (AOR-2 | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_aor2_US.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_aor2_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_aor2_co.paa"
        };
    };
    
    //裸盔基础类
    class opscore_highcut_plain_base: H_HelmetB
    {
        author = "Kiyo";
        scope = 1;
        displayName = "Plain HighCut Helmet Base";
        picture = "\2035mrp\UI\Helmet\ui_opscore_sample.paa";
        model = "\2035mrp\Model\Helmet\opscore_HighCut_5.p3d";
        hiddenSelections[] = {"Camo1","headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_blk_CO.paa"
        };
        descriptionShort="Armor Level III";
        class ItemInfo: HeadgearItem
        {
            uniformModel = "\2035mrp\Model\Helmet\opscore_HighCut_5.p3d";
            mass = 50;
            hiddenSelections[] = {"Camo1","headset"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };
    
    // 黑色 裸盔
    class opscore_highcut_blk_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Black)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_blk_plain.paa";
        hiddenSelections[] = {"Camo1","headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_blk_CO.paa"
        };
    };
    
    // 沙色 裸盔
    class opscore_highcut_tan_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Tan)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_tan_plain.paa";
        hiddenSelections[] = {"Camo1","headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa"
        };
    };
    
    // 沙色蟒纹 裸盔
    class opscore_highcut_tan_snake_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Tan | SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_tan_snake_plain.paa";
        hiddenSelections[] = {"Camo1","headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa"
        };
    };
    
    // 狼棕色 裸盔
    class opscore_highcut_coy_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Coyote)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_coy_plain.paa";
        hiddenSelections[] = {"Camo1","headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa"
        };
    };
    
    // 狼棕色 蟒纹 裸盔
    class opscore_highcut_coy_snake_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Coyote | SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_coy_snake_plain.paa";
        hiddenSelections[] = {"Camo1","headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa"
        };
    };
    
    // 游骑兵绿 裸盔
    class opscore_highcut_rgr_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Ranger Green)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_rgr_plain.paa";
        hiddenSelections[] = {"Camo1","headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa"
        };
    };
    
    // 游骑兵绿 蟒纹 裸盔
    class opscore_highcut_rgr_snake_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Ranger Green | SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_rgr_snake_plain.paa";
        hiddenSelections[] = {"Camo1","headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa"
        };
    };
    
    // 橄榄绿 裸盔
    class opscore_highcut_od_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Olive Drab)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_od_plain.paa";
        hiddenSelections[] = {"Camo1","headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa"
        };
    };
    
    // 橄榄绿 蟒纹 裸盔
    class opscore_highcut_od_snake_plain: opscore_highcut_plain_base
    {
        scope = 2;
        displayName = "Plain HighCut Helmet (Olive Drab | SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_od_snake_plain.paa";
        hiddenSelections[] = {"Camo1","headset"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_snake_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa"
        };
    };
    
    // 有盔罩Highcut----------------------------------------------------------------------------------------------------------
    
    // 有盔罩Highcut基础类
    class opscore_highcut_cover_base: H_HelmetB
    {
        author = "Kiyo";
        scope = 1;
        displayName = "Covered HighCut Helmet Base";
        picture = "\2035mrp\UI\Helmet\ui_opscore_sample.paa";
        model = "\2035mrp\Model\Helmet\opscore_HighCut_2.p3d";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
        descriptionShort="Armor Level III";
        class ItemInfo: HeadgearItem
        {
            uniformModel = "\2035mrp\Model\Helmet\opscore_HighCut_2.p3d";
            mass = 50;
            hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };
    
    // 黑色盔罩
    class opscore_highcut_cover_blk_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Black | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_blk_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
    };
    
    // 灰色盔罩
    class opscore_highcut_cover_gry_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Grey | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_gry_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_gry_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_gry_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_fg_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
    };
    
    // Multicam Black迷彩盔罩
    class opscore_highcut_cover_mcbk_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Black | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mcbk_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mcbk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mcbk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
    };
    
    // 游骑兵绿盔罩
    class opscore_highcut_cover_rgr_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Ranger Green | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_rgr_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa"
        };
    };
    
    // 橄榄绿盔罩
    class opscore_highcut_cover_od_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Olive Drab | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_od_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa"
        };
    };
    
    // AOR-2迷彩盔罩
    class opscore_highcut_cover_aor2_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (AOR-2 | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_aor2_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_aor2_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_aor2_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa"
        };
    };
    
    // CTRG-Tropic迷彩盔罩(美国)
    class opscore_highcut_cover_CTRGtropic_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (CTRG Tropic | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_CTRGtropic_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_CTRGtropic_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_CTRGtropic_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa"
        };
    };
    
    // CTRG-Tropic迷彩盔罩(英国)
    class opscore_highcut_cover_CTRGtropic_UK: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (CTRG Tropic | UK)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_CTRGtropic_UK.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_CTRGtropic_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_CTRGtropic_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_UK_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa"
        };
    };
    
    // 2035版Multicam Woodland迷彩盔罩
    class opscore_highcut_cover_mcwdl_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Woodland | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mcwdl_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mcwdl_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mcwdl_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa"
        };
    };
    
    // Multicam Tropic迷彩盔罩
    class opscore_highcut_cover_mctp_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Tropic | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mctp_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mctp_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mctp_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa"
        };
    };
    
    // DPM迷彩盔罩
    class opscore_highcut_cover_DPM_UK: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (DPM | UK)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_DPM_UK.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_DPM_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_DPM_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_UK_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa"
        };
    };
    
    // 狼棕色盔罩
    class opscore_highcut_cover_coy_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Coyote | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_coy_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_coy_co.paa"
        };
    };
    
    // 沙色盔罩
    class opscore_highcut_cover_tan_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Tan | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_tan_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // CTRG-Arid迷彩盔罩(美国)
    class opscore_highcut_cover_CTRGarid_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (CTRG Arid | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_CTRGarid_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_CTRGarid_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_CTRGarid_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_fg_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // CTRG-Arid迷彩盔罩(英国)
    class opscore_highcut_cover_CTRGarid_UK: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (CTRG Arid | UK)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_CTRGarid_UK.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_CTRGarid_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_CTRGarid_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_UK_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_fg_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // 夜间沙漠迷彩盔罩
    class opscore_highcut_cover_NightDesert_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Night Desert | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_NightDesert_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_NightDesert_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_NightDesert_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_fg_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // AOR-1迷彩盔罩
    class opscore_highcut_cover_aor1_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (AOR-1 | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_aor1_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_aor1_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_aor1_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // Multicam Arid迷彩盔罩
    class opscore_highcut_cover_mcarid_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Arid | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mcarid_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mcarid_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mcarid_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // MTP迷彩盔罩
    class opscore_highcut_cover_mtp_UK: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (MTP | UK)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mtp_UK.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mtp_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mtp_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_UK_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // Multicam迷彩盔罩
    class opscore_highcut_cover_mc_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mc_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mc_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mc_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // M81四丛迷彩盔罩
    class opscore_highcut_cover_m81_US: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (M81 Woodland | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_m81_US.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_m81_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_m81_co.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // 有盔罩Highcut基础类 (INDEP阵营)
    class opscore_highcut_cover_alt_base: H_HelmetB
    {
        author = "Kiyo";
        scope = 1;
        displayName = "Covered HighCut Helmet Base (alt)";
        picture = "\2035mrp\UI\Helmet\ui_opscore_sample.paa";
        model = "\2035mrp\Model\Helmet\opscore_HighCut_3.p3d";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","headset","MPLS","surefire"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\GP_pouch_aaf_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
        descriptionShort="Armor Level III";
        class ItemInfo: HeadgearItem
        {
            uniformModel = "\2035mrp\Model\Helmet\opscore_HighCut_3.p3d";
            mass = 50;
            hiddenSelections[] = {"Camo1","Camo2","Camo3","headset","MPLS","surefire"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };
    
    // AAF数码迷彩盔罩
    class opscore_highcut_cover_alt_AAF: opscore_highcut_cover_alt_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Digital | AAF)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_alt_AAF.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","headset","MPLS","surefire"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_aaf_co.paa",
            "\2035mrp\Texture\Helmet\attachment\GP_pouch_aaf_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\surefire_blk_co.paa"
        };
    };
    
    // LDF几何迷彩盔罩
    class opscore_highcut_cover_alt_LDF: opscore_highcut_cover_alt_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Geometric | LDF)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_alt_LDF.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","headset","MPLS","surefire"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_ldf_co.paa",
            "\2035mrp\Texture\Helmet\attachment\GP_pouch_ldf_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\surefire_rgr_co.paa"
        };
    };
    
    // Multicam迷彩盔罩 (INDEP)
    class opscore_highcut_cover_alt_mc: opscore_highcut_cover_alt_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Black & Multicam Cover)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_alt_mc.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","headset","MPLS","surefire"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mc_co.paa",
            "\2035mrp\Texture\Helmet\attachment\GP_pouch_mc_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\surefire_blk_co.paa"
        };
    };
    
    // CTRG无盔罩隐形Highcut---------------------------------------------------------------------------------------------
    
    // 无盔罩CTRG-Arid(美国)
    class opscore_highcut_CTRGarid_US_TI: H_HelmetB
    {
        author = "Kiyo";
        scope = 2;
        displayName = "Stealth HighCut Helmet (CTRG Arid | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_CTRGarid_US_TI.paa";
        model = "\2035mrp\Model\Helmet\opscore_HighCut_4.p3d";
        hiddenSelections[] = {"Camo1","Camo3","headset","flag_left","surefire"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_CTRGarid_TI_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_CTRGarid_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_fg_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_co.paa",
            "\2035mrp\Texture\Helmet\attachment\surefire_tan_co.paa"
        };
        descriptionShort="Armor Level III";
        class ItemInfo: HeadgearItem
        {
            uniformModel = "\2035mrp\Model\Helmet\opscore_HighCut_4.p3d";
            mass = 50;
            hiddenSelections[] = {"Camo1","Camo3","headset","flag_left","surefire"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };
    
    // 无盔罩CTRG-Arid(英国)
    class opscore_highcut_CTRGarid_UK_TI: H_HelmetB
    {
        author = "Kiyo";
        scope = 2;
        displayName = "Stealth HighCut Helmet (CTRG Arid | UK)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_CTRGarid_UK_TI.paa";
        model = "\2035mrp\Model\Helmet\opscore_HighCut_4.p3d";
        hiddenSelections[] = {"Camo1","Camo3","headset","flag_left","surefire"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_CTRGarid_TI_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_CTRGarid_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_fg_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_UK_co.paa",
            "\2035mrp\Texture\Helmet\attachment\surefire_tan_co.paa"
        };
        descriptionShort="Armor Level III";
        class ItemInfo: HeadgearItem
        {
            uniformModel = "\2035mrp\Model\Helmet\opscore_HighCut_4.p3d";
            mass = 50;
            hiddenSelections[] = {"Camo1","Camo3","headset","flag_left","surefire"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };
    
    // 无盔罩CTRG-Tropic(美国)
    class opscore_highcut_CTRGtropic_US_TI: H_HelmetB
    {
        author = "Kiyo";
        scope = 2;
        displayName = "Stealth HighCut Helmet (CTRG Tropic | US)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_CTRGtropic_US_TI.paa";
        model = "\2035mrp\Model\Helmet\opscore_HighCut_4.p3d";
        hiddenSelections[] = {"Camo1","Camo3","headset","flag_left","surefire"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_CTRGtropic_TI_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_CTRGtropic_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_US_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\surefire_rgr_co.paa"
        };
        descriptionShort="Armor Level III";
        class ItemInfo: HeadgearItem
        {
            uniformModel = "\2035mrp\Model\Helmet\opscore_HighCut_4.p3d";
            mass = 50;
            hiddenSelections[] = {"Camo1","Camo3","headset","flag_left","surefire"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };
    
    // 无盔罩CTRG-Tropic(英国)
    class opscore_highcut_CTRGtropic_UK_TI: H_HelmetB
    {
        author = "Kiyo";
        scope = 2;
        displayName = "Stealth HighCut Helmet (CTRG Tropic | UK)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_CTRGtropic_UK_TI.paa";
        model = "\2035mrp\Model\Helmet\opscore_HighCut_4.p3d";
        hiddenSelections[] = {"Camo1","Camo3","headset","flag_left","surefire"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_CTRGtropic_TI_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_CTRGtropic_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\IR_Flag_UK_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\surefire_rgr_co.paa"
        };
        descriptionShort="Armor Level III";
        class ItemInfo: HeadgearItem
        {
            uniformModel = "\2035mrp\Model\Helmet\opscore_HighCut_4.p3d";
            mass = 50;
            hiddenSelections[] = {"Camo1","Camo3","headset","flag_left","surefire"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };
    
    // 无国旗全种类Highcut------------------------------------------------------------------------------------------------------
    
    // 黑色
    class opscore_highcut_blk: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Black)";
        picture = "\2035mrp\UI\Helmet\ui_opscore_sample.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_blk_co.paa"
        };
    };
    
    // 橄榄绿
    class opscore_highcut_od: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Olive Drab)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_od.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_od_co.paa"
        };
    };
    
    // 游骑兵绿
    class opscore_highcut_rgr: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Ranger Green)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_rgr.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_rgr_co.paa"
        };
    };
    
    // 狼棕色
    class opscore_highcut_coy: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Coyote)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_coy.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_coy_co.paa"
        };
    };
    
    // 沙色
    class opscore_highcut_tan: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Tan)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_tan.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_tan_co.paa"
        };
    };
    
    // 蟒纹沙色
    class opscore_highcut_tan_snake: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Tan & SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_tan_snake.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_snake_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_tan_snake_co.paa"
        };
    };
    
    // 蟒纹狼棕
    class opscore_highcut_coy_snake: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Coyote & SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_coy_snake.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_snake_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_coy_snake_co.paa"
        };
    };
    
    // 蟒纹橄榄绿
    class opscore_highcut_od_snake: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Olive Drab & SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_od_snake.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_snake_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_od_snake_co.paa"
        };
    };
    
    // 蟒纹游骑兵绿
    class opscore_highcut_rgr_snake: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Ranger Green & SnakeSkin)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_rgr_snake.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_snake_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_rgr_snake_co.paa"
        };
    };
        
    // 水转印AOR-1
    class opscore_highcut_aor1: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (AOR-1)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_aor1.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_aor1_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_aor1_co.paa"
        };
    };
    
    // 水转印Multicam
    class opscore_highcut_mc: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (Multicam)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_mc.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_mc_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_mc_co.paa"
        };
    };
    
    // 水转印AOR-2
    class opscore_highcut_aor2: opscore_highcut_base
    {
        scope = 2;
        displayName = "HighCut Helmet (AOR-2)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_aor2.paa";
        hiddenSelections[] = {"Camo1","flag_left","headset","MPLS","battery"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_aor2_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\pvs31_bat_aor2_co.paa"
        };
    };
    
    // 黑色盔罩
    class opscore_highcut_cover_blk: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Black)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_blk.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_blk_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
    };
    
    // 灰色盔罩
    class opscore_highcut_cover_gry: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Grey)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_gry.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_gry_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_gry_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_fg_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
    };
    
    // Multicam Black迷彩盔罩
    class opscore_highcut_cover_mcbk: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Black)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mcbk.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_blk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mcbk_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mcbk_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_blk_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_blk_co.paa"
        };
    };
    
    // 游骑兵绿盔罩
    class opscore_highcut_cover_rgr: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Ranger Green)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_rgr.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_rgr_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa"
        };
    };
    
    // 橄榄绿盔罩
    class opscore_highcut_cover_od: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Olive Drab)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_od.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_od_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa"
        };
    };
    
    // AOR-2迷彩盔罩
    class opscore_highcut_cover_aor2: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (AOR-2)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_aor2.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_aor2_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_aor2_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa"
        };
    };
    
    // CTRG-Tropic迷彩盔罩
    class opscore_highcut_cover_CTRGtropic: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (CTRG Tropic)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_CTRGtropic.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_CTRGtropic_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_CTRGtropic_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa"
        };
    };
    
    // 2035版Multicam Woodland迷彩盔罩
    class opscore_highcut_cover_mcwdl: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Woodland)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mcwdl.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mcwdl_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mcwdl_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa"
        };
    };
    
    // Multicam Tropic迷彩盔罩
    class opscore_highcut_cover_mctp: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Tropic)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mctp.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_od_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mctp_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mctp_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_od_co.paa"
        };
    };
    
    // DPM迷彩盔罩
    class opscore_highcut_cover_DPM: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (DPM)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_DPM.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_rgr_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_DPM_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_DPM_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_rgr_co.paa"
        };
    };
    
    // 狼棕色盔罩
    class opscore_highcut_cover_coy: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Coyote)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_coy.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_coy_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_coy_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_coy_co.paa"
        };
    };
    
    // 沙色盔罩
    class opscore_highcut_cover_tan: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Tan)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_tan.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_tan_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // CTRG-Arid迷彩盔罩
    class opscore_highcut_cover_CTRGarid: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (CTRG Arid)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_CTRGarid.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_CTRGarid_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_CTRGarid_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_fg_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // 夜间沙漠迷彩盔罩
    class opscore_highcut_cover_NightDesert: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Night Desert)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_NightDesert.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_NightDesert_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_NightDesert_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_fg_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // AOR-1迷彩盔罩
    class opscore_highcut_cover_aor1: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (AOR-1)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_aor1.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_aor1_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_aor1_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // Multicam Arid迷彩盔罩
    class opscore_highcut_cover_mcarid: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam Arid)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mcarid.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mcarid_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mcarid_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // MTP迷彩盔罩
    class opscore_highcut_cover_mtp: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (MTP)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mtp.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mtp_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mtp_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // Multicam迷彩盔罩
    class opscore_highcut_cover_mc: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (Multicam)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_mc.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_mc_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_mc_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_coy_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // M81四丛迷彩盔罩
    class opscore_highcut_cover_m81: opscore_highcut_cover_base
    {
        scope = 2;
        displayName = "Covered HighCut Helmet (M81 Woodland)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_cover_m81.paa";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","flag_left","headset","MPLS"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_tan_co.paa",
            "\2035mrp\Texture\Helmet\attachment\opscore_cover_m81_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_m81_co.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\c3_velcro_od_CO.paa",
            "\2035mrp\Texture\Helmet\attachment\princeton_tan_co.paa"
        };
    };
    
    // 无盔罩CTRG-Arid
    class opscore_highcut_CTRGarid_TI: H_HelmetB
    {
        author = "Kiyo";
        scope = 2;
        displayName = "Stealth HighCut Helmet (CTRG Arid)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_CTRGarid_TI.paa";
        model = "\2035mrp\Model\Helmet\opscore_HighCut_4.p3d";
        hiddenSelections[] = {"Camo1","Camo3","headset","flag_left","surefire"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_CTRGarid_TI_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_CTRGarid_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_fg_CO.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\surefire_tan_co.paa"
        };
        descriptionShort="Armor Level III";
        class ItemInfo: HeadgearItem
        {
            uniformModel = "\2035mrp\Model\Helmet\opscore_HighCut_4.p3d";
            mass = 50;
            hiddenSelections[] = {"Camo1","Camo3","headset","flag_left","surefire"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };
    
    // 无盔罩CTRG-Tropic
    class opscore_highcut_CTRGtropic_TI: H_HelmetB
    {
        author = "Kiyo";
        scope = 2;
        displayName = "Stealth HighCut Helmet (CTRG Tropic)";
        picture = "\2035mrp\UI\Helmet\opscore_highcut_CTRGtropic_TI.paa";
        model = "\2035mrp\Model\Helmet\opscore_HighCut_4.p3d";
        hiddenSelections[] = {"Camo1","Camo3","headset","flag_left","surefire"};
        hiddenSelectionsTextures[] = {
            "\2035mrp\Texture\Helmet\opscore_highcut_CTRGtropic_TI_co.paa",
            "\2035mrp\Texture\Helmet\attachment\BatteryPack_CTRGtropic_co.paa",
            "\2035mrp\Texture\Helmet\attachment\c3_od_CO.paa",
            "",
            "\2035mrp\Texture\Helmet\attachment\surefire_rgr_co.paa"
        };
        descriptionShort="Armor Level III";
        class ItemInfo: HeadgearItem
        {
            uniformModel = "\2035mrp\Model\Helmet\opscore_HighCut_4.p3d";
            mass = 50;
            hiddenSelections[] = {"Camo1","Camo3","headset","flag_left","surefire"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };
};