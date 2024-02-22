class CfgPatches {
	class Tenthed_Armor_Misriah_Base {
		author = "Akira";
		name = "10th Armor Base - Misriah";
		requiredAddons[] = {
			"OPTRE_Core",
			"Tenthed_core",
			"MA_Armor"
		};
		weapons[] = {};
		units[] = {
			"Tenthed_M56S_BDU",
			"Tenthed_M56S_BDU_Green",
			"Tenthed_M56S_BDU_Desert",
			"Tenthed_M56S_BDU_WhiteSilver",
			"Tenthed_M56S_BDU_Grey"
		};
	};
};

class cfgWeapons {
	class HeadgearItem;
	class ItemCore;
	class InventoryItem_Base_F;
	class VestItem;
	class V_PlateCarrier1_rgr;
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class NVGoggles;
	class HitPoints;
	class Uniform_Base: ItemCore {
		class ItemInfo;
	};
	
	class Tenthed_Helmet_Base: ItemCore {
		scope=0;
		scopeArsenal=0;
		author="Misriah Armory";
		ace_hearing_protection=1;
		displayName="[10th] Base Helmet";
		model="";
		picture="";
		hiddenSelections[]= {
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadgearItem {
			uniformModel="";
			mass=40;
			modelSides[]={6};
			allowedSlots[]={801,901,701,605};
			hiddenSelections[]= {
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName="HitHead";
					armor = 30;
					passThrough = 0.1;
				};
				class Face {
					hitpointName="HitFace";
					armor = 30;
					passThrough = 0.1;
				};
				class Neck {
					hitpointName="HitNeck";
					armor = 30;
					passThrough = 0.1;
				};
			};
		};
	};

	class Tenthed_Vest_Base: V_PlateCarrier1_rgr {
		scope=0;
		scopeArsenal=0;
		author="Misriah Armory";
		displayName="[10th] Base Vest";
		model="";
		picture="";
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			"H3_Forearm_Left",
			"H3_Forearm_Right",
			"Reach_Forearm_Left",
			"Reach_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			"Reach_Pauldron_Left",
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
			"Thigh_Pouch",
			"H3_Armor_Upper",
			"H3_Armor_Lower",
			"Reach_Armor_Upper",
			"Reach_Armor_Lower",
			"Forearm_Vent_Left",
			"Forearm_Vent_Right",
			"Canisters"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem {
			vestType="Rebreather";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"Reach_Forearm_Left",
				"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Reach_Armor_Upper",
				"Reach_Armor_Lower",
				"Forearm_Vent_Left",
				"Forearm_Vent_Right",
				"Canisters"
			};
			hiddenSelectionsTextures[]= {
				"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
			uniformModel="";
			containerClass="Supply350";
			mass=20;
			passThrough=0.1;
			modelSides[]={6};
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

	// M56S-R (Base ODST Helmet)
	class Tenthed_M56SR_Helmet : Tenthed_Helmet_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56S-R Helmet";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_white_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		};
	};

	// M56-A "Air Assault" (Horus Helmet)
	class Tenthed_M56A_Helmet: Tenthed_Helmet_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56-A Helmet";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Helmets\AA\AA_Helm_co.paa",
			"MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
			//"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\AA\AA_Visor_Gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\AA\AA_Visor_Red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\AA\AA_Visor_White_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		};
	};

