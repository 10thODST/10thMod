class CfgPatches
{
	class Tenthed_Test_Backpacks {
		author = "Akira";
		name = "10th Backpacks";
		requiredAddons[] = {
			"OPTRE_Core",
			"Silvers_Customs",
			"Tenthed_Test_Armor"
		};
		weapons[] = {};
		units[] = {
			"Tenthed_Test_ANPRC_521_Backback",
			"Tenthed_Test_ILCS_Rucksack",
			"Tenthed_HMG_Backpack_Test"
		};
	};
};
class cfgVehicles {
	class OPTRE_UNSC_Rucksack;
	class OPTRE_ILCS_Rucksack_Black;
	class Bag_Base;

	class Tenthed_Test_ANPRC_521_Backback : OPTRE_UNSC_Rucksack {
		displayName = "[10th] AN/PRC-521 - Test Mod Non-functional";
		descriptionShort = "AN/PRC-521<br>UNSC Long Range Radio<br>25km Effective Range";
		picture = "\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Items";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Backpacks";
		hiddenSelections[] = {
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		hiddenSelectionsTextures[] = {
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"z\10thMod\optional\backpacks-test\data\RadioBackpack\10thcompack.paa"
		};
	};
	class Tenthed_Test_ILCS_Rucksack : OPTRE_ILCS_Rucksack_Black {
		dlc = "OPTRE";
		author = "Akira";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Items";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Backpacks";
		displayName = "[10th] ILCS Backpack - Test";
		maximumLoad = 400;
		mass = 40;
		hiddenSelections[] = {
			"camo1",
			"AP_Heavy"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\optional\backpacks-test\data\Rucksack\ruck_med_CO.paa"
		};
	};
	class Tenthed_HMG_Backpack_Test : Bag_Base {
		picture = "\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		scope = 2;
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Items";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Backpacks";
		model = "\OPTRE_unsc_units\army\rucksack.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Radio"
		};
		hiddenSelectionsTextures[] =
		{
			"z\10thMod\optional\backpacks-test\data\TurretBackpack\soft_backpack_co.paa",
			""
		};
		maximumLoad = 0;
	};
}