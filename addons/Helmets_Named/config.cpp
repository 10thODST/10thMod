class CfgPatches {
	class Tenthed_Helmets_Named {
		author = "Silver, Kodiak, Crow, Akira";
		name = "10th ODST: Helmets Named Retextures";
		requiredAddons[] = {
			"OPTRE_Core",
			"Tenthed_core",
			"Tenthed_Armor_Base"
		};
		weapons[] = {};
		units[] = {};
	};
};
class cfgWeapons {
	class Tenthed_CH252D_Base;
	class Tenthed_CH252D_Base_dp;

	class Tenthed_Pilot_Helmet;


	// Kodiak
	class SCT_10th_Kodiak_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		displayName = "[10th] CH252D 'Kodiak'";
		author = "Article 2 Studios";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\kodiakhelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Kodiak_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		displayName = "[10th] CH252D 'Kodiak'";
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\kodiakhelmet.paa"
		};
	};

	// Lion
	class SCT_10th_Lion_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope=0;
		scopeArsenal=0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Lion'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\lionhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Lion_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Lion'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\lionhelmet.paa"
		};
	};

	// Wolfe
	class SCT_10th_Wolfe_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Wolfe'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\wolfehelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Wolfe_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Wolfe'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\wolfehelmet.paa"
		};
	};

	// Kitsune
	class SCT_10th_Kitsune_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		displayName = "[10th] CH252D 'Kitsune'";
		author = "Article 2 Studios";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\kitsunehelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Kitsune_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Kitsune'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"10th_AC\data\helmets\kitsunehelmet.paa"
		};
	};

	// Altered
	class SCT_10th_Altered_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Altered'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\alteredhelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Altered_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Altered'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\alteredhelmet.paa"
		};
	};

	// Chop
	class SCT_10th_Chop_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Chop'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\chophelmet.paa",
			"Tenthed_Armor_Base\data\visors\bluevisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Chop_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Chop'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\chophelmet.paa"
		};
	};

	// Firefly
	class SCT_10th_Firefly_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Firefly'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\fireflyhelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Firefly_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Firefly'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\fireflyhelmet.paa"
		};
	};

	// Dave
	class SCT_10th_Dave_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Dave'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\davehelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Dave_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Dave'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\davehelmet.paa"
		};
	};

	// Pockets
	class SCT_10th_pocket_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'pockets'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\pocketsthewizardhelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_pocket_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'pockets'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\pocketsthewizardhelmet.paa"
		};
	};

	// Sixfour
	class SCT_10th_Sixfour_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Sixfour'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\sixfourhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Sixfour_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Sixfour'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\sixfourhelmet.paa"
		};
	};

	// Tino
	class SCT_10th_Tino_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Tino'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\tinohelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Tino_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\tinohelmet.paa"
		};
	};

	// Trojan
	class SCT_10th_Trojan_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Trojan'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\trojanhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Trojan_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Trojan'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\trojanhelmet.paa"
		};
	};

	// Tower
	class SCT_10th_Tower_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Tower'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\towerhelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Tower_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Tower'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\towerhelmet.paa"
		};
	};

	// Teal
	class SCT_10th_Teal_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Teal'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\tealhelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Teal_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Teal'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\tealhelmet.paa"
		};
	};

	// Slim
	class SCT_10th_Slim_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope=0;
		scopeArsenal=0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Slim'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\slimhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Slim_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Slim'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\slimhelmet.paa"
		};
	};

	// Lilly
	class SCT_10th_Lilly_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Lilly'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\lillyhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Lilly_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Lilly'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\lillyhelmet.paa"
		};
	};

	// Metro
	class SCT_10th_Metro_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Metro'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\metrohelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Metro_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Metro'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\metrohelmet.paa"
		};
	};

	// Nobody
	class SCT_10th_Nobody_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Nobody'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\nobodyhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Nobody_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Nobody'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\nobodyhelmet.paa"
		};
	};

	// Thor
	class SCT_10th_Thor_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Thor'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\thorhelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Thor_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Thor'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\thorhelmet.paa"
		};
	};

	// Baer
	class SCT_10th_Baer_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Baer'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\baerhelmet.paa",
			"Tenthed_Armor_Base\data\visors\bluevisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Baer_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Baer'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\baerhelmet.paa"
		};
	};

	// Panzer
	class SCT_10th_Panzer_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Panzer'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\panzerhelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Panzer_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Panzer'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\panzerhelmet.paa"
		};
	};

	// Mustang
	class Tenthed_Mustang_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Mustang'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\mustanghelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Mustang_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Mustang'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\mustanghelmet.paa"
		};
	};

	// Iceman
	class SCT_10th_Iceman_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Iceman'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\icemanhelmet.paa",
			"Tenthed_Armor_Base\data\visors\bluevisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Iceman_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Iceman'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\icemanhelmet.paa"
		};
	};

	// Havoc
	class SCT_10th_Havoc_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Havoc'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\havochelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Havoc_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\havochelmet.paa"
		};
	};

	// Hatchet
	class SCT_10th_Hatchet_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Hatchet'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\hatchethelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Hatchet_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Hatchet'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\hatchethelmet.paa"
		};
	};

	// Fixer
	class SCT_10th_Fixer_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Fixer'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\fixerhelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Fixer_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Fixer'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\fixerhelmet.paa"
		};
	};

	// Logic
	class SCT_10th_Logic_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Logic'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\logichelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Logic_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Logic'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\logichelmet.paa"
		};
	};

	// Splash
	class SCT_10th_Splash_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] CH252D 'Splash'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Splash_Helmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Splash_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak,Splash";
		displayName = "[10th] CH252D 'Splash'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Splash_Helmet.paa"
		};
	};

	// Tiger
	class SCT_10th_Tiger_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Tiger'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Tiger_Helmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Tiger_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Tiger'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\TigerHelmet.paa"
		};
	};

	// Evader
	class SCT_10th_FivesEvader_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Tiger";
		displayName = "[10th] CH252D 'Evader'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\FivesEvader_Helmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_FivesEvader_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Evader'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\FivesEvader_Helmet.paa"
		};
	};

	// Crow
	class SCT_10th_Crow_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] CH252D 'Crow'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\crowshelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Crow_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak,Crow";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\crowshelmet.paa"
		};
	};

	// Akira
	class SCT_10th_Akira_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope=0;
		scopeArsenal=0;
		author = "Jogn Halo";
		displayName = "[10th] CH252D 'Akira'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\akirahelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Akira_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Jogn Halo";
		displayName = "[10th] CH252D 'Akira'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\akirahelmet.paa"
		};
	};

	// Rambler
	class SCT_10th_Rambler_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope=0;
		scopeArsenal=0;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] CH252D 'Rambler'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\RamblerHelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Rambler_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] CH252D 'Rambler'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\RamblerHelmet.paa"
		};
	};

	// Void
	class SCT_10th_Void_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope=0;
		scopeArsenal=0;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] CH252D 'Void'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Void_Helmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Void_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] CH252D 'Void'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Void_Helmet.paa"
		};
	};

	// Tiny
	class SCT_10th_Tiny_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope=0;
		scopeArsenal=0;
		author = "John";
		displayName = "[10th] Pilot 'Tiny'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\tinyhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
		fir_visor = 1;
		fir_mask = 1;
		fir_hmd_helmet = 1;
	};
	class SCT_10th_Tiny_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "John";
		displayName = "[10th] Pilot 'Tiny'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\tinyhelmet.paa"
		};
	};

	// Lego
	class SCT_10th_Lego_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] Pilot 'Lego'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\LegoHelmet.paa",
			"Tenthed_Armor_Base\data\visors\bluevisor.paa"
		};
		optreHUDStyle = "ODST_1";
		fir_visor = 1;
		fir_mask = 1;
		fir_hmd_helmet = 1;
	};
	class SCT_10th_Lego_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] Pilot 'Lego'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\LegoHelmet.paa"
		};
	};

	// Goof
	class SCT_10th_Goof_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Goof'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\goofhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Goof_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Goof'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\goofhelmet.paa"
		};
	};

	// Drake
	class SCT_10th_Drake_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Drake'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Drake_Helmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Drake_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Drake'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Drake_Helmet.paa"
		};
	};

	// HardDrop
	class SCT_10th_HardDrop_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Hard-Drop'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Hard-Drop_Helment.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_HardDrop_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Hard-Drop'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Hard-Drop_Helment.paa"
		};
	};

	// Jogn
	class SCT_10th_Jogn_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'BoomStick'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\jognhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Jogn_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'BoomStick'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\jognhelmet.paa"
		};
	};

	// Kmart
	class SCT_10th_Kmart_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Kmart'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Kmarthelment.paa",
			"Tenthed_Armor_Base\data\visors\bluevisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Kmart_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Kmart'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Kmarthelment.paa"
		};
	};

	// Dakota
	class SCT_10th_Dakota_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Dakota'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\dakotahelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Dakota_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Dakota'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\dakotahelmet.paa"
		};
	};

	// Jad
	class SCT_10th_Jad_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Jad'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\jadhelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Jad_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Jad'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\jadhelmet.paa"
		};
	};

	// Goldie
	class SCT_10th_Goldie_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Goldie'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Goldiehelment.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Goldie_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Goldie'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Goldiehelment.paa"
		};
	};

	// Nova
	class SCT_10th_Nova_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope=0;
		scopeArsenal=0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Nova'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Novahelment.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Nova_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Nova'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Novahelment.paa"
		};
	};

	// Marvel
	class SCT_10th_Marvel_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Marvel'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\marvelhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Marvel_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Marvel'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\marvelhelmet.paa"
		};
	};

	// Flipper
	class SCT_10th_Flipper_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope=0;
		scopeArsenal=0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Flipper'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\flipperhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Flipper_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Flipper'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\flipperhelmet.paa"
		};
	};

	// Choco
	class SCT_10th_Choco_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] Pilot 'Choco'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Chocohelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Choco_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] Pilot 'Choco'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Chocohelmet.paa"
		};
	};

	// Mac
	class SCT_10th_Mac_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope=0;
		scopeArsenal=0;
		author = "Mac";
		displayName = "[10th] CH252D 'Mac'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\machelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Mac_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Mac";
		displayName = "[10th] CH252D 'Mac'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\machelmet.paa"
		};
	};

	// Optional
	class SCT_10th_Optional_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] Pilot 'Optional'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\optionalhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
		fir_visor = 1;
		fir_mask = 1;
		fir_hmd_helmet = 1;
	};
	class SCT_10th_Optional_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] Pilot 'Optional'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\optionalhelmet.paa"
		};
	};

	// Jinx
	class SCT_10th_Jinx_Helmet : Tenthed_Pilot_Helmet {
		dlc = "OPTRE_FC";
		scope = 0;
		scopeArsenal = 2;
		displayName = "[10th] VX19 'Jinx'";
		author = "Wolfe, Kodiak";
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\jinxhelmet.paa",
			"Tenthed_Armor_Base\data\h3_pilothelmet_visor_CO.paa"
		};
		optreHUDStyle = "ODST_1";
		fir_visor = 1;
		fir_mask = 1;
		fir_hmd_helmet = 1;
	};

	// Arctic
	class SCT_10th_Arctic_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Sawah";
		displayName = "[10th] CH252D 'Arctic'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\arctichelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Arctic_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Sawah";
		displayName = "[10th] CH252D 'Arctic'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\arctichelmet.paa"
		};
	};

	// Sound
	class SCT_10th_Sound_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Sawah";
		displayName = "[10th] Pilot 'Sound'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\soundhelmet.paa",
			"Tenthed_Armor_Base\data\visors\bluevisor.paa"
		};
		optreHUDStyle = "ODST_1";
		fir_visor = 1;
		fir_mask = 1;
		fir_hmd_helmet = 1;
	};
	class SCT_10th_Sound_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Sawah";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\soundhelmet.paa"
		};
	};

	// Cossack
	class SCT_10th_Cossack_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Tiny";
		displayName = "[10th] CH252D 'Cossack'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\CossackHelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Cossack_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Tiny";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\CossackHelmet.paa"
		};
	};

	// Som
	class SCT_10th_Som_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Som'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\somhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Som_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] ={
			"Tenthed_Helmets_Named\data\somhelmet.paa"
		};
	};

	// Nox
	class SCT_10th_Nox_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 1;
		author = "Wolfe,Kodiak,Crow,Jogn";
		displayName = "[10th] CH252D 'Nox'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\NoxHelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Nox_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\NoxHelmet.paa"
		};
	};

	// Hodge
	class SCT_10th_Hodge_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Hodge'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\hodgehelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldtvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Hodge_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\hodgehelmet.paa"
		};
	};

	// BlindWolf
	class SCT_10th_BlindWolf_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Nox";
		displayName = "[10th] CH252D 'BlindWolf'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\blindWolfhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_BlindWolf_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Nox";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\blindWolfhelmet.paa"
		};
	};

	// Seagull
	class SCT_10th_Seagull_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak,Crow,";
		displayName = "[10th] CH252D 'Seagull'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\seagullhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Seagull_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] ={
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\seagullhelmet.paa"
		};
	};

	// Gutts
	class SCT_10th_Gutts_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak,Crow,";
		displayName = "[10th] CH252D 'Gutts'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Gutts Helmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Gutts_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Gutts Helmet.paa"
		};
	};

	// Clem
	class SCT_10th_Clem_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe,Kodiak,Crow,Tiger";
		displayName = "[10th] CH252D 'Clem'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Clem_helmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Clem_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Clem_helmet.paa"
		};
	};

	// Cookie
	class SCT_10th_Cookie_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Jogn,";
		displayName = "[10th] CH252D 'Cookie'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Cookie_Helmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Cookie_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Jogn";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Cookie_Helmet.paa"
		};
	};

	// Goose Johnny
	class SCT_10th_Goose_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Goose";
		displayName = "[10th] CH252D 'Goose'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\GooseHelmet.paa",
			"Tenthed_Armor_Base\data\visors\defaultvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Goose_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Goose";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\GooseHelmet.paa"
		};
	};

	// Bob
	class SCT_10th_Bob_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Tiny";
		displayName = "[10th] CH252D 'Bob'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\bobhelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Bob_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Tiny";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\bobhelmet.paa"
		};
	};

	// Ledo
	class SCT_10th_Ledo_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Breadsticks";
		displayName = "[10th] CH252D 'Ledo'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\ledohelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Ledo_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Breadsticks";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\ledohelmet.paa"
		};
	};

	// Goji
	class SCT_10th_Goji_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Mac";
		displayName = "[10th] CH252D 'Goji'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\gojihelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Goji_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Mac";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\gojihelmet.paa"
		};
	};

	// Leek
	class SCT_10th_Leek_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Goose";
		displayName = "[10th] CH252D 'Leek'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Leek_Helmet.paa",
			"Tenthed_Armor_Base\data\visors\defaultvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Leek_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Goose";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Leek_Helmet.paa"
		};
	};

	// Goldy
	class SCT_10th_Goldy_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Mac";
		displayName = "[10th] CH252D 'Goldy'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Goldy_Helm.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Goldy_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Mac";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Goldy_Helm.paa"
		};
	};

	// Dex
	class SCT_10th_Dex_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Mac";
		displayName = "[10th] CH252D 'Dex'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\dexhelmet.paa",
			"Tenthed_Armor_Base\data\visors\defaultvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Dex_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Mac";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\dexhelmet.paa"
		};
	};

	// Dovah
	class SCT_10th_Dovah_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Mac";
		displayName = "[10th] CH252D 'Dovah'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Dovah_Helm.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Dovah_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Mac";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Dovah_Helm.paa"
		};
	};

	// Villainess
	class SCT_10th_Villainess_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope=0;
		scopeArsenal=0;
		author = "Jogn";
		displayName = "[10th] CH252D 'Villainess'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\villainesshelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Villainess_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Jogn";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\villainesshelmet.paa"
		};
	};

	// Infra
	class SCT_10th_Infra_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Tiger";
		displayName = "[10th] CH252D 'Infra'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Infra_Helment.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Infra_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Tiger";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Infra_Helment.paa"
		};
	};

	// Thresh
	class SCT_10th_Thresh_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Tiger";
		displayName = "[10th] CH252D 'Thresh'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Thresh_Helment.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Thresh_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Tiger";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Thresh_Helment.paa"
		};
	};

	// Princess
	class SCT_10th_Princess_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Tiger";
		displayName = "[10th] CH252D 'Princess'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Princess_Helment.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Princess_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Tiger";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Princess_Helment.paa"
		};
	};

	// Glint
	class SCT_10th_Glint_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Mac";
		displayName = "[10th] CH252D 'Glint'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\glinthelm.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Glint_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Mac";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\glinthelm.paa"
		};
	};

	// Grimgnaw
	class SCT_10th_Grimgnaw_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Tiger";
		displayName = "[10th] CH252D 'Grimgnaw'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Grimgnaw_Helment.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Grimgnaw_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Tiger";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Grimgnaw_Helment.paa"
		};
	};

	// Dubbos
	class SCT_10th_Dubbos_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Tiger";
		displayName = "[10th] CH252D 'Dubbos'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Dubbos_helmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Dubbos_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Tiger";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Dubbos_helmet.paa"
		};
	};

	// Atlas
	class SCT_10th_Atlas_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Jogn";
		displayName = "[10th] CH252D 'Atlas'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\AtlasHelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Atlas_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Tiger";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\AtlasHelmet.paa"
		};
	};

	// Bbstine
	class SCT_10th_Bbstine_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope=0;
		scopeArsenal=0;
		author = "Bbstine";
		displayName = "[10th] CH252D 'Bbstine'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Bbstine-helmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Bbstine_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Bbstine";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Bbstine-helmet.paa"
		};
	};

	// Meatshield
	class SCT_10th_Meatshield_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Jogn";
		displayName = "[10th] CH252D 'Meatshield'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\meatshieldhelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Meatshield_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Jogn";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\meatshieldhelmet.paa"
		};
	};

	// Freedom
	class SCT_10th_Freedom_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Bbstine";
		displayName = "[10th] CH252D 'Freedom'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Freedom_Helmet_Test.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Freedom_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Bbstine";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\Freedom_Helmet_Test.paa"
		};
	};

	// Jody
	class SCT_10th_Jody_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Jogn";
		displayName = "[10th] CH252D 'Jody'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\jodyhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Jody_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Jogn";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\jodyhelmet.paa"
		};
	};

	// McInnes
	class SCT_10th_McInnes_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Bbstine";
		displayName = "[10th] CH252D 'McInnes'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\McInnes_Helmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_McInnes_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Bbstine";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\McInnes_Helmet.paa"
		};
	};
};