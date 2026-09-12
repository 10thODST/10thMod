class CfgPatches {
    class Tenthed_compositions {
        author = "Akira";
        name = "10th ODST: Compositions";
        requiredAddons[] = {
            "Tenthed_core",
        };
        weapons[] = {};
        units[] = {};
    };
};
class CfgEditorCategories {
	class Tenthed_Comps { // Category
		displayName = "[10th] Compositions";
	};
};

class CfgEditorSubcategories { // Sub Category
	class Tenthed_Comps_Mission {
		displayName = "Mission Creation";
	};
	class Tenthed_Comps_Tools {
		displayName = "Tools";
	};
	class Tenthed_Comps_Templates {
		displayName = "Templates";
	};
	class Tenthed_Comps_Compositions {
		displayName = "Compositions";
	};
	class Tenthed_Comps_Systems {
		displayName = "Systems";
	};
};

class Cfg3DEN {
	class Compositions {
		/* // Template
		class Tenthed_Comp_NAME { // one class per composition
			path = "z\10thMod\addons\compositions\data";	// pbo path to a folder containing header.sqe/composition.sqe files
			side = 0;											// 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "Tenthed_Comps";						// link to CfgEditorCategories
			editorSubcategory = "Tenthed_Comps_Mission";				// link to CfgEditorSubcategories
			displayName = "$STR_Composition_Armored01";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";	// left side icon in groups list
			useSideColorOnIcon = 1;								// 1 == icon is always colored in faction color
		};
		*/
		// Mission Helpers Comps
		/*class Tenthed_Comp_Orbat {
			path = "z\10thMod\addons\compositions\data\orbat";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Mission";
			displayName = "Orbat";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};*/

		// Mission Creation
		class Tenthed_Comp_BasicDrops {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Drops";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Mission";
			displayName = "Basic Drops";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_Arsenal {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Arsenal";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Mission";
			displayName = "10th Limited Arsenal";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_Orbat {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Orbat";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Mission";
			displayName = "Orbat - updated 11-4";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_SpawnSystem {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Spawn_System_Template";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Mission";
			displayName = "10th Spawn System";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};

		// Tools
		class Tenthed_Comp_SpawnUnits {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_SpawnUnitsOnPosition";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Tools";
			displayName = "Trigger Spawn Units";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_DisabledEnabled_AI_Example {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_DisabledEnabled_AI_Example";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Tools";
			displayName = "Disabled and Enabled AI Example";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};

		// Templates
		class Tenthed_Comp_SafeZone {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_SafeZone_Template";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Templates";
			displayName = "Safe Zone";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_Corvette_Template {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Ship_Corvette_Template";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Templates";
			displayName = "Ship Corvette Template";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_Teleport_Template {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Teleporter_template";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Templates";
			displayName = "Teleport Pole";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_TesterZeus_Template {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Testing_Template";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Templates";
			displayName = "Pre-setup Zeus";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		// Compositions
		class Tenthed_Comp_SpawnShipV1 {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Spawn_Ship_V1";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Compositions";
			displayName = "10th SpawnShip V1";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_SpawnShipV2 {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Spawn_Ship_V2";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Compositions";
			displayName = "10th SpawnShip V2";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_FOBCircle {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_FOB_Circle";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Compositions";
			displayName = "FOB Circle";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_Bumblebee_crash {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Bumblebee_crash_Template";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Compositions";
			displayName = "Bumblebee Crash";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_Combat_Barracks_Large {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Combat_Barracks_Large";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Compositions";
			displayName = "Combat Barracks (Large)";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_Combat_Barracks_Small {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Combat_Barracks_Small";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Compositions";
			displayName = "Combat Barracks (Small)";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_DropPodRoom {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_DropPod_Template";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Compositions";
			displayName = "DropPod Room";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_TerminalHealing {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Healing_Terminal";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Compositions";
			displayName = "Healing Terminal";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_TerminalTrait {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Trait_Terminal";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Compositions";
			displayName = "Trait Terminal";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_QRFAirBase {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_QRF_AirBase";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Compositions";
			displayName = "QRF AirBase";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_Space_Elevator_V1 {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Space_Elevator_V1";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Compositions";
			displayName = "Space Elevator V1";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_Space_Stage {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Stage_Template";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Compositions";
			displayName = "Stage";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		// Systems
		class Tenthed_Comp_Airfield {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Anti-Air_System_Template";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Systems";
			displayName = "OPFOR Airfield AA-System";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_AirAutoSpawn {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Air_Spawn_System";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Systems";
			displayName = "OPFOR Air Auto Spawner";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_Music {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Trigger_Music";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Systems";
			displayName = "Trigger Music";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
		class Tenthed_Comp_Vehicle_Spawners {
			path = "z\10thMod\addons\compositions\data\Tenthed_Comp_Vehicle_Spawn_System";
			side = 8;
			editorCategory = "Tenthed_Comps";
			editorSubcategory = "Tenthed_Comps_Systems";
			displayName = "Vehicle Spawn System";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			useSideColorOnIcon = 1;
		};
	};
};
