class ACEGVAR(medical_treatment,actions) {
    class BasicBandage {
        treatmentTime = QUOTE(call ACEFUNC(medical_treatment,getBandageTime));
    };

    class ApplyTourniquet: BasicBandage {
        treatmentTime = 2.5;
    };
    class RemoveTourniquet: ApplyTourniquet {
        treatmentTime = 1.5;
    };

    class Splint: BasicBandage {
        treatmentTime = 5;
    };

    class Morphine;
    class Naloxone: Morphine {
        displayName = "Inject Naloxone";
        displayNameProgress = "Injecting Naloxone";
        condition = "ace_medical_treatment_advancedMedication";
        items[] = {"lxim_naloxone"};
        litter[] = {{"ACE_MedicalLitter_atropine"}};
    };

    class BloodIV: BasicBandage {
        treatmentTime = 5;
    };
};
