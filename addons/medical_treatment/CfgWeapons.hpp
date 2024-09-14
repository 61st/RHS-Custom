class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class ACE_fieldDressing : ACE_ItemCore {
        scope=2;
        picture="\z\lxir\addons\media\images\icon\IB.paa";
        // displayName="Israeli Bandage";
        // descriptionShort="Quickly stanches haemorrhaging from injuries";
        // descriptionUse="Quickly stanches haemorrhaging from injuries";
    };
    class ACE_quikclot : ACE_ItemCore {
        scope=2;
        displayName="Quikclot Combat Gauze";
        picture="\z\lxir\addons\media\images\icon\Quikclot.paa";
    };
    class ACE_morphine : ACE_ItemCore {
        scope=2;
        displayName="Morphine autoinjector 10mg/1mL";
        descriptionShort="Analgesic, used for moderate pain";
        descriptionUse="Analgesic, used for moderate pain";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class ACE_epinephrine : ACE_ItemCore {
        scope=2;
        displayName="Adrenaline autoinjector 1mg/1mL";
        descriptionShort="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
        descriptionUse="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class ACE_atropine;
    class lxir_naloxone: ACE_atropine {
        scope = 2;
        author = "Alablm";
        displayName = "Naloxone Autoinjector";
        descriptionShort = "Used to treat opioid overdose";
        descriptionUse = "A drug widely used to treat opioid overdoses by blocking opioid receptors";
    };
};
