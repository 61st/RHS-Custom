class CfgPatches {
  class aceax_rhs_compat {
    units[] = {};
    weapons[] = {};
    requiredVersion = "1.0";
    skipWhenMissingDependencies = 1;
    requiredAddons[] = {
      "lxim_main",
      "cba_main",
      "rhs_main_loadorder",
      "rhsgref_main_loadorder",
      "rhssaf_main_loadorder",
      "rhsusf_main_loadorder",
      "aceax_gearinfo"
      };
    author = "Pet Mudstone";
  };
};

#include "XtdGearModels.hpp"

#include "XtdGearInfos.hpp"
