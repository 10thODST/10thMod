class CfgPatches {
	class Tenthed_OPFOR_Vehicles {
		author = "Akira";
		name = "10th ODST: Vehicles";
		requiredAddons[] = {
			"Tenthed_core",
			"OPTRE_Core"
		};
		weapons[] = {};
		units[] = {};
	};
};
class CfgFactionClasses {
    class Tenthed_UnitFact_Military_Insurrection {
        displayname = "[10th] Innie Military";
        priority = 1;
        side = 0;
        icon = "\Tenthed_Core\data\logo.paa";
        flag = "\Tenthed_Core\data\logo.paa";
    };
	class Tenthed_UnitFact_Civilian_Insurrection {
        displayname = "[10th] Civilian Insurrection";
        priority = 1;
        side = 0;
        icon = "\Tenthed_Core\data\logo.paa";
        flag = "\Tenthed_Core\data\logo.paa";
    };
};