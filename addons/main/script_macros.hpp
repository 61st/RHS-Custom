#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\a3\ui_f\hpp\defineDIKCodes.inc"
#define DFUNC(module) TRIPLES(ADDON,fnc,module)
#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define GETPRVAR(var1,var2) (profileNamespace getVariable [ARR_2(var1,var2)])
#define SETPRVAR(var1,var2) (profileNamespace setVariable [ARR_2(var1,var2)])


// ACE3 reference macros
#define ACE_PREFIX ace
#define ACE_ADDON(module) DOUBLES(ACE_PREFIX,module)

#define ACEGVAR(module,var)         TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var)        QUOTE(ACEGVAR(module,var))

#define ACEFUNC(module,function)    TRIPLES(DOUBLES(ACE_PREFIX,module),fnc,function)
#define DACEFUNC(var1,var2) TRIPLES(DOUBLES(ACE_PREFIX,var1),fnc,var2)
#define QACEFUNC(module,function)   QUOTE(ACEFUNC(module,function))

#define ACELSTRING(module,string)   QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,module),string))
#define ACECSTRING(module,string)   QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,module),string))

// lxim macros
#define IS_MOD_LOADED(modclass)     (isClass (configFile >> "CfgPatches" >> #modclass))

// Extension macros
#define EXT "61st Mechanized Infantry Battalion_mods"
#define EXT_LOG "61st Mechanized Infantry Battalion_mods_log"

// lxim Debug macros
#include "\z\lxim\addons\main\script_debug.hpp"

// // Items
// #define ITEMS_2(var) QUOTE(var), QUOTE(var)
// #define ITEMS_3(var) QUOTE(var), QUOTE(var), QUOTE(var)
// #define ITEMS_4(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
// #define ITEMS_5(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
// #define ITEMS_6(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
// #define ITEMS_7(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
// #define ITEMS_8(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
// #define ITEMS_9(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
// #define ITEMS_10(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
// #define ITEMS_11(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
// #define ITEMS_12(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)

#define MACRO_ADDWEAPON(WEAPON,COUNT) \
    class _xx_##WEAPON { \
        weapon = #WEAPON; \
        count = COUNT; \
    }

#define MACRO_ADDITEM(ITEM,COUNT) \
    class _xx_##ITEM { \
        name = #ITEM; \
        count = COUNT; \
    }

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) \
    class _xx_##MAGAZINE { \
        magazine = #MAGAZINE; \
        count = COUNT; \
    }

#define MACRO_ITEM_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \
        scopeCurator = 2; \
        scopeArsenal=2; \
        ACE_GForceCoef = 1;     

#define PATH_TO_FUNC(func) QUOTE(MAINPREFIX\PREFIX\SUBPREFIX\COMPONENT\functions\func.sqf)

#define MAGAZINE_WELL WB_Magazines

#define FADE_LENGTH 0.25
#define FADE_ENABLED 0
#define FADE_DISABLED 0.7