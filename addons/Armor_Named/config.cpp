class CfgPatches {
	class Tenthed_Armor_Named {
		author = "Silver, Kodiak, Crow, Akira";
		name = "10th ODST: Armor Named Retextures";
		requiredAddons[] = {
			"Tenthed_core",
			"OPTRE_Core"
		};
		weapons[] = {};
		units[] = {};
	};
};
class cfgWeapons {
	class Tenthed_Specialist_Armor;
	class Tenthed_Specialist2_Armor;
	class Tenthed_Rifleman_Armor;
	class Tenthed_Rifleman_Knife_Armor;
	class Tenthed_Demolitions_Knife_Armor;
	class Tenthed_Demolitions_Armor;
	class Tenthed_Light_Knife_Armor;
	class Tenthed_Light_Armor;
	class Tenthed_Sniper_Knife_Armor;
	class Tenthed_Sniper_Armor;
	class Tenthed_Sniper_Ghillie_Armor;
	class Tenthed_Alternate_Armor;
	class Tenthed_Pilot_Vest;
	class Tenthed_Pilot_Armored;

	// Named Armors
	class SCT_10th_Jinx_Armor : Tenthed_Pilot_Vest {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe, Kodiak";
		displayName = "[10th] M52B 'Jinx'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {

			"Tenthed_Armor_Named\data\jinxarmor.paa",
		};
	};
	class SCT_10th_Kitsune_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Kitsune'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\kitsuneamour v2.paa"
		};
	};
	class SCT_10th_Gutts_Armor : Tenthed_Demolitions_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Gutts'";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\guttsarmour.paa"
		};
	};
	class SCT_10th_Seagull_Armor : Tenthed_Demolitions_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Seagull'";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\seagullarmor.paa"
		};
	};
	class SCT_10th_Clem_Armor : Tenthed_Demolitions_Armor {
		scope = 0;
		author = "Wolfe,Kodiak,Tiger";
		displayName = "[10th] M52D 'Clem'";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Clem_armor.paa"
		};
	};
	class SCT_10th_Jad_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Jad'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\jadarmor.paa"
		};
	};
	class SCT_10th_Dakota_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Dakota'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\dakotaarmor.paa"
		};
	};
	class SCT_10th_Choco_Armor : Tenthed_Pilot_Vest {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe, Kodiak, Crow";
		displayName = "[10th] M52B 'Choco'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {

			"Tenthed_Armor_Named\data\Chocovest.paa",
		};
	};
	class SCT_10th_Optional_Armor : Tenthed_Pilot_Vest {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe, Kodiak, Crow, Tiger";
		displayName = "[10th] M52B 'Optional'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {

			"Tenthed_Armor_Named\data\optionalarmor.paa",
		};
	};
	class SCT_10th_Lego_Armor : Tenthed_Pilot_Vest {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe, Kodiak, Crow";
		displayName = "[10th] M52B 'Lego'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {

			"Tenthed_Armor_Named\data\Legoamour.paa",
		};
	};
	class SCT_10th_Pockets_Armor : Tenthed_Pilot_Vest {
		dlc = "OPTRE";
		scope = 0;
		author = "Wolfe, Kodiak, Crow";
		displayName = "[10th] M52B 'Pockets'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {

			"Tenthed_Armor_Named\data\pocketsarmor.paa",
		};
	};
	class SCT_10th_Akira_Armor : Tenthed_Specialist2_Armor {
		scope=0;
		scopeArsenal=0;
		author = "Jogn Halo";
		displayName = "[10th] M52D 'Akira'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\akiraarmor.paa"
		};
	};
	class SCT_10th_Tiny_Armor : Tenthed_Pilot_Vest {
		dlc = "OPTRE";
		scope=0;
		scopeArsenal=0;
		author = "John";
		displayName = "[10th] M52B 'Tiny'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {
			"Tenthed_Armor_Named\data\tinyarmor.paa",
		};
	};
	class SCT_10th_Crow_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Wolfe, Crow";
		displayName = "[10th] M52D 'Crow'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Armor_Named\data\crowarmor.paa"
		};
	};
	class SCT_10th_Jogn_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Wolfe, Crow";
		displayName = "[10th] M52D 'BoomStick'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\jognarmor.paa"
		};
	};
	class SCT_10th_Goof_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Wolfe, Crow";
		displayName = "[10th] M52D 'Goof'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\goofarmor.paa"
		};
	};
	class SCT_10th_Rambler_Armor : Tenthed_Specialist2_Armor {
		scope=0;
		scopeArsenal=0;
		author = "Wolfe, Crow";
		displayName = "[10th] M52D 'Rambler'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\rambler armor v2.paa"
		};
	};
	class SCT_10th_Goldie_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Wolfe, Crow";
		displayName = "[10th] M52D 'Goldie'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Goldiearmour.paa"
		};
	};
	class SCT_10th_Mac_Armor : Tenthed_Specialist2_Armor {
		scope=0;
		scopeArsenal=0;
		author = "Someone";
		displayName = "[10th] M52D 'Mac'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\macarmor.paa"
		};
	};
	class SCT_10th_Drake_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Drake'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Drake_Armor.paa"
		};
	};
	class SCT_10th_Flipper_Armor : Tenthed_Demolitions_Armor {
		scope=0;
		scopeArsenal=0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Flipper'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\flipperarmor.paa"
		};
	};
	class SCT_10th_HardDrop_Armor : Tenthed_Demolitions_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Hard-Drop'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Hard-Drop_Armor.paa"
		};
	};
	class SCT_10th_Kodiak_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Kodiak'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\kodiakarmor.paa"
		};
	};
	class SCT_10th_Lion_Armor : Tenthed_Demolitions_Knife_Armor {
		scope=0;
		scopeArsenal=0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Lion'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\lionarmor.paa"
		};
	};
	class SCT_10th_Wolfe_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Wolfe'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\wolfearmor.paa"
		};
	};
	class SCT_10th_Altered_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Altered'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\alteredarmor.paa"
		};
	};
	class SCT_10th_Sixfour_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Sixfour'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\sixfourarmor.paa"
		};
	};
	class SCT_10th_Slim_Armor : Tenthed_Specialist2_Armor {
		scope=0;
		scopeArsenal=0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Slim'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\slimarmor.paa"
		};
	};
	class SCT_10th_Lilly_Armor : Tenthed_Rifleman_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Lilly'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\lillyarmor.paa"
		};
	};
	class SCT_10th_Dave_Armor : Tenthed_Sniper_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Dave'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"Tenthed_Armor_Named\data\lionghilliememe.paa",
			"Tenthed_Armor_Named\data\davearmor.paa"
		};
	};
	class SCT_10th_Kmart_Armor : Tenthed_Sniper_Armor {
		scope = 0;
		author = "Wolfe,Kodiak,Tiger";
		displayName = "[10th] M52D 'Kmart'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"Tenthed_Armor_Named\data\lionghilliememe.paa",
			"Tenthed_Armor_Named\data\Kmartamour.paa"
		};
	};
	class SCT_10th_Void_Armor : Tenthed_Sniper_Armor {
		scope=0;
		scopeArsenal=0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Void'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"Tenthed_Armor_Named\data\lionghilliememe.paa",
			"Tenthed_Armor_Named\data\Void_Armor.paa"
		};
	};
	class SCT_10th_Nova_Armor : Tenthed_Light_Knife_Armor {
		scope=0;
		scopeArsenal=0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Nova'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"Tenthed_Armor_Named\data\lionghilliememe.paa",
			"Tenthed_Armor_Named\data\Novaamour.paa"
		};
	};
	class SCT_10th_Metro_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Metro'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\metroarmor.paa"
		};
	};
	class SCT_10th_Nobody_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Nobody'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\nobodyarmor.paa"
		};
	};
	class SCT_10th_Thor_Armor : Tenthed_Rifleman_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Thor'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\thorarmor.paa"
		};
	};
	class SCT_10th_Tower_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Tower'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\towerarmor.paa"
		};
	};
	class SCT_10th_Firefly_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Firefly'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\fireflyarmor.paa"
		};
	};
	class SCT_10th_Baer_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Baer'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\baerarmor.paa"
		};
	};
	class SCT_10th_Panzer_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Panzer'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\panzerarmor.paa"
		};
	};
	class SCT_10th_Mustang_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Mustang'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\mustangarmor.paa"
		};
	};
	class SCT_10th_Iceman_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Iceman'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\icemanarmor.paa"
		};
	};
	class SCT_10th_Havoc_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Havoc'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"Tenthed_Armor_Named\data\lionghilliememe.paa",
			"Tenthed_Armor_Named\data\havocarmor.paa"
		};
	};
	class SCT_10th_Tino_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Tino'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\tinoarmor.paa"
		};
	};
	class SCT_10th_Hatchet_Armor : Tenthed_Sniper_Knife_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Hatchet'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\hatchetarmor.paa"
		};
	};
	class SCT_10th_Fixer_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Fixer'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\fixerarmor.paa"
		};
	};
	class SCT_10th_Logic_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Logic'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"Tenthed_Armor_Named\data\lionghilliememe.paa",
			"Tenthed_Armor_Named\data\logicarmor.paa"
		};
	};
	class SCT_10th_Splash_Armor : Tenthed_Rifleman_Armor {
		scope = 0;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] M52D 'Spash'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Splash_Armor.paa"
		};
	};
	class SCT_10th_Tiger_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Tiger";
		displayName = "[10th] M52D 'Tiger'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Tiger_Armor.paa"
		};
	};
	class SCT_10th_FivesEvader_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Tiger";
		displayName = "[10th] M52D 'FivesEvader'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\FivesEvader_armor.paa"
		};
	};
	class SCT_10th_Marvel_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Marvel'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\marvelarmor.paa"
		};
	};
	class SCT_10th_Arctic_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Sawah";
		displayName = "[10th] M52D 'Arctic'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\arcticarmor.paa"
		};
	};
	class SCT_10th_Sound_Armor : Tenthed_Pilot_Vest {
		dlc = "OPTRE";
		scope = 0;
		author = "Sawah";
		displayName = "[10th] M52B 'Sound'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {
			"Tenthed_Armor_Named\data\soundarmor.paa",
		};
	};
	class SCT_10th_Cossack_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 0;
		author = "Jogn";
		displayName = "[10th] M52D 'Cossack'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\CossackTorso.paa"
		};
	};
	class SCT_10th_Som_Armor : Tenthed_Sniper_Knife_Armor {
		scope = 0;
		author = "Mac";
		displayName = "[10th] M52D 'Som'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\somarmor.paa"
		};
	};
	class SCT_10th_Nox_Armor : Tenthed_Specialist2_Armor {
		scope = 1;
		author = "Wolfe, Crow, Jogn";
		displayName = "[10th] M52D 'Nox'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\noxarmor.paa"
		};
	};
	class SCT_10th_Hodge_Armor : Tenthed_Demolitions_Knife_Armor {
		scope=0;
		author="Wolfe,Kodiak";
		displayName="[10th] M52D 'Hodge'";
		hiddenSelectionsTextures[]= {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\hodgearmor.paa"
		};
	};
	class SCT_10th_BlindWolf_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Nox";
		displayName = "[10th] M52D 'BlindWolf'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\blindWolfarmor.paa"
		};
	};
	class SCT_10th_Cookie_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 0;
		author = "Jogn";
		displayName = "[10th] M52D 'Cookie'";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Cookie_Armor.paa"
		};
	};
	class SCT_10th_Goose_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Goose";
		displayName = "[10th] M52D 'Goose'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\GooseArmor.paa"
		};
	};
	class SCT_10th_Bob_Armor : Tenthed_Rifleman_Armor {
		scope = 0;
		author = "Tiny";
		displayName = "[10th] M52D 'Bob'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\bobarmor.paa"
		};
	};
	class SCT_10th_Ledo_Armor : Tenthed_Rifleman_Armor {
		scope = 0;
		author = "Breadsticks";
		displayName = "[10th] M52D 'Ledo'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\ledoarmor.paa"
		};
	};
	class SCT_10th_Goji_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Mac";
		displayName = "[10th] M52D 'Goji'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\gojiarmor.paa"
		};
	};
	class SCT_10th_Leek_Armor : Tenthed_Rifleman_Armor {
		scope = 0;
		author = "Goose";
		displayName = "[10th] M52D 'Leek'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Leek_Armor.paa"
		};
	};
	class SCT_10th_Goldy_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Mac";
		displayName = "[10th] M52D 'Goldy'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\GoldyArmor.paa"
		};
	};
	class SCT_10th_Dex_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Jogn";
		displayName = "[10th] M52D 'Dex'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\dexarmor.paa"
		};
	};
	class SCT_10th_Dovah_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Mac";
		displayName = "[10th] M52D 'Dovah'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Dovah_Armor.paa"
		};
	};
	class SCT_10th_Villainess_Armor : Tenthed_Specialist2_Armor {
		scope=0;
		scopeArsenal=0;
		author = "Jogn";
		displayName = "[10th] M52D 'Villainess'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\villainessarmor.paa"
		};
	};
	class SCT_10th_Infra_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Tiger";
		displayName = "[10th] M52D 'Infra'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Infra_Armor.paa"
		};
	};
	class SCT_10th_Thresh_Armor : Tenthed_Sniper_Armor {
		scope = 0;
		author = "Tiger";
		displayName = "[10th] M52D 'Thresh'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Thresh_Armor.paa"
		};
	};
	class SCT_10th_Princess_Armor : Tenthed_Sniper_Armor {
		scope = 2;
		author = "Tiger";
		displayName = "[10th] M52D 'Princess'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Armor_Named\data\Princess_Armor.paa"
		};
	};
	class SCT_10th_Glint_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Mac";
		displayName = "[10th] M52D 'Glint'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\glintarmor.paa"
		};
	};
	class SCT_10th_Grimgnaw_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Tiger";
		displayName = "[10th] M52D 'Grimgnaw'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Grimgnaw_Armor.paa"
		};
	};
	class SCT_10th_Dubbos_Armor : Tenthed_Rifleman_Armor {
		scope = 0;
		author = "Tiger";
		displayName = "[10th] M52D 'Dubbos'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Dubbos_armor.paa"
		};
	};
	class SCT_10th_Atlas_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Jogn";
		displayName = "[10th] M52D 'Atlas'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\AtlasArmor.paa"
		};
	};
	class SCT_10th_Bbstine_Armor : Tenthed_Specialist2_Armor {
		scope=0;
		scopeArsenal=0;
		author = "Bbstine";
		displayName = "[10th] M52D 'Bbstine'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Bbstine-armor.paa"
		};
	};
	class SCT_10th_Meatshield_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Jogn";
		displayName = "[10th] M52D 'Meatshield'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\meatshieldarmor.paa"
		};
	};
	class SCT_10th_Freedom_Armor : Tenthed_Specialist2_Armor {
		scope = 0;
		author = "Bbstine";
		displayName = "[10th] M52D 'Freedom'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Freedom_Armor_Test.paa"
		};
	};
	class SCT_10th_Jody_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 0;
		author = "Jogn";
		displayName = "[10th] M52D 'Jody'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Jodyarmor.paa"
		};
	};
	class SCT_10th_McInnes_Armor : Tenthed_Demolitions_Armor {
		scope = 0;
		author = "Bbstine";
		displayName = "[10th] M52D 'McInnes'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\McInnes_Armor.paa"
		};
	};
};