	//M56-G "Gungnir" (Anubis Helmet)
	class Tenthed_M56G_Helmet: Tenthed_Helmet_Base {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armory & aclarke064";
		displayName="[10th] M56-G Helmet";
		model="MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
		picture="MA_Armor\data\Icons\Gungnir_Helmet.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Helmets\Gungnir\Gungnir_co.paa",
			"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Blue_co.paa"
			//"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_White_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
		};
	};

	// M56-E "EOD" (Osiris Helmet)
	class Tenthed_M56E_Helmet: Tenthed_Helmet_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56-E Helmet";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="MA_Armor\data\Icons\EOD_Helm.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Helmets\EOD\EOD_Helmet_co.paa",
			"MA_Armor\data\Helmets\EOD\EOD_Visor_Blue_co.paa" // Blue Visor
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_Black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_Gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_Red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_White_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		};
	};
	// M65-S "Recon"
	class Tenthed_M56_Scout_Helmet: Tenthed_Helmet_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M65-S Helmet";
		model="MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
		picture="MA_Armor\data\Icons\H4_Scout_Helmet.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Helmets\H4_Scout\Scout_Helm_co.paa",
			"MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Blue_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
		};
	};

	// Rifleman - no radio
	class Tenthed_M56R_Vest_Rifleman : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Canisters"
			};
		};
	};
	// Rifleman - Radio right
	class Tenthed_M56R_Vest_Rifleman_ODST_radio_right : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (ODST Radio Shoulder)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Canisters"
			};
		};
	};
	// Rifleman - Radio right Green
	class Tenthed_M56R_Vest_Rifleman_radio_right : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Radio Shoulder)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Canisters"
			};
		};
	};

	class Tenthed_M56R_Recon_Vest: Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Recon)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower"
			};
		};
	};
	class Tenthed_M56R_Light_Vest: Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Light)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"Reach_Forearm_Left",
				"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Forearm_Vent_Left",
				"Forearm_Vent_Right"
			};
		};
	};
	class Tenthed_M56R_Medic_Vest: Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Medic)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Medic_Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Medical_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"H3_Armor_Upper",
				"H3_Armor_Lower"
			};
		};
	};
	class Tenthed_M56R_Vest_Sniper : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Sniper)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				//"Reach_Sniper_Pauldron_Left",
				//"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				"Canisters"
			};
		};
	};
	class Tenthed_M56R_Vest_CQB : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (CQB)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				//"Reach_CQB_Pauldron_Left",
				//"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				"Canisters"
			};
		};
	};
	
	// Enlisted Variants
	// Enlisted Rifleman - no radio
	class Tenthed_M56R_Vest_Enlisted_Rifleman : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor Enlisted (Rifleman)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"z\10thMod\addons\armor_misriah_base\data\enlisted\Reach_Armor_Upper_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"z\10thMod\addons\armor_misriah_base\data\enlisted\Sniper_Enlisted_co.paa",
			"z\10thMod\addons\armor_misriah_base\data\enlisted\CQB_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Canisters"
			};
		};
	};
	// Enlisted Rifleman - Radio right
	class Tenthed_M56R_Vest_Enlisted_Rifleman_radio_right : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor Enlisted (Rifleman - Radio)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"z\10thMod\addons\armor_misriah_base\data\enlisted\Reach_Armor_Upper_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"z\10thMod\addons\armor_misriah_base\data\enlisted\Sniper_Enlisted_co.paa",
			"z\10thMod\addons\armor_misriah_base\data\enlisted\CQB_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Canisters"
			};
		};
	};
	// Enlisted Sniper
	class Tenthed_M56R_Vest_Enlisted_Sniper : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor Enlisted (Sniper)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"z\10thMod\addons\armor_misriah_base\data\enlisted\Reach_Armor_Upper_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"z\10thMod\addons\armor_misriah_base\data\enlisted\Sniper_Enlisted_co.paa",
			"z\10thMod\addons\armor_misriah_base\data\enlisted\CQB_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				//"Reach_Sniper_Pauldron_Left",
				//"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				"Canisters"
			};
		};
	};
	// Enlisted CQB
	class Tenthed_M56R_Vest_Enlisted_CQB : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor Enlisted (CQB)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"z\10thMod\addons\armor_misriah_base\data\enlisted\Reach_Armor_Upper_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"z\10thMod\addons\armor_misriah_base\data\enlisted\Sniper_Enlisted_co.paa",
			"z\10thMod\addons\armor_misriah_base\data\enlisted\CQB_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				//"Reach_CQB_Pauldron_Left",
				//"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				"Canisters"
			};
		};
	};

	// Enlisted Helmet
	class Tenthed_M56SR_Enlisted_Helmet : Tenthed_M56SR_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] Enlisted M56S-R Helmet";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]= {
			"z\10thMod\addons\armor_misriah_base\data\enlisted\HR_ODST_Helmet_Enlisted_co.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		};
	};

	// Uniforms
	class Tenthed_M56S_BDU: U_B_CombatUniform_mcam {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[10th] M56S - Black";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="Tenthed_M56S_BDU_Base";
			containerClass="Supply150";
			mass=10;
			modelSides[]={6};
		};
	};

	class Tenthed_M56S_BDU_Green: U_B_CombatUniform_mcam {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[10th] M56S - Green";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="Tenthed_M56S_BDU_Base_Green";
			containerClass="Supply150";
			mass=10;
			modelSides[]={6};
		};
	};

	class Tenthed_M56S_BDU_Desert: U_B_CombatUniform_mcam {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[10th] M56S - Desert";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="Tenthed_M56S_BDU_Base_Desert";
			containerClass="Supply150";
			mass=10;
			modelSides[]={6};
		};
	};

	class Tenthed_M56S_BDU_WhiteSilver: U_B_CombatUniform_mcam {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[10th] M56S - Silver";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="Tenthed_M56S_BDU_Base_WhiteSilver";
			containerClass="Supply150";
			mass=10;
			modelSides[]={6};
		};
	};

	class Tenthed_M56S_BDU_Grey: U_B_CombatUniform_mcam {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[10th] M56S - Grey";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="Tenthed_M56S_BDU_Base_Grey";
			containerClass="Supply150";
			mass=10;
			modelSides[]={6};
		};
	};
};
class CfgVehicleCLasses {
	class Tenthed_Soldier_Class {
		dlc="Tenthed";
		displayName="Soldier";
		author="10th ODST - Akira";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
};
class CfgVehicles {
	class OPTRE_UNSC_Army_Soldier_WDL;
	class Tenthed_BDU_Base: OPTRE_UNSC_Army_Soldier_WDL {
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=4;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=8;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=4;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=4;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=4;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=0.30000001;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=2;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=2;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
			class ACE_HDBracket
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0;
				radius=1;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="HitHead";
			};
		};
	};

	class Tenthed_Uniform_Base: Tenthed_BDU_Base {
		scope=0;
		scopeCurator=0;
		side=1;
		author="Akira";
		UniformClass="";
		vehicleClass="";
		model="";
		weapons[]= {
			"Throw",
			"Put"
		};
		respawnWeapons[]= {
			"Throw",
			"Put"
		};
		Items[]= {
			"OPTRE_Biofoam"
		};
		RespawnItems[]= {
			"OPTRE_Biofoam"
		};
		magazines[]={};
		respawnMagazines[]={};
		hiddenSelections[]= {
			"camo"
		};
		hiddenSelectionsTextures[]={};
	};
	class Tenthed_M56S_BDU_Base: Tenthed_Uniform_Base {
		scope=1;
		UniformClass="Tenthed_M56S_BDU";
		vehicleClass="Tenthed_Soldier_Class";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Uniforms\H3_ODST\H3_Undersuit_co.paa"
		};
	};
	class Tenthed_M56S_BDU_Base_Green: Tenthed_Uniform_Base {
		scope=1;
		UniformClass="Tenthed_M56S_BDU";
		vehicleClass="Tenthed_Soldier_Class";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelectionsTextures[]=
		{
			"z\10thMod\addons\armor_misriah_base\data\uniforms\H3_Undersuit_green_co.paa"
		};
	};
	class Tenthed_M56S_BDU_Base_Desert: Tenthed_Uniform_Base {
		scope=1;
		UniformClass="Tenthed_M56S_BDU";
		vehicleClass="Tenthed_Soldier_Class";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelectionsTextures[]=
		{
			"z\10thMod\addons\armor_misriah_base\data\uniforms\H3_Undersuit_desert_co.paa"
		};
	};
	class Tenthed_M56S_BDU_Base_WhiteSilver: Tenthed_Uniform_Base {
		scope=1;
		UniformClass="Tenthed_M56S_BDU";
		vehicleClass="Tenthed_Soldier_Class";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelectionsTextures[]=
		{
			"z\10thMod\addons\armor_misriah_base\data\uniforms\H3_Undersuit_whitesilver_co.paa"
		};
	};
	class Tenthed_M56S_BDU_Base_Grey: Tenthed_Uniform_Base {
		scope=1;
		UniformClass="Tenthed_M56S_BDU";
		vehicleClass="Tenthed_Soldier_Class";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelectionsTextures[]=
		{
			"z\10thMod\addons\armor_misriah_base\data\uniforms\H3_Undersuit_grey_co.paa"
		};
	};

	// Backpacks
	class B_Kitbag_rgr;
	class Tenthed_Backpack_Base: B_Kitbag_rgr {
		scope=0;
		scopeArsenal=0;
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Items";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Backpacks";
		author="Misriah Armory";
		displayname="[10th] Base Backpack";
		model="";
		maximumLoad=250;
		mass=50;
		hiddenSelections[]= {
			"camo"
		};
	};
	// Base backpack
	class Tenthed_M56S_Rucksack: Tenthed_Backpack_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56S Rucksack";
		model="MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck.p3d";
		picture="MA_Armor\data\Icons\ODST_Rucksack.paa";
		maximumLoad=400;
		mass=50;
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa"
		};
	};
	// LR backpack
	class Tenthed_M56S_Rucksack_Radio: Tenthed_M56S_Rucksack {
		displayName="[10th] M56S Rucksack (ODST Radio)";
		maximumLoad = 350;
		mass = 50;
		hiddenSelections[]= {
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]= {
			"z\10thMod\addons\armor_misriah_base\data\backpacks\Enlisted_Ruck_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
		tf_hasLRradio=1;
	};
	// Medic Backpack
	class Tenthed_M56S_Rucksack_Medic: Tenthed_M56S_Rucksack {
		displayName="[10th] M56S Rucksack (Medic)";
		maximumLoad = 400;
		mass = 40;
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]= {
			"z\10thMod\addons\armor_misriah_base\data\backpacks\Medic_Ruck_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
		tf_hasLRradio=1;
	};
	class Tenthed_M56S_Rucksack_Medic_Radio: Tenthed_M56S_Rucksack_Medic {
		displayName="[10th] M56S Rucksack (Medic - Radio)";
		hiddenSelections[]= {
			"camo1",
			"camo2",
			//"Radio"
		};
		hiddenSelectionsTextures[]= {
			"z\10thMod\addons\armor_misriah_base\data\backpacks\Medic_Ruck_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa"
		};
	};

	// AR-CB Rucksack
	class B_Carryall_oli;
	class Tenthed_ARCB: B_Carryall_oli {
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[10th] AR-CB Rucksack";
		model="\a3\weapons_f\empty.p3d";
		author="Akira";
		maximumLoad=150;
		mass=50;

		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
		tf_hasLRradio=1;
	};

};