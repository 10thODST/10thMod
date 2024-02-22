	class Tenthed_M56R_Vest_Lion : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Armor (Lion)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= { // Change folder to Armor-Misriah\data and put files into that folder. example "Armor-Misriah\data\akira_helmet.paa"
			// No other texture files then the ones posted will be changed
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"z\10thMod\addons\armor_misriah_named\data\Lion\Thigh_Pouch_Lion_co.paa",
			"z\10thMod\addons\armor_misriah_named\data\Lion\Reach_Armor_Upper_Lion_co.paa", // Upper armor texture
			"z\10thMod\addons\armor_misriah_named\data\Lion\Reach_Armor_Lower_Lion_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"z\10thMod\addons\armor_misriah_named\data\Lion\Sniper_Lion_co.paa", // Sniper Shoulders
			"z\10thMod\addons\armor_misriah_named\data\Lion\CQB_Lion_co.paa", // CQB Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= { // put a // in front of section to show the item. by default the right sniper pauldron is shown and the CQB left pauldron is shown.
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
				//"Reach_Sniper_Pauldron_Right",
				//"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				//"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				//"Canisters"
			};
		};
	};
	class Tenthed_M56SR_Helmet_Lion : Tenthed_M56SR_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56S-R Helmet (Lion)";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]= { // un comment out which visor color you would like to test. make sure to comment out the old color or else there will be errors. Blue visor enabled by default.
			"z\10thMod\addons\armor_misriah_named\data\Lion\HR_ODST_Helmet_Lion_co.paa",
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa" // Blue Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_gold_co.paa" // Gold Visor
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_white_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		};
	};
	class Tenthed_M56E_Helmet_Lion : Tenthed_M56E_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56-E Helmet (Lion)";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="MA_Armor\data\Icons\EOD_Helm.paa";
		hiddenSelectionsTextures[]= { // un comment out which visor color you would like to test. make sure to comment out the old color or else there will be errors. Blue visor enabled by default.
			"z\10thMod\addons\armor_misriah_named\data\Lion\EOD_Helmet_Lion_co.paa",
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_Blue_co.paa" // Blue Visor
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_Black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_Gold_co.paa" // Gold Visor
			"MA_Armor\data\Helmets\EOD\EOD_Visor_Red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_White_co.paa"// White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		};
	};