class ACEGVAR(medical_treatment,actions) {
    class BasicBandage {
        treatmentTime = QUOTE(call ACEFUNC(medical_treatment,getBandageTime));
        medicRequired = 0;
    };

    class ApplyTourniquet: BasicBandage {
        treatmentTime = 2.5;
        medicRequired = 0;
    };
    class RemoveTourniquet: ApplyTourniquet {
        treatmentTime = 1.5;
        medicRequired = 0;
    };

    class Splint: BasicBandage {
        treatmentTime = 5;
        medicRequired = 0;
    };
    class Morphine {
        medicRequired = 2;
    };

    class BloodIV: BasicBandage {
        treatmentTime = 5;
    };
    class PackingBandage {
        medicRequired = 1;
    };
    class ElasticBandage {
        medicRequired = 1;
    };
    class QuikClot {
        medicRequired = 1;
    };
    class CheckBloodPressure {
        medicRequired = 1;
    };
};
