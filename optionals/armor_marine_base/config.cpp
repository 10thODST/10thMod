class cfgPatches {
	class Tenthed_Armor_Marine_Base {
		author = "Akira";
		name = "10th ODST: Marine Armor Base";
		requiredAddons[] = {
			"OPTRE_Core",
			"MA_Armor"
		};
		weapons[] = {};
		units[] = {};
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
	class ItemInfo;
	class Uniform_Base: ItemCore {
		class ItemInfo;
	};

	// Armor
	class Marine_Pouches_Base;
	class Tenthed_Marine_Pouches_Var0: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Armor (No Pouches)";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			"ChestPMRight",
			"ChestPouch",
			"ChestRadio",
			"LegLeft",
			"LegRight",
			"StomachPouch",
			"TorsoPM",
			"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				"ChestPMRight",
				"ChestPouch",
				"ChestRadio",
				"LegLeft",
				"LegRight",
				"StomachPouch",
				"TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_Marine_Pouches_Var1: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches #1";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			"ChestPMRight",
			//      "ChestPouch",
			"ChestRadio",
			"LegLeft",
			"LegRight",
			"StomachPouch",
			"TorsoPM",
			//    "TorsoPMLeft",
			//    "TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			//    "WaistPLeft",
			//    "WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				"ChestPMRight",
				//      "ChestPouch",
				"ChestRadio",
				"LegLeft",
				"LegRight",
				"StomachPouch",
				"TorsoPM",
				//    "TorsoPMLeft",
				//    "TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				//    "WaistPLeft",
				//    "WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_Marine_Pouches_Var2: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches #2";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			"ChestPMRight",
			//      "ChestPouch",
			"ChestRadio",
			"LegLeft",
			"LegRight",
			"StomachPouch",
			//      "TorsoPM",
			"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				"ChestPMRight",
				//      "ChestPouch",
				"ChestRadio",
				"LegLeft",
				"LegRight",
				"StomachPouch",
				//      "TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_Marine_Pouches_Var3: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches #3";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			"ChestPMRight",
			"ChestPouch",
			"ChestRadio",
			"LegLeft",
			"LegRight",
			"StomachPouch",
			"TorsoPM",
			"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			//       "WaistPLeft",
			//       "WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				"ChestPMRight",
				"ChestPouch",
				"ChestRadio",
				"LegLeft",
				"LegRight",
				"StomachPouch",
				"TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				//      "WaistPLeft",
				//      "WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_Marine_Pouches_Var4: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches #4";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			"ChestPMRight",
			"ChestPouch",
			"ChestRadio",
			"LegLeft",
			"LegRight",
			"StomachPouch",
			//      "TorsoPM",
			"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				"ChestPMRight",
				"ChestPouch",
				"ChestRadio",
				"LegLeft",
				"LegRight",
				"StomachPouch",
				//      "TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};

	class Tenthed_MA_Marine_Pouches_Rifleman_Light_A: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Rifleman L-A";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			"LegLeft",
			"LegRight",
			"StomachPouch",
			//"TorsoPM",
			"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			//"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				"ChestPouch",
				//"ChestRadio",
				"LegLeft",
				"LegRight",
				"StomachPouch",
				//"TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				//"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Rifleman_Light_B: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Rifleman L-B";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			"LegLeft",
			"LegRight",
			"StomachPouch",
			"TorsoPM",
			"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			//"WaistPLeft",
			//"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				"ChestPouch",
				//"ChestRadio",
				"LegLeft",
				"LegRight",
				"StomachPouch",
				"TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				//"WaistPLeft",
				//"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Rifleman_Light_C: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Rifleman L-C";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			"ChestPMRight",
			"ChestPouch",
			"ChestRadio",
			"LegLeft",
			"LegRight",
			//"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			//"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			//"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				"ChestPMRight",
				"ChestPouch",
				"ChestRadio",
				"LegLeft",
				"LegRight",
				//"StomachPouch",
				"TorsoPM",
				//"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				//"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				//"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Rifleman_Light_D: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Rifleman L-D";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			"ChestPMRight",
			"ChestPouch",
			"ChestRadio",
			"LegLeft",
			"LegRight",
			//"StomachPouch",
			"TorsoPM",
			"TorsoPMLeft",
			//"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			//"WaistRRight",
			//"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				"ChestPMRight",
				"ChestPouch",
				"ChestRadio",
				"LegLeft",
				"LegRight",
				//"StomachPouch",
				"TorsoPM",
				"TorsoPMLeft",
				//"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				//"WaistRRight",
				//"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Rifleman_Medium_A: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Rifleman M-A";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			"LegLeft",
			//"LegRight",
			//"StomachPouch",
			"TorsoPM",
			"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			//"WaistBack",
			"WaistGLeft",
			//"WaistGRight",
			//"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				"ChestPouch",
				//"ChestRadio",
				"LegLeft",
				//"LegRight",
				//"StomachPouch",
				"TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				//"WaistBack",
				"WaistGLeft",
				//"WaistGRight",
				//"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Rifleman_Medium_B: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Rifleman M-B";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			//"ChestPMLeft",
			"ChestPMRight",
			"ChestPouch",
			"ChestRadio",
			"LegLeft",
			//"LegRight",
			//"StomachPouch",
			"TorsoPM",
			"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			//"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			//"WaistPRight",
			//"WaistRLeft",
			"WaistRRight",
			//"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				//"ChestPMLeft",
				"ChestPMRight",
				"ChestPouch",
				"ChestRadio",
				"LegLeft",
				//"LegRight",
				//"StomachPouch",
				"TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				//"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				//"WaistPRight",
				//"WaistRLeft",
				"WaistRRight",
				//"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Rifleman_Medium_C: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Rifleman M-C";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			"ChestPMRight",
			"ChestPouch",
			"ChestRadio",
			//"LegLeft",
			"LegRight",
			//"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			//"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			//"WaistPRight",
			//"WaistRLeft",
			"WaistRRight",
			//"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				//"ChestPMLeft",
				"ChestPMRight",
				//"ChestPouch",
				"ChestRadio",
				"LegLeft",
				//"LegRight",
				//"StomachPouch",
				"TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				//"WaistPRight",
				//"WaistRLeft",
				"WaistRRight",
				//"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Rifleman_Medium_D: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Rifleman M-D";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			//"ChestPouch",
			//"ChestRadio",
			//"LegLeft",
			"LegRight",
			//"StomachPouch",
			"TorsoPM",
			"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			//"WaistBack",
			"WaistGLeft",
			//"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			//"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				//"ChestPouch",
				//"ChestRadio",
				//"LegLeft",
				"LegRight",
				//"StomachPouch",
				"TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				//"WaistBack",
				"WaistGLeft",
				//"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				//"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Rifleman_Heavy_A: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Rifleman H-A";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			//"LegLeft",
			//"LegRight",
			//"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			//"WaistBack",
			//"WaistGLeft",
			"WaistGRight",
			//"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				"ChestPouch",
				//"ChestRadio",
				//"LegLeft",
				//"LegRight",
				//"StomachPouch",
				"TorsoPM",
				//"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				//"WaistBack",
				//"WaistGLeft",
				"WaistGRight",
				//"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Rifleman_Heavy_B: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Rifleman H-B";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			//"ChestPouch",
			"ChestRadio",
			//"LegLeft",
			//"LegRight",
			"StomachPouch",
			//"TorsoPM",
			//"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			//"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			//"WaistPLeft",
			//"WaistPRight",
			//"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				//"ChestPouch",
				"ChestRadio",
				//"LegLeft",
				//"LegRight",
				"StomachPouch",
				//"TorsoPM",
				//"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				//"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				//"WaistPLeft",
				//"WaistPRight",
				//"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Rifleman_Heavy_C: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Rifleman H-C";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			//"LegLeft",
			//"LegRight",
			"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			//"TorsoPMRight",
			//"TorsoPouch", 
			//"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			//"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			//"WaistSRight"    
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				"ChestPMRight",
				"ChestPouch",
				//"ChestRadio",
				//"LegLeft",
				//"LegRight",
				"StomachPouch",
				"TorsoPM",
				//"TorsoPMLeft",
				//"TorsoPMRight",
				//"TorsoPouch", 
				//"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				//"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				//"WaistSRight"   
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Rifleman_Heavy_D: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Rifleman H-D";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			//"LegLeft",
			//"LegRight",
			"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			"TorsoPMRight",
			//"TorsoPouch", 
			//"WaistBack",
			//"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			//"WaistSRight"    
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				"ChestPouch",
				//"ChestRadio",
				//"LegLeft",
				//"LegRight",
				"StomachPouch",
				"TorsoPM",
				//"TorsoPMLeft",
				"TorsoPMRight",
				//"TorsoPouch", 
				//"WaistBack",
				//"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				//"WaistSRight" 
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Medic_Light_A: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Medic L-A";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			//"LegLeft",
			"LegRight",
			"StomachPouch",
			//"TorsoPM",
			"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			//"WaistSRight"   
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				"ChestPouch",
				//"ChestRadio",
				//"LegLeft",
				"LegRight",
				"StomachPouch",
				//"TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				//"WaistSRight"   
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Medic_Light_B: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Medic L-B";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			"LegLeft",
			//"LegRight",
			"StomachPouch",
			//"TorsoPM",
			//"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			//"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa" //WaistSRight     
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				"ChestPMRight",
				"ChestPouch",
				//"ChestRadio",
				"LegLeft",
				//"LegRight",
				"StomachPouch",
				//"TorsoPM",
				//"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				//"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa" //WaistSRight   
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Medic_Medium_A: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Medic M-A";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			//"LegLeft",
			"LegRight",
			"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			"TorsoPMRight",
			//"TorsoPouch", 
			//"WaistBack",
			//"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			//"WaistSRight"    
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa" //WaistSRight        
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				//"ChestPMLeft",
				"ChestPMRight",
				"ChestPouch",
				"ChestRadio",
				"LegLeft",
				//"LegRight",
				//"StomachPouch",
				"TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				//"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				//"WaistPRight",
				//"WaistRLeft",
				"WaistRRight",
				//"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa" //WaistSRight      
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Medic_Medium_B: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Medic M-B";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			//"ChestPMLeft",
			"ChestPMRight",
			//"ChestPouch",
			"ChestRadio",
			"LegLeft",
			//"LegRight",
			//"StomachPouch",
			"TorsoPM",
			"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			//"WaistPRight",
			"WaistRLeft",
			//"WaistRRight",
			//"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa" //WaistSRight            
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				//"ChestPMLeft",
				"ChestPMRight",
				//"ChestPouch",
				"ChestRadio",
				"LegLeft",
				//"LegRight",
				//"StomachPouch",
				"TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				//"WaistPRight",
				"WaistRLeft",
				//"WaistRRight",
				//"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa" //WaistSRight        
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Medic_Heavy_A: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Medic H-A";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			//"LegLeft",
			//"LegRight",
			"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			"TorsoPMRight",
			//"TorsoPouch", 
			//"WaistBack",
			//"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			//"WaistSRight"    
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa" //WaistSRight              
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				"ChestPouch",
				//"ChestRadio",
				//"LegLeft",
				//"LegRight",
				"StomachPouch",
				"TorsoPM",
				//"TorsoPMLeft",
				"TorsoPMRight",
				//"TorsoPouch", 
				//"WaistBack",
				//"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				//"WaistSRight"    
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa" //WaistSRight         
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Medic_Heavy_B: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Medic H-B";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			//"LegLeft",
			//"LegRight",
			"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			//"TorsoPMRight",
			//"TorsoPouch", 
			//"WaistBack",
			"WaistGLeft",
			//"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			//"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa" //WaistSRight          
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				"ChestPouch",
				//"ChestRadio",
				//"LegLeft",
				//"LegRight",
				"StomachPouch",
				"TorsoPM",
				//"TorsoPMLeft",
				//"TorsoPMRight",
				//"TorsoPouch", 
				//"WaistBack",
				"WaistGLeft",
				//"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				//"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa" //WaistSRight     
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};

	class Tenthed_MA_Marine_Pouches_Engineer_Light_A: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Engineer L-A";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			//"LegLeft",
			"LegRight",
			"StomachPouch",
			//"TorsoPM",
			"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			//"WaistSRight"   
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				"ChestPouch",
				//"ChestRadio",
				//"LegLeft",
				"LegRight",
				"StomachPouch",
				//"TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				//"WaistSRight"   
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Engineer_Light_B: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Engineer L-B";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			"LegLeft",
			//"LegRight",
			"StomachPouch",
			//"TorsoPM",
			//"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			//"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight  
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				"ChestPMRight",
				"ChestPouch",
				//"ChestRadio",
				"LegLeft",
				//"LegRight",
				"StomachPouch",
				//"TorsoPM",
				//"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				//"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight 
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Engineer_Medium_A: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Engineer M-A";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			//"LegLeft",
			"LegRight",
			"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			"TorsoPMRight",
			//"TorsoPouch", 
			//"WaistBack",
			//"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			//"WaistSRight"    
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight 
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				//"ChestPMLeft",
				"ChestPMRight",
				"ChestPouch",
				"ChestRadio",
				"LegLeft",
				//"LegRight",
				//"StomachPouch",
				"TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				//"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				//"WaistPRight",
				//"WaistRLeft",
				"WaistRRight",
				//"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Engineer_Medium_B: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Engineer M-B";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			//"ChestPouch",
			//"ChestRadio",
			"LegLeft",
			//"LegRight",
			"StomachPouch",
			//"TorsoPM",
			"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			//"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			//"WaistPLeft",
			//"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			//"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight  
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				//"ChestPouch",
				//"ChestRadio",
				"LegLeft",
				//"LegRight",
				"StomachPouch",
				//"TorsoPM",
				"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				//"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				//"WaistPLeft",
				//"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				//"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight 
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Engineer_Heavy_A: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Engineer H-A";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			//"LegLeft",
			//"LegRight",
			"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			"TorsoPMRight",
			//"TorsoPouch", 
			//"WaistBack",
			//"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			//"WaistSRight"    
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight      
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				"ChestPouch",
				//"ChestRadio",
				//"LegLeft",
				//"LegRight",
				"StomachPouch",
				"TorsoPM",
				//"TorsoPMLeft",
				"TorsoPMRight",
				//"TorsoPouch", 
				//"WaistBack",
				//"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				//"WaistSRight"     
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Engineer_Heavy_B: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Engineer H-B";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			"ChestPouch",
			"ChestRadio",
			//"LegLeft",
			//"LegRight",
			//"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			//"TorsoPMRight",
			"TorsoPouch",
			//"WaistBack",
			"WaistGLeft",
			//"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			//"WaistRRight",
			//"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				"ChestPouch",
				"ChestRadio",
				//"LegLeft",
				//"LegRight",
				//"StomachPouch",
				"TorsoPM",
				//"TorsoPMLeft",
				//"TorsoPMRight",
				"TorsoPouch",
				//"WaistBack",
				"WaistGLeft",
				//"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				//"WaistRRight",
				//"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};

	class Tenthed_MA_Marine_Pouches_Teamleader_Light_A: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Teamleader L-A";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			"ChestPMRight",
			//"ChestPouch",
			//"ChestRadio",
			"LegLeft",
			"LegRight",
			//"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			//"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			//"WaistSRight"   
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa" //WaistSRight
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				"ChestPMRight",
				//"ChestPouch",
				//"ChestRadio",
				"LegLeft",
				"LegRight",
				//"StomachPouch",
				"TorsoPM",
				//"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				//"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				//"WaistSRight"  
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa" //WaistSRight
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Teamleader_Light_B: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Teamleader L-B";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			"ChestPMRight",
			//"ChestPouch",
			//"ChestRadio",
			"LegLeft",
			"LegRight",
			"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			//"WaistPLeft",
			//"WaistPRight",
			"WaistRLeft",
			//"WaistRRight",
			//"WaistSLeft",
			//"WaistSRight"   
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa" //WaistSRight
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				"ChestPMRight",
				//"ChestPouch",
				//"ChestRadio",
				"LegLeft",
				"LegRight",
				"StomachPouch",
				"TorsoPM",
				//"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				//"WaistPLeft",
				//"WaistPRight",
				"WaistRLeft",
				//"WaistRRight",
				//"WaistSLeft",
				//"WaistSRight"   
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Teamleader_Medium_A: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Teamleader M-A";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			//"ChestPouch",
			//"ChestRadio",
			//"LegLeft",
			"LegRight",
			//"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			"TorsoPMRight",
			"TorsoPouch",
			//"WaistBack",
			//"WaistGLeft",
			//"WaistGRight",
			//"WaistPLeft",
			//"WaistPRight",
			//"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			"WaistSRight"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight 
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				//"ChestPouch",
				//"ChestRadio",
				//"LegLeft",
				"LegRight",
				//"StomachPouch",
				"TorsoPM",
				//"TorsoPMLeft",
				"TorsoPMRight",
				"TorsoPouch",
				//"WaistBack",
				//"WaistGLeft",
				//"WaistGRight",
				//"WaistPLeft",
				//"WaistPRight",
				//"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				"WaistSRight"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight 
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Teamleader_Medium_B: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Teamleader M-B";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			"ChestPouch",
			"ChestRadio",
			//"LegLeft",
			"LegRight",
			//"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			"TorsoPMRight",
			//"TorsoPouch", 
			//"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			"WaistPLeft",
			//"WaistPRight",
			//"WaistRLeft",
			//"WaistRRight",
			//"WaistSLeft",
			//"WaistSRight" 
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight  
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				"ChestPouch",
				"ChestRadio",
				//"LegLeft",
				"LegRight",
				//"StomachPouch",
				"TorsoPM",
				//"TorsoPMLeft",
				"TorsoPMRight",
				//"TorsoPouch", 
				//"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				//"WaistPRight",
				//"WaistRLeft",
				//"WaistRRight",
				//"WaistSLeft",
				//"WaistSRight" 
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight  
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Teamleader_Heavy_A: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Teamleader H-A";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"ChestPMLeft",
			//"ChestPMRight",
			"ChestPouch",
			//"ChestRadio",
			//"LegLeft",
			//"LegRight",
			//"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			//"TorsoPMRight",
			//"TorsoPouch", 
			//"WaistBack",
			"WaistGLeft",
			"WaistGRight",
			//"WaistPLeft",
			//"WaistPRight",
			"WaistRLeft",
			//"WaistRRight",
			//"WaistSLeft",
			//"WaistSRight"     
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa" //WaistSRight      
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				"ChestPMLeft",
				//"ChestPMRight",
				"ChestPouch",
				//"ChestRadio",
				//"LegLeft",
				//"LegRight",
				//"StomachPouch",
				"TorsoPM",
				//"TorsoPMLeft",
				//"TorsoPMRight",
				//"TorsoPouch", 
				//"WaistBack",
				"WaistGLeft",
				"WaistGRight",
				//"WaistPLeft",
				//"WaistPRight",
				"WaistRLeft",
				//"WaistRRight",
				//"WaistSLeft",
				//"WaistSRight"      
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa" //WaistSRight      
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class Tenthed_MA_Marine_Pouches_Teamleader_Heavy_B: Marine_Pouches_Base {
		scope = 2;
		scopeArsenal = 2;
		author = "Misriah Armory";
		displayName = "[10th] Marine Pouches/Teamleader H-B";
		model = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
		picture = "";
		hiddenSelections[] = {
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			//"ChestPMLeft",
			//"ChestPMRight",
			//"ChestPouch",
			"ChestRadio",
			//"LegLeft",
			//"LegRight",
			//"StomachPouch",
			"TorsoPM",
			//"TorsoPMLeft",
			//"TorsoPMRight",
			"TorsoPouch",
			//"WaistBack",
			//"WaistGLeft",
			"WaistGRight",
			//"WaistPLeft",
			//"WaistPRight",
			//"WaistRLeft",
			//"WaistRRight",
			"WaistSLeft",
			//"WaistSRight"  
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //TorsoPouch
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
			"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa" //WaistSRight
		};
		class ItemInfo: VestItem {
			vestType = "Rebreather";
			hiddenSelections[] = {
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
				"camo11",
				"camo12",
				"camo13",
				"camo14",
				"camo15",
				"camo16",
				"camo17",
				"camo18",
				"camo19",
				"camo20",
				//"ChestPMLeft",
				//"ChestPMRight",
				//"ChestPouch",
				"ChestRadio",
				//"LegLeft",
				//"LegRight",
				//"StomachPouch",
				"TorsoPM",
				//"TorsoPMLeft",
				//"TorsoPMRight",
				"TorsoPouch",
				//"WaistBack",
				//"WaistGLeft",
				"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				//"WaistRLeft",
				//"WaistRRight",
				"WaistSLeft",
				//"WaistSRight"  
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Eng_TrooperExtras_B_CO.paa", //ChestPouch
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //ChestRadio
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPM
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //TorsoPouch
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRLeft
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa", //WaistRRight
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_Med_TrooperExtras_B_CO.paa", //WaistSLeft
				"MA_Armor\data\Vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa" //WaistSRight
			};
			uniformModel = "MA_Armor\data\Vests\Marine_Pouches\Marine_Pouches.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = {
				6
			};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.5;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.5;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Tenthed_Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};

	// Helmets
	class MA_Helmet_Base;
	class Tenthed_CH252_Helmet_Base: MA_Helmet_Base {
		scope = 1;
		scopeArsenal = 1;
		displayName = "[10th] CH252 Helmet";
		model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
		picture = ""; //TODO: Update this
		hiddenSelections[] = {
			"Camo1", // Helmet
			"Camo2", // NVG Mount
			"Camo3", // Helmet Strap
			"Camo4", // Eye Piece
			"Camo5", // Eye Piece Glass
			"Camo6", // Visor Glasses
			"Helmet",
			"NVGMount",
			"EyePiece",
			"EyePieceGlass",
			"VisorGlasses"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
		};
		class ItemInfo: HeadgearItem {
			uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet
				"camo4", // Eye Piece
				"camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				"Helmet",
				"NVGMount",
				"EyePiece",
				"EyePieceGlass",
				"VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
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
	/// Base Camo
	class Tenthed_CH252_Helmet_Standard: Tenthed_CH252_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] CH252 Helmet";
		model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
		picture = ""; //TODO: Update this
		hiddenSelections[] = {
			"camo1", // Helmet
			"camo2", // NVG Mount
			"camo3", // Helmet Strap
			"camo4", // Eye Piece
			"camo5", // Eye Piece Glass
			"camo6", // Visor Glasses
			//    "Helmet",
			//    "NVGMount",
			"EyePiece",
			"EyePieceGlass",
			"VisorGlasses"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet
				"camo4", // Eye Piece
				"camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				//    "Helmet",
				//    "NVGMount",
				"EyePiece",
				"EyePieceGlass",
				"VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
		};
	};
	class Tenthed_CH252_Helmet_EyePiece: Tenthed_CH252_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] CH252 Helmet (Eyepiece)";
		model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
		picture = ""; //TODO: Update this
		hiddenSelections[] = {
			"camo1", // Helmet
			"camo2", // NVG Mount
			"camo3", // Helmet Strap
			//  "camo4", // Eye Piece
			//  "camo5", // Eye Piece Glass
			"camo6", // Visor Glasses
			//  "Helmet",
			//  "NVGMount",
			"EyePiece",
			"EyePieceGlass",
			"VisorGlasses"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet
				"camo4", // Eye Piece
				"camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				//  "Helmet",
				//  "NVGMount",
				//  "EyePiece",
				//  "EyePieceGlass",
				"VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
		};
	};
	class Tenthed_CH252_Helmet_VisorGlasses: Tenthed_CH252_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] CH252 Helmet (Glasses)";
		model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
		picture = ""; //TODO: Update this
		hiddenSelections[] = {
			"camo1", // Helmet
			"camo2", // NVG Mount
			"camo3", // Helmet Strap
			"camo4", // Eye Piece
			"camo5", // Eye Piece Glass
			"camo6", // Visor Glasses
			//  "Helmet",
			//  "NVGMount",
			"EyePiece",
			"EyePieceGlass",
			//  "VisorGlasses"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet Strap
				"camo4", // Eye Piece
				"camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				//  "Helmet",
				//  "NVGMount",
				"EyePiece",
				"EyePieceGlass",
				//  "VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Base_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
		};
	};
	/// Brown Camo
	class Tenthed_CH252_Helmet_Brown: Tenthed_CH252_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] CH252 Helmet (B)";
		model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
		picture = ""; //TODO: Update this
		hiddenSelections[] = {
			"camo1", // Helmet
			"camo2", // NVG Mount
			"camo3", // Helmet Strap
			"camo4", // Eye Piece
			"camo5", // Eye Piece Glass
			"camo6", // Visor Glasses
			//    "Helmet",
			//    "NVGMount",
			"EyePiece",
			"EyePieceGlass",
			"VisorGlasses"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet
				"camo4", // Eye Piece
				"camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				//    "Helmet",
				//    "NVGMount",
				"EyePiece",
				"EyePieceGlass",
				"VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
		};
	};
	class Tenthed_CH252_Helmet_EyePiece_Brown: Tenthed_CH252_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] CH252 Helmet (Eyepiece) (B)";
		model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
		picture = ""; //TODO: Update this
		hiddenSelections[] = {
			"camo1", // Helmet
			"camo2", // NVG Mount
			"camo3", // Helmet Strap
			//  "camo4", // Eye Piece
			//  "camo5", // Eye Piece Glass
			"camo6", // Visor Glasses
			//  "Helmet",
			//  "NVGMount",
			//    "EyePiece",
			//    "EyePieceGlass",
			"VisorGlasses"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet
				"camo4", // Eye Piece
				"camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				//  "Helmet",
				//  "NVGMount",
				//  "EyePiece",
				//  "EyePieceGlass",
				"VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
		};
	};
	class Tenthed_CH252_Helmet_VisorGlasses_Brown: Tenthed_CH252_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] CH252 Helmet (Glasses) (B)";
		model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
		picture = ""; //TODO: Update this
		hiddenSelections[] = {
			"camo1", // Helmet
			"camo2", // NVG Mount
			"camo3", // Helmet Strap
			"camo4", // Eye Piece
			"camo5", // Eye Piece Glass
			"camo6", // Visor Glasses
			//  "Helmet",
			//  "NVGMount",
			"EyePiece",
			"EyePieceGlass",
			//  "VisorGlasses"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet
				"camo4", // Eye Piece
				"camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				//  "Helmet",
				//  "NVGMount",
				"EyePiece",
				"EyePieceGlass",
				//  "VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
		};
	};
	/// Green Camo
	class Tenthed_CH252_Helmet_Green: Tenthed_CH252_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] CH252 Helmet (G)";
		model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
		picture = ""; //TODO: Update this
		hiddenSelections[] = {
			"camo1", // Helmet
			"camo2", // NVG Mount
			"camo3", // Helmet Strap
			"camo4", // Eye Piece
			"camo5", // Eye Piece Glass
			"camo6", // Visor Glasses
			//    "Helmet",
			//    "NVGMount",
			"EyePiece",
			"EyePieceGlass",
			"VisorGlasses"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet Strap
				"camo4", // Eye Piece
				"camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				//    "Helmet",
				//    "NVGMount",
				"EyePiece",
				"EyePieceGlass",
				"VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
		};
	};
	class Tenthed_CH252_Helmet_EyePiece_Green: Tenthed_CH252_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] CH252 Helmet (Eyepiece) (G)";
		model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
		picture = ""; //TODO: Update this
		hiddenSelections[] = {
			"camo1", // Helmet
			"camo2", // NVG Mount
			"camo3", // Helmet Strap
			//  "camo4", // Eye Piece
			//  "camo5", // Eye Piece Glass
			"camo6", // Visor Glasses
			//  "Helmet",
			//  "NVGMount",
			//    "EyePiece",
			//    "EyePieceGlass",
			"VisorGlasses"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet
				"camo4", // Eye Piece
				"camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				//    "Helmet",
				//    "NVGMount",
				//    "EyePiece",
				//    "EyePieceGlass",
				"VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
		};
	};
	class Tenthed_CH252_Helmet_VisorGlasses_Green: Tenthed_CH252_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] CH252 Helmet (Glasses) (G)";
		model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
		picture = ""; //TODO: Update this
		hiddenSelections[] = {
			"camo1", // Helmet
			"camo2", // NVG Mount
			"camo3", // Helmet Strap
			"camo4", // Eye Piece
			"camo5", // Eye Piece Glass
			"camo6", // Visor Glasses
			//  "Helmet",
			//  "NVGMount",
			"EyePiece",
			"EyePieceGlass",
			//  "VisorGlasses"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet Strap
				"camo4", // Eye Piece
				"camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				//    "Helmet",
				//    "NVGMount",
				"EyePiece",
				"EyePieceGlass",
				//    "VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
		};
		/// Tan Camo
		class Tenthed_CH252_Helmet_Tan: Tenthed_CH252_Helmet_Base {
			scope = 2;
			scopeArsenal = 2;
			displayName = "[10th] CH252 Helmet (T)";
			model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			picture = ""; //TODO: Update this
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet Strap
				"camo4", // Eye Piece
				"camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				//    "Helmet",
				//    "NVGMount",
				"EyePiece",
				"EyePieceGlass",
				"VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
			class ItemInfo: ItemInfo {
				uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
				hiddenSelections[] = {
					"camo1", // Helmet
					"camo2", // NVG Mount
					"camo3", // Helmet Strap
					"camo4", // Eye Piece
					"camo5", // Eye Piece Glass
					"camo6", // Visor Glasses
					//    "Helmet",
					//    "NVGMount",
					"EyePiece",
					"EyePieceGlass",
					"VisorGlasses"
				};
				hiddenSelectionsTextures[] = {
					"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
					"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
					"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
					"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
					"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
					"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
				};
			};
		};
		class Tenthed_CH252_Helmet_EyePiece_Tan: Tenthed_CH252_Helmet_Base {
			scope = 2;
			scopeArsenal = 2;
			displayName = "[10th] CH252 Helmet (Eyepiece) (T)";
			model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			picture = ""; //TODO: Update this
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet Strap
				//  "camo4", // Eye Piece
				//  "camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				//  "Helmet",
				//  "NVGMount",
				//    "EyePiece",
				//    "EyePieceGlass",
				"VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
			class ItemInfo: ItemInfo {
				uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
				hiddenSelections[] = {
					"camo1", // Helmet
					"camo2", // NVG Mount
					"camo3", // Helmet Strap
					"camo4", // Eye Piece
					"camo5", // Eye Piece Glass
					"camo6", // Visor Glasses
					//    "Helmet",
					//    "NVGMount",
					//    "EyePiece",
					//    "EyePieceGlass",
					"VisorGlasses"
				};
				hiddenSelectionsTextures[] = {
					"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
					"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
					"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
					"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
					"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
					"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
				};
			};
		};
		class Tenthed_CH252_Helmet_VisorGlasses_Tan: Tenthed_CH252_Helmet_Base {
			scope = 2;
			scopeArsenal = 2;
			displayName = "[10th] CH252 Helmet (Glasses) (T)";
			model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			picture = ""; //TODO: Update this
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet Strap
				"camo4", // Eye Piece
				"camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				//  "Helmet",
				//  "NVGMount",
				"EyePiece",
				"EyePieceGlass",
				//  "VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
			class ItemInfo: ItemInfo {
				uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
				hiddenSelections[] = {
					"camo1", // Helmet
					"camo2", // NVG Mount
					"camo3", // Helmet Strap
					"camo4", // Eye Piece
					"camo5", // Eye Piece Glass
					"camo6", // Visor Glasses
					//    "Helmet",
					//    "NVGMount",
					"EyePiece",
					"EyePieceGlass",
					//    "VisorGlasses"
				};
				hiddenSelectionsTextures[] = {
					"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
					"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
					"MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
					"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
					"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
					"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
				};
			};
		};
	};
	/// White Camo
	class Tenthed_CH252_Helmet_White: Tenthed_CH252_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] CH252 Helmet (W)";
		model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
		picture = ""; //TODO: Update this
		hiddenSelections[] = {
			"camo1", // Helmet
			"camo2", // NVG Mount
			"camo3", // Helmet Strap
			"camo4", // Eye Piece
			"camo5", // Eye Piece Glass
			"camo6", // Visor Glasses
			//    "Helmet",
			//    "NVGMount",
			"EyePiece",
			"EyePieceGlass",
			"VisorGlasses"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet Strap
				"camo4", // Eye Piece
				"camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				//    "Helmet",
				//    "NVGMount",
				"EyePiece",
				"EyePieceGlass",
				"VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
		};
	};
	class Tenthed_CH252_Helmet_EyePiece_White: Tenthed_CH252_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] CH252 Helmet (Eyepiece) (W)";
		model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
		picture = ""; //TODO: Update this
		hiddenSelections[] = {
			"camo1", // Helmet
			"camo2", // NVG Mount
			"camo3", // Helmet Strap
			//  "camo4", // Eye Piece
			//  "camo5", // Eye Piece Glass
			"camo6", // Visor Glasses
			//  "Helmet",
			//  "NVGMount",
			//  "EyePiece",
			//  "EyePieceGlass",
			"VisorGlasses"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet Strap
				"camo4", // Eye Piece
				"camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				//  "Helmet",
				//  "NVGMount",
				//  "EyePiece",
				//  "EyePieceGlass",
				"VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
		};
	};
	class Tenthed_CH252_Helmet_VisorGlasses_White: Tenthed_CH252_Helmet_Base {
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] CH252 Helmet (Glasses) (W)";
		model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
		picture = ""; //TODO: Update this
		hiddenSelections[] = {
			"camo1", // Helmet
			"camo2", // NVG Mount
			"camo3", // Helmet Strap
			"camo4", // Eye Piece
			"camo5", // Eye Piece Glass
			"camo6", // Visor Glasses
			//  "Helmet",
			//  "NVGMount",
			"EyePiece",
			"EyePieceGlass",
			//  "VisorGlasses"
		};
		hiddenSelectionsTextures[] = {
			"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
			"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
			hiddenSelections[] = {
				"camo1", // Helmet
				"camo2", // NVG Mount
				"camo3", // Helmet Strap
				"camo4", // Eye Piece
				"camo5", // Eye Piece Glass
				"camo6", // Visor Glasses
				//    "Helmet",
				//    "NVGMount",
				"EyePiece",
				"EyePieceGlass",
				//    "VisorGlasses"
			};
			hiddenSelectionsTextures[] = {
				"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
				"MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
			};
		};
	};
};
