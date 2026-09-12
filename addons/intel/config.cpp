class CfgPatches {
    class Tenthed_intel {
        author = "Akira";
        name = "10th ODST: Intel";
        requiredAddons[] = {
            "Tenthed_core",
            "ace_intelitems"
        };
        weapons[] = {};
        units[] = {};
    };
};
/*
    List of possible intel items
    
    // fake versions will have name misspelling
    Passport // XYZ country or planet
    Identification Card (Civ)
    Identification Card (Press Planetary)
    Identification Card (Press Interplanetary)
    Identification Card (PMC)
    Identification Card (ODST)
    Identification Card (Marine)
    Identification Card (Pilot)
    Identification Card (Armor)
    Identification Card (ONI)
    Bill of Lading(Shipping manifest)
    Travel Visa
    Work Visa
    Certificate of Vaccination
    
    // fake versions will have color name misspelling
    Blue Pass
    Green Pass
    Red Pass
    and other colors

    Nuclear keycard (Red, Blue, Green Yellow)
    Door keycard
*/
class CfgMagazines {
	class acex_intelitems_notepad;
	class Tenthed_intel_Template: acex_intelitems_notepad {
		author="Akira";
		scope=0;
		scopeArsenal=0;
		displayName="Tenthed_intel_Template";
		descriptionShort="Template Item";
		picture="\gs_passports\ui\passport_gz.paa";
		model="\a3\structures_f\items\documents\notepad_f.p3d";
		ace_intelitems_control="ace_intelitems_RscNotepad";
		ACE_isTool=1;
	};
};
class CfgVehicles {
	class acex_intelitems_notepad;
	class Tenthed_intel_Template: acex_intelitems_notepad {
		author="Akira";
		displayName="Tenthed_intel_Template";
		model="\a3\structures_f\items\documents\notepad_f.p3d";
		editorPreview="\a3\editorpreviews_f\data\cfgvehicles\land_notepad_f.jpg";
		scope=0;
		scopeCurator=0;
		ace_intelitems_magazine="acex_intelitems_notepad";
	};
};
