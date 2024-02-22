class CfgPatches
{
	class Tenthed1_Test_Armor {
		author = "Akira";
		name = "10th Armor Testing";
		requiredAddons[] = {};
		weapons[] = {};
		units[] = {};
	};
};

class cfgWeapons
{
	class HeadgearItem;
	class VestItem;
	class OPTRE_UNSC_M52D_Armor;
	class OPTRE_FC_M52B_Armor_Vest;

	class OPTRE_FC_VX19_Helmet;
	class OPTRE_UNSC_CH252_Helmet_Base;

	// Template Armors
	class test_Specialist2_Armor : OPTRE_UNSC_M52D_Armor {
		author = "Wolfe,Kodiak";
		scope = 1;
		hiddenSelections[] = {
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTLeft",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"CustomKit_Scorch",
			"APO_SMG"
		};
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"test_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
		};
		class ItemInfo : VestItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTLeft",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"CustomKit_Scorch",
				"APO_SMG"
			};
			containerClass = "Supply350";
			overlaySelectionsInfo[] = {
				"Ghillie_hide"
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class test_Rifleman_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Rifleman)";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","APO_BR","APO_SMG","APO_Sniper","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","test_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
		class ItemInfo : VestItem {
			overlaySelectionsInfo[] = {
				"Ghillie_hide"
			};
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply350";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","APO_BR","APO_SMG","APO_Sniper","customkit_scorch" };
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class test_Rifleman_Knife_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Rifleman) No Knife";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","APO_BR","APO_Knife","APO_SMG","APO_Sniper","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","test_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };

		class ItemInfo : VestItem {
			overlaySelectionsInfo[] =
			{
				"Ghillie_hide"
			};
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply350";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","APO_BR","APO_Knife","APO_SMG","APO_Sniper","customkit_scorch" };
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class test_Demolitions_Knife_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Demolitions) No Knife";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Sniper","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","test_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
		class ItemInfo : VestItem {
			overlaySelectionsInfo[] = {
				"Ghillie_hide"
			};
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply350";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Sniper","customkit_scorch" };
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class test_Demolitions_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Demolitions)";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Sniper","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","test_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
		class ItemInfo : VestItem {
			overlaySelectionsInfo[] = {
				"Ghillie_hide"
			};
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply350";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Sniper","customkit_scorch" };
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class test_Light_Knife_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Light) No Knife";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","test_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
		class ItemInfo : VestItem {
			overlaySelectionsInfo[] = {
				"Ghillie_hide"
			};
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply350";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","customkit_scorch" };
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class test_Light_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Light)";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_MGThigh","AP_AR","AP_Pack","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_SMG","APO_Sniper","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","test_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
		class ItemInfo : VestItem {
			overlaySelectionsInfo[] = {
				"Ghillie_hide"
			};
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply350";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_MGThigh","AP_AR","AP_Pack","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_SMG","APO_Sniper","customkit_scorch" };
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class test_Sniper_Knife_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Sniper) No Knife";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_SMG","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","test_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
		class ItemInfo : VestItem {
			overlaySelectionsInfo[] = {
				"Ghillie_hide"
			};
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply350";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_SMG","customkit_scorch" };
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class test_Sniper_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Sniper)";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_MGThigh","AP_AR","AP_Pack","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_SMG","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","test_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
		class ItemInfo : VestItem {
			overlaySelectionsInfo[] = {
				"Ghillie_hide"
			};
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply350";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_MGThigh","AP_AR","AP_Pack","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_SMG","customkit_scorch" };
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class test_Sniper_Ghillie_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor Ghillie (Sniper)";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL",,"AP_MGThigh","AP_AR","AP_Pack","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_SMG","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","test_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
		class ItemInfo : VestItem {
			overlaySelectionsInfo[] = {
				"Ghillie_hide"
			};
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply350";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_MGThigh","AP_AR","AP_Pack","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_SMG","customkit_scorch" };
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class test_Alternate_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Alternate'";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_AR","AP_GL","AP_Pack","AP_Pistol","AP_Rounds","AP_SMG","AP_Sniper","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","test_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
		class ItemInfo : VestItem {
			overlaySelectionsInfo[] = {
				"Ghillie_hide"
			};
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply350";
			hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_AR","AP_GL","AP_Pack","AP_Pistol","AP_Rounds","AP_SMG","AP_Sniper","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","customkit_scorch" };
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class test_Pilot_Vest : OPTRE_FC_M52B_Armor_Vest {
		dlc = "OPTRE";
		author = "Wolfe,Kodiak";
		scope = 1;
		displayName = "[10th] Pilot Vest";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {
			"OPTRE_FC_Units\Marines\data\h3_vest_co.paa",
		};
		hiddenSelections[] = {
			"camo1",
			"attach_arms",
			"A_Ghillie",
			"AP_AR",
			"AP_BR",
			"AB_Canteen",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_Pack",
			"AP_Pistol",
			"AP_SG",
			"AP_SMG",
			"AP_Smoke",
			"AP_Sniper"
		};
		class ItemInfo : VestItem {
			uniformModel = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
			containerClass = "Supply160";
			mass = 65;
			passThrough = 0.15000001;
			modelSides[] = { 6 };
			hiddenSelectionsTextures[] = {
				"OPTRE_FC_Units\Marines\data\h3_vest_co.paa",
			};
			hiddenSelections[] = {
			"camo1",
			"attach_arms",
			"A_Ghillie",
			"AP_AR",
			"AP_BR",
			"AB_Canteen",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_Pack",
			"AP_Pistol",
			"AP_SG",
			"AP_SMG",
			"AP_Smoke",
			"AP_Sniper"
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class test_Pilot_Armored : OPTRE_FC_M52B_Armor_Vest {
		dlc = "OPTRE";
		author = "Wolfe,Kodiak";
		scope = 1;
		displayName = "[10TH] Pilot Armored Varient";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {
			"OPTRE_FC_Units\Marines\data\h3_vest_co.paa",
		};
		hiddenSelections[] = {
				"camo1",
				"A_Ghillie",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_Pack",
				"AP_Pistol",
				"AP_SG",
				"AP_SMG",
				"AP_Smoke",
				"AP_Sniper",
				"AP_Frag",
				"AB_Canteen"
		};
		class ItemInfo : VestItem {
			uniformModel = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
			containerClass = "Supply160";
			mass = 65;
			passThrough = 0.15000001;
			modelSides[] = { 6 };
			hiddenSelectionsTextures[] = {
				"OPTRE_FC_Units\Marines\data\h3_vest_co.paa",
			};
			hiddenSelections[] = {
				"camo1",
				"A_Ghillie",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_Pack",
				"AP_Pistol",
				"AP_SG",
				"AP_SMG",
				"AP_Smoke",
				"AP_Sniper",
				"AP_Frag",
				"AB_Canteen"
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	// Template Helmets
	class test_CH252D_Base : OPTRE_UNSC_CH252_Helmet_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Article 2 Studios";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] =
		{
			"optre_unsc_units\army\data\odst_helmet_co.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_co.paa"
		};
		optreVarietys[] =
		{
			"_dp",
			"",
			"_broken"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[] =
			{
				"optre_unsc_units\army\data\odst_helmet_co.paa",
				"optre_unsc_units\army\data\odst_helmet_visor_co.paa"
			};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.1;
				};
				class Face {
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.1;
				};
				class Neck {
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.1;
				};
			};
		};
	};
	class test_CH252D_Base_dp : OPTRE_UNSC_CH252_Helmet_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Article 2 Studios";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] =
		{
			"optre_unsc_units\army\data\odst_helmet_co.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_co.paa"
		};
		optreVarietys[] =
		{
			"_dp",
			"",
			"_broken"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] = {
				"camo",
				"camo2",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[] = {
				"optre_unsc_units\army\data\odst_helmet_co.paa",
				"optre_unsc_units\army\data\odst_helmet_visor_co.paa"
			};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.1;
				};
				class Face {
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.1;
				};
				class Neck {
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.1;
				};
			};
		};
	};

	// Armors
	class SpecialistArmor_test : test_Specialist2_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Specialist2_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"z\10thMod\optional\armor-test\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"z\10thMod\optional\armor-test\data\Specialist2_Armor\armor_test.paa"
		};
	};
	class RiflemanArmor_test : test_Rifleman_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Rifleman_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"z\10thMod\optional\armor-test\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"z\10thMod\optional\armor-test\data\Rifleman_Armor\armor_test.paa"
		};
	};
	class RiflemanArmorKnife_test : test_Rifleman_Knife_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Rifleman_Knife_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"z\10thMod\optional\armor-test\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"z\10thMod\optional\armor-test\data\Rifleman_ArmorKnife\armor_test.paa"
		};
	};
	class DemolitionsKnifeArmor_test : test_Demolitions_Knife_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Demolitions_Knife_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"z\10thMod\optional\armor-test\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"z\10thMod\optional\armor-test\data\DemolitionsKnife_Armor\armor_test.paa"
		};
	};
	class DemolitionsArmor_test : test_Demolitions_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Demolitions_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"z\10thMod\optional\armor-test\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"z\10thMod\optional\armor-test\data\Demolitions_Armor\armor_test.paa"
		};
	};
	class Light_KnifeArmor_test : test_Light_Knife_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Light_Knife_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"z\10thMod\optional\armor-test\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"z\10thMod\optional\armor-test\data\Light_Knife_Armor\armor_test.paa"
		};
	};
	class Light_Armor_test : test_Light_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Light_Knife_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"z\10thMod\optional\armor-test\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"z\10thMod\optional\armor-test\data\Light_Armor\armor_test.paa"
		};
	};
	class Sniper_Knife_Armor_test : test_Sniper_Knife_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Sniper_Knife_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"z\10thMod\optional\armor-test\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"z\10thMod\optional\armor-test\data\Sniper_Knife\armor_test.paa"
		};
	};
	class Sniper_Armor_test : test_Sniper_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Sniper_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"z\10thMod\optional\armor-test\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"z\10thMod\optional\armor-test\data\sniper_armor\armor_test.paa"
		};
	};
	class Sniper_ArmorGhillie_test : test_Sniper_Ghillie_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Sniper_Ghillie_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"z\10thMod\optional\armor-test\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"z\10thMod\optional\armor-test\data\Sniper_armor_ghillie\armor_test.paa"
		};
	};
	class Alternate_Armor_test : test_Alternate_Armor
	{
		scope = 2;
		displayName = "[10th Test] Testing SCT_10th_Alternate_Armor";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"z\10thMod\optional\armor-test\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"z\10thMod\optional\armor-test\data\Alternate_Armor\armor_test.paa"
		};
	};
	class Pilot_Vest_Test : test_Pilot_Vest {
		scope = 2;
		displayName = "[10th Test] Pilot Vest";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {
			"z\10thMod\optional\armor-test\data\Pilot_Armor_Vest\h3_vest_co.paa",
		};
		hiddenSelections[] = {
			"camo1",
			"attach_arms",
			"A_Ghillie",
			"AP_AR",
			"AP_BR",
			"AB_Canteen",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_Pack",
			"AP_Pistol",
			"AP_SG",
			"AP_SMG",
			"AP_Smoke",
			"AP_Sniper"
		};
		class ItemInfo : VestItem {
			uniformModel = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
			containerClass = "Supply160";
			mass = 65;
			passThrough = 0.15000001;
			modelSides[] = { 6 };
			hiddenSelectionsTextures[] = {
				"z\10thMod\optional\armor-test\data\Pilot_Armor_Vest\h3_vest_co.paa",
			};
			hiddenSelections[] = {
			"camo1",
			"attach_arms",
			"A_Ghillie",
			"AP_AR",
			"AP_BR",
			"AB_Canteen",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_Pack",
			"AP_Pistol",
			"AP_SG",
			"AP_SMG",
			"AP_Smoke",
			"AP_Sniper"
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	class Pilot_Armored_Test : OPTRE_FC_M52B_Armor_Vest {
		scope = 1;
		displayName = "[10th Test] Pilot Armored Varient";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {
			"z\10thMod\optional\armor-test\data\Pilot_Armor_Armored\h3_vest_co.paa",
		};
		hiddenSelections[] = {
				"camo1",
				"A_Ghillie",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_Pack",
				"AP_Pistol",
				"AP_SG",
				"AP_SMG",
				"AP_Smoke",
				"AP_Sniper",
				"AP_Frag",
				"AB_Canteen"
		};
		class ItemInfo : VestItem {
			uniformModel = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
			containerClass = "Supply160";
			mass = 65;
			passThrough = 0.15000001;
			modelSides[] = { 6 };
			hiddenSelectionsTextures[] = {
				"z\10thMod\optional\armor-test\data\Pilot_Armor_Armored\h3_vest_co.paa",
			};
			hiddenSelections[] = {
				"camo1",
				"A_Ghillie",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_Pack",
				"AP_Pistol",
				"AP_SG",
				"AP_SMG",
				"AP_Smoke",
				"AP_Sniper",
				"AP_Frag",
				"AB_Canteen"
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};
	
	// Color Templates
	class ColorTemplate_Default : test_Specialist2_Armor {
		scope = 2;
		displayName = "[10th Test] Color Template Default";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"z\10thMod\optional\armor-test\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"z\10thMod\optional\armor-test\data\Armor_Colors\Default\armor.paa",
		};
	};
	class ColorTemplate_Silver : test_Specialist2_Armor {
		scope = 2;
		displayName = "[10th Test] Color Template Silver";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"z\10thMod\optional\armor-test\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"z\10thMod\optional\armor-test\data\Armor_Colors\Silver\armor.paa",
		};
	};
	class ColorTemplate_Tan : test_Specialist2_Armor {
		scope = 2;
		displayName = "[10th Test] Color Template Tan";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"z\10thMod\optional\armor-test\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"z\10thMod\optional\armor-test\data\Armor_Colors\Tan\armor.paa",
		};
	};

	// Helmets
	class Helmet_Black : test_CH252D_Base {
		scope = 2;
		displayName = "[10th Test] Helmet Black Visor";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] =
		{
			"z\10thMod\optional\armor-test\data\Helmet_Black\helmet_test.paa",
			"z\10thMod\optional\armor-test\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Helmet_Default : test_CH252D_Base {
		scope = 2;
		displayName = "[10th Test] Helmet Default Visor";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] =
		{
			"z\10thMod\optional\armor-test\data\Helmet_Default\helmet_test.paa",
			"z\10thMod\optional\armor-test\visors\defaultvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Helmet_Blue : test_CH252D_Base {
		scope = 2;
		displayName = "[10th Test] Helmet Blue Visor";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] =
		{
			"z\10thMod\optional\armor-test\data\Helmet_Blue\helmet_test.paa",
			"z\10thMod\optional\armor-test\visors\bluevisor.paa"
		};
		optreHUDStyle = "ODST_1";

	};
	class Helmet_Gold : test_CH252D_Base {
		scope = 2;
		displayName = "[10th Test] Helmet Gold Visor";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] =
		{
			"z\10thMod\optional\armor-test\data\Helmet_Gold\helmet_test.paa",
			"z\10thMod\optional\armor-test\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Helmet_Silver : test_CH252D_Base {
		scope = 2;
		displayName = "[10th Test] Helmet Silver Visor";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] =
		{
			"z\10thMod\optional\armor-test\data\Helmet_Silver\helmet_test.paa",
			"z\10thMod\optional\armor-test\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Helmet_Pilot : OPTRE_FC_VX19_Helmet {
		dlc = "OPTRE_FC";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th Test] Helmet Pilot V1";
		author = "Wolfe, Kodiak";
		hiddenSelectionsTextures[] = {
			"\Armor\data\Pilot_helmet_v1\10thpilot.paa",
			"\Armor\data\Pilot_helmet_v1\h3_pilothelmet_visor_CO"
		};
	};

	// Helmet Color Templates
	class ColorTemplate_Default_Helmet : test_CH252D_Base {
		scope = 2;
		displayName = "[10th Test] Color Template Default";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\optional\armor-test\data\Armor_Colors\Default\helmet.paa",
			"z\10thMod\optional\armor-test\visors\defaultvisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] = {
				"camo",
				"camo2",
			"H_Ghillie"
			};
			hiddenSelectionsTextures[] = {
				"z\10thMod\optional\armor-test\data\Armor_Colors\Default\helmet.paa",
				"z\10thMod\optional\armor-test\visors\defaultvisor.paa"
			};
		};
	};
	class ColorTemplate_Silver_Helmet : test_CH252D_Base {
		scope = 2;
		displayName = "[10th Test] Color Template Silver";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\optional\armor-test\data\Armor_Colors\Silver\helmet.paa",
			"z\10thMod\optional\armor-test\visors\defaultvisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] = {
				"camo",
				"camo2",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[] = {
				"z\10thMod\optional\armor-test\data\Armor_Colors\Silver\helmet.paa",
				"z\10thMod\optional\armor-test\visors\defaultvisor.paa"
			};
		};
	};
	class ColorTemplate_Tan_Helmet : test_CH252D_Base {
		scope = 2;
		displayName = "[10th Test] Color Template Tan";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\optional\armor-test\data\Armor_Colors\Tan\helmet.paa",
			"z\10thMod\optional\armor-test\visors\defaultvisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] = {
				"camo",
				"camo2",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[] = {
				"z\10thMod\optional\armor-test\data\Armor_Colors\Tan\helmet.paa",
				"z\10thMod\optional\armor-test\visors\defaultvisor.paa"
			};
		};
	};
};