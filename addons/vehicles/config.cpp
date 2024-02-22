class CfgPatches {
	class Tenthed_Vehicles {
		author = "Silver, Kodiak, Crow, Akira";
		name = "10th ODST: Vehicles Base";
		requiredAddons[] = {
			"Tenthed_core",
			"OPTRE_Core"
		};
		weapons[] = {};
		units[] = {
			"Tenthed_ARES_Tank",
			"Tenthed_ARES_MGS",
			"Tenthed_Zeus_Stallion",
		};
	};
};
class CfgVehicles {
	class OPTRE_UNSC_hornet_green_CAP;
	class OPTRE_M808S;
	class OPTRE_M413_MGS_UNSC_tan;
	class OPTRE_m1087_stallion_cover_unsc;

	class Eventhandlers;

	// Old Variant ground vehicles
	class Tenthed_ARES_Tank : OPTRE_M808S {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "PcoketsTheWizard";
		displayName = "AresScorpion";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Vehicles";
		magazines[] = {
			"OPTRE_60Rnd_105mm_APBC",
			"OPTRE_60Rnd_105mm_SAPHE",
			"OPTRE_60Rnd_105mm_HEAT",
			"OPTRE_60Rnd_105mm_APBC",
			"OPTRE_60Rnd_105mm_SAPHE",
			"OPTRE_60Rnd_105mm_HEAT",
			"OPTRE_100Rnd_762x51_Box_Tracer",
			"OPTRE_100Rnd_762x51_Box_Tracer",
			"OPTRE_100Rnd_762x51_Box_Tracer",
			"OPTRE_100Rnd_762x51_Box_Tracer",
			"SmokeLauncherMag",
			"SmokeLauncherMag"
		};
		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\data\ares_tank\body_lopo_DR.paa",
			"\z\10thMod\addons\vehicles\data\ares_tank\cing_dv_m808s_DR.paa",
			"\z\10thMod\addons\vehicles\data\ares_tank\cing_rt_m808s_DR.paa",
			"\z\10thMod\addons\vehicles\data\ares_tank\turretbase_lopo_DR.paa",
			"\z\10thMod\addons\vehicles\data\ares_tank\turrethead_lopo_DR.paa",
			"\z\10thMod\addons\vehicles\data\ares_tank\turretguns_lopo_DR.paa",
			"\z\10thMod\addons\vehicles\data\ares_tank\ghammer_lopo_DR.paa",
		};
	};
	class Tenthed_ARES_MGS : OPTRE_M413_MGS_UNSC_tan {
		displayName = "AresMGS";
		author = "PocketsTheWizard";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Vehicles";
		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\data\ares_mgs\Bison_Body_tan_CO.paa",
			"\z\10thMod\addons\vehicles\data\ares_mgs\Bison_Misc_tan_CO.paa",
			"\z\10thMod\addons\vehicles\data\ares_mgs\Bison_WheelsCannon_tan_CO.paa",
			"\z\10thMod\addons\vehicles\data\ares_mgs\Bison_Seats_CO.paa",
			"\z\10thMod\addons\vehicles\data\ares_mgs\Bison_Interior_CO.paa",
			"\z\10thMod\addons\vehicles\data\ares_mgs\Bison_MFCDScreens_CO.paa",
			"\z\10thMod\addons\vehicles\data\ares_mgs\Bison_90mm_tan_CO.paa",
		};
	};
	class Tenthed_Zeus_Stallion : OPTRE_m1087_stallion_cover_unsc {
		displayName = "Zeus Stallion";
		author = "Kodiak";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Vehicles";
		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\data\zeus_stallion\zeusstallion.paa",
			"\z\10thMod\addons\vehicles\data\zeus_stallion\Truck_ext02_standard_co.paa",
			"\z\10thMod\addons\vehicles\data\zeus_stallion\Truck_cargo_standard_co.paa",
			"\z\10thMod\addons\vehicles\data\zeus_stallion\Truck_cover_standard_co.paa",
		};
	};
};
