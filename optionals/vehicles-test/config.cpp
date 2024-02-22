class CfgPatches
{
	class Tenthed_Test_vehicles {
		author = "Akira";
		name = "10th Vehicles";
		requiredAddons[] = {
			"OPTRE_Core",
			"Silvers_Customs",
			"Tenthed_Test_Armor"
		};
		weapons[] = {};
		units[] = {
			"Tenthed_Test_Pelican",
			"Tenthed_Test_Hornet",
			"Tenthed_Test_Stallion"
		};
	};
};
class cfgVehicles {
	class VES_D77HTCI_A;
	class OPTRE_UNSC_hornet_green_CAP;
	class OPTRE_m1087_stallion_cover_unsc;

	class Tenthed_Test_Pelican : VES_D77HTCI_A {
		displayName = "[10th] Test Pelican";
		author = "Akira";
		scope = 2;
		scopeCurator = 2;
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Pelicans";
		hiddenSelectionsTextures[] =
		{
			"z\10thMod\optional\vehicles-test\data\Pelican\PelicanExterior.paa",
			""
		};
	};
	class Tenthed_Test_Hornet : OPTRE_UNSC_hornet_green_CAP {
		scope = 2;
		scopeCurator = 2;
		author = "Akira";
		displayName = "[10th] Test Hornet";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Hornets";
		hiddenSelectionsTextures[] =
		{
			"z\10thMod\optional\vehicles-test\data\Hornet\Hornet.paa"
		};
	};
	class Tenthed_Test_Stallion : OPTRE_m1087_stallion_cover_unsc {
		displayName = "[10th] Test Stallion";
		author = "Akira";
		scope = 2;
		scopeCurator = 2;
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Vehicles";
		hiddenSelectionsTextures[] =
		{
			"z\10thMod\optional\vehicles-test\data\Stallion\Stallion.paa",
			"z\10thMod\optional\vehicles-test\data\Stallion\Truck_ext02_standard_co.paa",
			"z\10thMod\optional\vehicles-test\data\Stallion\Truck_cargo_standard_co.paa",
			"z\10thMod\optional\vehicles-test\data\Stallion\Truck_cover_standard_co.paa",
		};
	};
}
