class CfgPatches {
	class Tenthed_Vehicles_Hornet {
		author = "Dodo, Akira";
		name = "10th ODST: Hornets";
		requiredAddons[] = {
			"Tenthed_core",
			"OPTRE_Core"
		};
		weapons[] = {};
		units[] = {
			"Tenthed_beeHornet",
			"Tenthed_ZakuHornet",
			"Tenthed_Hornet"
		};
	};
};
class CfgVehicles {
	class OPTRE_UNSC_hornet_green_CAP;

	class Eventhandlers;

	// Base type Hornets
	class Tenthed_Hornet_Base : OPTRE_UNSC_hornet_green_CAP {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "Akira";
		displayName = "Tenthed_Hornet_Base";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Hornets";
		hiddenSelectionsTextures[] = {
			"optre_vehicles\hornet\data\hornet_hull_green_co.paa"
		};
		maxSpeed = 350;
		weapons[] = {
			"OPTRE_GUA23A",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera",
			"OPTRE_missiles_C2GMLS"
		};
		magazines[] = {
			"OPTRE_2000Rnd_20mm_HEIAP",
			"240Rnd_CMFlare_Chaff_Magazine", // 168Rnd_CMFlare_Chaff_Magazine
			"Laserbatteries",
			"OPTRE_8Rnd_C2GMLS_missiles",
			"OPTRE_8Rnd_C2GMLS_missiles"
		};
		class AMSData {
			AMSEnabled = 1;
			DialogClass = "AMS_New_GUI";
			AircraftBase = "Tenthed_Hornet_Base";
			HardpointPicture = "OPTRE_Vehicles\Hornet\HornetPylonPic.paa";
			CustomPreset_Hashmap = "FIR_F23A_CustomPreset_Hashmap";
			loadout_pre = "z\10thMod\addons\vehicles\Hornet\scripts\Loadout_Pre.sqf";
			loadout_apply = "FIR_AirWeaponSystem_US_Cfg\sqs\AMS\AMS_Loadout_Apply.sqf";
			loadout_post = "z\10thMod\addons\vehicles\Hornet\scripts\DoNothing.sqf";
		};
		class UserActions {
			class AMSOpen
			{
				displayName = "<t color='#739eff'>Open AMS</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User3";
				condition = "(player == driver this) and (speed this < 1)";
				statement = "this execVM ""\FIR_AirWeaponSystem_US_Cfg\sqs\AMS\AMS_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
				hideOnUse = 1;
			};
		};
	};

	// Hornets
	class Tenthed_Hornet : Tenthed_Hornet_Base {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Akira";
		displayName = "[10th] Hornet";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Hornets";
		hiddenSelectionsTextures[]= {
			"optre_vehicles\hornet\data\hornet_hull_green_co.paa"
		};
	};

	// Old Variant Hornets
	class Tenthed_beeHornet : Tenthed_Hornet_Base {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "PcoketsTheWizard";
		displayName = "b(ee)Hornet";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Hornets";
		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\data\bee_hornet\beeHornet.paa"
		};
	};
	class Tenthed_ZakuHornet : Tenthed_Hornet_Base {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "PcoketsTheWizard";
		displayName = "Red Comet Hornet";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Hornets";
		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\data\zaku_hornet\ZakuHornet.paa"
		};
	};
};
