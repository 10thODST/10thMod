class CfgPatches {
	class Tenthed_Armor_Base {
		author = "Silver, Kodiak, Crow, Akira";
		name = "10th ODST: Armor Base";
		requiredAddons[] = {
			"Tenthed_core",
			"OPTRE_Core"
		};
		weapons[] = {};
		units[] = {};
	};
};
class cfgWeapons {
	class VestItem;
	class HeadgearItem;
	class ItemInfo;

	class OPTRE_UNSC_M52D_Armor;
	class OPTRE_FC_M52B_Armor_Vest;

	class OPTRE_UNSC_CH252_Helmet_Base;
	class OPTRE_FC_VX19_Helmet;

	class OPTRE_UNSC_Dress_Hat; // why?

	// Base armor
	// Not yet implemented
	class Tenthed_Base_Armor : OPTRE_UNSC_M52D_Armor {
		scope = 0;
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
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
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

	// Template Armors
	class Tenthed_Specialist_Armor : OPTRE_UNSC_M52D_Armor {
		author = "Wolfe,Kodiak";
		scope = 2;
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
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
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
	class Tenthed_Specialist2_Armor : OPTRE_UNSC_M52D_Armor {
		author = "Wolfe,Kodiak";
		scope = 2;
		displayName = "[10th] M52D Body Armor (Specialist)";
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
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
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
	class Tenthed_Rifleman_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Rifleman)";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","APO_BR","APO_SMG","APO_Sniper","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","Tenthed_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
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
	class Tenthed_Rifleman_Knife_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Rifleman) No Knife";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","APO_BR","APO_Knife","APO_SMG","APO_Sniper","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","Tenthed_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };

		class ItemInfo : VestItem
		{
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
	class Tenthed_Demolitions_Knife_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Demolitions) No Knife";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Sniper","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","Tenthed_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
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
	class Tenthed_Demolitions_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Demolitions)";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Sniper","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","Tenthed_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
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
	class Tenthed_Light_Knife_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Light) No Knife";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","Tenthed_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
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
	class Tenthed_Light_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Light)";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_MGThigh","AP_AR","AP_Pack","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_SMG","APO_Sniper","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","Tenthed_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
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
	class Tenthed_Sniper_Knife_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Sniper) No Knife";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_SMG","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","Tenthed_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
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
	class Tenthed_Sniper_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor (Sniper)";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_MGThigh","AP_AR","AP_Pack","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_SMG","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","Tenthed_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
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
	class Tenthed_Sniper_Ghillie_Armor : OPTRE_UNSC_M52D_Armor {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D Body Armor Ghillie (Sniper)";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_MGThigh","AP_AR","AP_Pack","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_SMG","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","Tenthed_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
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
	class Tenthed_Alternate_Armor : OPTRE_UNSC_M52D_Armor
	{
		dlc = "OPTRE";
		scope = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Alternate'";
		hiddenSelections[] = { "camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_AR","AP_GL","AP_Pack","AP_Pistol","AP_Rounds","AP_SMG","AP_Sniper","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","customkit_scorch" };
		hiddenSelectionsTextures[] = { "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","Tenthed_Armor_Base\data\odst_legs_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa","optre_unsc_units\army\data\armor_odst_co.paa", };
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
	class Tenthed_Pilot_Vest : OPTRE_FC_M52B_Armor_Vest {
		dlc = "OPTRE";
		author = "Wolfe,Kodiak";
		scope = 2;
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
	class Tenthed_Pilot_Armored : OPTRE_FC_M52B_Armor_Vest {
		dlc = "OPTRE";
		author = "Wolfe,Kodiak";
		scope = 2;
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
	class Tenthed_CH252D_Base : OPTRE_UNSC_CH252_Helmet_Base {
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
		class ItemInfo : HeadgearItem
		{
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
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.1;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.1;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_CH252D_Base_dp : OPTRE_UNSC_CH252_Helmet_Base {
		dlc = "OPTRE";
		scope = 0;
		author = "Article 2 Studios";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
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
		class ItemInfo : HeadgearItem
		{
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
	// Is broken
	class Tenthed_Pilot_Helmet : OPTRE_FC_VX19_Helmet {
		dlc = "OPTRE_FC";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] VX19 Flight Helmet";
		author = "Wolfe, Kodiak";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Armor_Base\data\10thpilot.paa",
			"Tenthed_Armor_Base\data\h3_pilothelmet_visor_CO"
		};
		class ItemInfo : ItemInfo {
			uniformModel = "\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			mass = 40;
			passThrough = 0.1;
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

	// Named Enlisted Armors
	class SCT_10th_Enlisted_Rifleman_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Enlisted Rifleman'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Base\data\enlisted\enlistedarmor.paa"
		};
	};
	class SCT_10th_Enlisted_Light_Armor : Tenthed_Light_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Enlisted Light'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Base\data\enlisted\enlistedarmor.paa"
		};
	};
	class SCT_10th_Enlisted_Sniper_Armor : Tenthed_Sniper_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Enlisted Sniper'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Base\data\enlisted\enlistedarmor.paa"
		};
	};
	class SCT_10th_Enlisted_Demolitons_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Enlisted Demoliton'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Base\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Base\data\enlisted\enlistedarmor.paa"
		};
	};

	// Named Enlisted Helmets
	class SCT_10th_Enlisted_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Enlisted'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Armor_Base\data\enlisted\enlistedhelmet.paa",
			"Tenthed_Armor_Base\data\visors\defaultvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Enlisted_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Enlisted'";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Armor_Base\data\enlisted\enlistedhelmet.paa"
		};
	};
	class Tenthed_EnDress_Hat : OPTRE_UNSC_Dress_Hat {
		dlc = "OPTRE";
		scope = 1; // changed so it doesnt show in arsenal
		author = "Wolfe,Kodiak";
		displayName = "[10th] Enlisted Dress Uniform Cap";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Armor_Base\data\ncodresshat.paa"
		};
	};
	class SCT_10th_Green_Pilot_Camo : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] CH252D 'Green Pilot Odst Helmet'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Armor_Base\data\10thgreenpilothelment.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
		fir_visor = 1;
		fir_mask = 1;
		fir_hmd_helmet = 1;
	};
	class SCT_10th_Green_Pilot_Camo_dp : Tenthed_CH252D_Base_dp {
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
			"Tenthed_Armor_Base\data\10thgreenpilothelment.paa"
		};
	};

	// Default
	class SCT_10th_Default_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Default'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Armor_Base\data\base10th.paa",
			"Tenthed_Armor_Base\data\visors\defaultvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class SCT_10th_Default_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Default'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Armor_Base\data\base10th.paa",
		};
	};
};