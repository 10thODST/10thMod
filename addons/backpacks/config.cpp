class CfgPatches {
	class Tenthed_Backpacks {
		author = "Silver, Kodiak, Crow, Akira";
		name = "10th ODST: Backpacks";
		requiredAddons[] = {
			"Tenthed_core",
			"MA_Armor"
		};
		weapons[] = {};
		units[] = {
			"Tenthed_ANPRC_521",
			"Tenthed_ILCS_Rucksack_Medical",
			"Tenthed_M56S_Rucksack_Radio",
			"Tenthed_M56S_Rucksack_ODST_Radio",
			"Tenthed_M56S_Rucksack_Medical",
			"Tenthed_M56S_Rucksack_Medical_Radio",

			"Tenthed_Marine_Rucksack",
			"Tenthed_Marine_Medical_Rucksack"
		};
	};
};
class cfgVehicles {
	class OPTRE_UNSC_Rucksack;
	class 10th_ANPRC_521 : OPTRE_UNSC_Rucksack {
		author = "Kodiak and Crow";
		displayName = "[10th] AN/PRC-521";
		descriptionShort = "AN/PRC-521<br>UNSC Long Range Radio<br>25km Effective Range";
		picture = "\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Items";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Backpacks";
		maximumLoad = 300;
		mass = 50;
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		hiddenSelectionsTextures[] =
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"z\10thMod\addons\backpacks\data\10thcompack.paa"
		};
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 25000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
	};

	class OPTRE_ILCS_Rucksack_Black;
	class 10th_ILCS_Rucksack_Medical : OPTRE_ILCS_Rucksack_Black {
		dlc = "OPTRE";
		author = "Crow";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Items";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Backpacks";
		displayName = "[10th] ILCS Backpack [Medic]";
		maximumLoad = 400;
		mass = 40;
		hiddenSelections[] = {
			"camo1",
			"AP_Heavy"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\addons\backpacks\data\ruck_med_CO V1.paa"
		};
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 25000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
	};

	class Bag_Base;
	class Tenthed_Marine_Rucksack : Bag_Base {
		dlc = "OPTRE";
		author = "OPTRE Devs, Akira";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Items";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Backpacks";
		displayName = "[10th] Marine Rucksack";

		picture = "\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		scope = 2;
		model = "\OPTRE_unsc_units\army\rucksack.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2",
			"B_Medic",
			"B_Radio"
		};
		hiddenSelectionsTextures[] = {
			"\Tenthed_Turrets\data\TurretBackpack\soft_backpack_co.paa", // TODO: Change texture path.
			""
		};
		
		maximumLoad = 300;
		mass = 50;
	};

	class Tenthed_Marine_Medical_Rucksack : Tenthed_Marine_Rucksack
	{
		displayName = "[10th] Marine Medical Rucksack";
		maximumLoad = 400;

		hiddenSelections[] = {
			"camo",
			"camo2",
			//"B_Medic",
			"B_Addons",
			"B_Radio"
		};

		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 25000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
	};
	class Tenthed_Marine_Heavy_Rucksack: Tenthed_Marine_Rucksack
	{
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="[10th] Marine Heavy Rucksack";
		maximumLoad=400;
		mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Radio"
		};
	};
};