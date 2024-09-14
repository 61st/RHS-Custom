#include "..\script_component.hpp"
/*
 * Author: CPL.Brostrom.A -- Tinkered with by YonV tinkered with by YonV
 * This function add diary records.
 *
 * Example:
 * call LXIR_fnc_init_diary
 *
 * Public: No
 */

waitUntil {!isNull player};
waitUntil {player == player};
waitUntil {profileName != ""};


// Add New Topic (LXIR)
if !(player diarySubjectExists "mission") then {
    player createDiarySubject ["mission","Mission"];

    // Load diary records (NOTE! The load order is reversed. So the top will be at the bottom after load.)
    // call FUNC(Doc_Radio);
    // call FUNC(Doc_Info);
};

// Add New Topic (Checklists)
if !(player diarySubjectExists "Chklists") then {
    player createDiarySubject ["Chklists","Checklists"];

    // Load diary records (NOTE! The load order is reversed. So the top will be at the bottom after load.)
    player createDiaryRecord["Chklists",
    ["ACE & DEFREF",
        "<img image='z\lxir\addons\media\images\61\defrep.paa' width='760' />"
    ]
];

player createDiaryRecord["Chklists",
    ["SALUTE",
        "<img image='z\lxir\addons\media\images\61\salute.paa' width='760' />"
    ]
];

player createDiaryRecord["Chklists",
    ["CONTACT",
        "<img image='z\lxir\addons\media\images\61\contact.paa' width='760' />"
    ]
];

};

// Add New Topic (Radio Reports)
if !(player diarySubjectExists "radioReportsm") then {
    player createDiarySubject ["radioReportsm","Radio Reports Medical"];

    // Load diary records (NOTE! The load order is reversed. So the top will be at the bottom after load.)
    player createDiaryRecord["radioReportsm",
    ["CASEVAC REQUEST",
        "<img image='z\lxir\addons\media\images\61\casevac.paa' width='760' />"
    ]
];

player createDiaryRecord["radioReportsm",
    ["MIST REPORT",
        "<img image='z\lxir\addons\media\images\61\mist.paa' width='760' />"
    ]
];
};

// Add New Topic (Radio Reports)
if !(player diarySubjectExists "radioReportsc") then {
    player createDiarySubject ["radioReportsc","Radio Reports CAS"];

    // Load diary records (NOTE! The load order is reversed. So the top will be at the bottom after load.)
player createDiaryRecord["radioReportsc",
    ["AirFrame Check-in",
        "<img image='z\lxir\addons\media\images\61\airframe.paa' width='760' />"
    ]
];

player createDiaryRecord["radioReportsc",
    ["6-line CAS",
        "<img image='z\lxir\addons\media\images\61\cas.paa' width='760' />"
    ]
];

player createDiaryRecord["radioReportsc",
    ["HLZ",
        "<img image='z\lxir\addons\media\images\61\lz.paa' width='760' />"
    ]
];

player createDiaryRecord["radioReportsc",
    ["Air Drop",
        "<img image='z\lxir\addons\media\images\61\airdrop.paa' width='760' />"
    ]
];
};
// Add New Topic (medical notes)
if !(player diarySubjectExists "medguide") then {
    player createDiarySubject ["medguide","Medical Notes"];

player createDiaryRecord["medguide",
    ["Cardiac Arrest",
        "<img image='z\lxir\addons\media\images\61\cardarr.paa' width='760' />"
    ]
];
player createDiaryRecord["medguide",
    ["Bandages",
        "<img image='z\lxir\addons\media\images\61\bandage.paa' width='760' />"
    ]
];
player createDiaryRecord["medguide",
    ["Wounds",
        "<img image='z\lxir\addons\media\images\61\wounds.paa' width='760' />"
    ]
];
player createDiaryRecord["medguide",
    ["Blood Loss",
        "<img image='z\lxir\addons\media\images\61\bloodloss.paa' width='760' />"
    ]
];
player createDiaryRecord["medguide",
    ["Drugs 1",
        "<img image='z\lxir\addons\media\images\61\drug1.paa' width='760' />"
    ]
];
player createDiaryRecord["medguide",
    ["Drugs 2",
        "<img image='z\lxir\addons\media\images\61\drug2.paa' width='760' />"
    ]
];
};
// Add New Topic (JFIRE notes)
if !(player diarySubjectExists "jfireguide") then {
    player createDiarySubject ["jfireguide","JFIRE Notes"];

player createDiaryRecord["jfireguide",
    ["LZ Formations",
        "<img image='z\lxir\addons\media\images\61\lzformation.paa' width='760' />"
    ]
];
player createDiaryRecord["jfireguide",
    ["LZ Landing Points",
        "<img image='z\lxir\addons\media\images\61\landpoint.paa' width='760' />"
    ]
];
player createDiaryRecord["jfireguide",
    ["LZ Landing Marking",
        "<img image='z\lxir\addons\media\images\61\lzmark.paa' width='760' />"
    ]
];
};

// Add New Topic (sqd orbat)
if !(player diarySubjectExists "sqdorbat") then {
    player createDiarySubject ["sqdorbat","Orbat"];

player createDiaryRecord["sqdorbat",
    ["1/1 and 1/2",
        "<img image='z\lxir\addons\media\images\61\squad1-2.paa' width='760' />"
    ]
];
player createDiaryRecord["sqdorbat",
    ["Radio",
        "<img image='z\lxir\addons\media\images\61\radio.paa' width='760' />"
    ]
];
};

