class CfgPatches {
	class Tenthed_Vehicles_Pelican {
		author = "Silver, Kodiak, Crow, Akira, Dodo";
		name = "10th ODST: Pelicans";
		requiredAddons[] = {
			"Tenthed_core",
			"OPTRE_Core"
		};
		weapons[] = {};
		units[] = {
			"Tenthed_Pelican",
			"Tenthed_Archangel_Pelican",
			"Tenthed_Dodo_Pelican",
			"Tenthed_Pelican_Desert",
			"Tenthed_Pelican_Jungle",
			"Tenthed_Pelican_Urban",
			"Tenthed_Pelican_SOCOM_Desert",
			"Tenthed_Pelican_SOCOM_Jungle",
			"Tenthed_Pelican_SOCOM_Urban",
			"Tenthed_Pelican_Urban_fir_test"
		};
	};
};
class CfgVehicles {
	class VES_D77HTCI_A;

	class Eventhandlers;

	// Base type Pelican
	class Tenthed_Pelican_Base : VES_D77HTCI_A {
		displayName = "Tenthed_Pelican_Base";
		author = "";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Pelicans";
		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\Pelican\textures\10th_PelicanExterior.paa",
			""
		};
		weapons[] = {
			"CMFlareLauncher",
			"OPTRE_missiles_Anvil1"
		};
		magazines[] = {
			"300Rnd_CMFlare_Chaff_Magazine" // 168Rnd_CMFlare_Chaff_Magazine
		};
		class TransportBackpacks {
			class _xx_TenthedMortarBackpack {
				backpack = "Tenthed_Mortar_Backpack";
				count = 6;
			};
			class _xx_TenthedHMGBackpack {
				backpack = "Tenthed_HMG_Backpack";
				count = 6;
			};
			class _xx_ParachuteBackpack {
				backpack = "B_Parachute";
				count = 6;
			};
		};
		class AMSData {
			AMSEnabled = 1;
			DialogClass = "AMS_New_GUI";
			AircraftBase = "Tenthed_Pelican_Base";
			HardpointPicture = "OPTRE_Vehicles\Pelican\pelicanPylonPic.paa";
			CustomPreset_Hashmap = "FIR_F23A_CustomPreset_Hashmap";
			loadout_pre = "z\10thMod\addons\vehicles\Pelican\scripts\Loadout_Pre.sqf";
			loadout_apply = "FIR_AirWeaponSystem_US_Cfg\sqs\AMS\AMS_Loadout_Apply.sqf";
			loadout_post = "z\10thMod\addons\vehicles\Pelican\scripts\DoNothing.sqf";
		};
		class UserActions {
			class AMSOpen
			{
				displayName = "<t color='#739eff'>Open AMS</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User3";
				condition = "(player == driver this) and (speed this < 1)";
				statement = "this execVM ""\FIR_AirWeaponSystem_US_Cfg\sqs\AMS\AMS_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
				hideOnUse = 1;
			};
			class FullAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName = "<t color='#F28D00'>Engage Airbrakes (Half)";
				displayNameDefault = "<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#F28D00'>Engage Airbrakes (Half)";
				userActionID = 58;
			};
			class Thruster400Engage
			{
				animPeriod = 5;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName = "<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
				userActionID = 52;
			};
			class Thruster400Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID = 53;
			};
			class Afterburners900Engage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName = "<t color='#04B45F'>Engage Afterburners";
				displayNameDefault = "<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners900Engage";
				textToolTip = "<t color='#04B45F'>Engage Afterburners";
				userActionID = 54;
			};
			class Afterburners900Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault = "<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners900Disengage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip = "<t color='#FCE205'>Disengage Afterburners";
				userActionID = 55;
			};
			class PelLift_LoadPodMenu
			{
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				displayName = "<t color='#FFBF00'>Load Supply Pods";
				displayNameDefault = "<t color='#FFBF00'>Load Supply Pods";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 2;
				radius = 15;
				showWindow = 0;
				statement = "OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
				textToolTip = "<t color='#FFBF00'>Load Supply Pods";
				userActionID = 9;
			};
			class PelLift_LoadVehicle
			{
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				displayName = "<t color='#FFBF00'>Maglock Cargo";
				displayNameDefault = "<t color='#FFBF00'>Maglock Cargo";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 2;
				radius = 15;
				showWindow = 0;
				statement = "0 = [this,vehicle player] spawn V_FZ_fnc_PelicanLoadValidate;";
				textToolTip = "<t color='#FFBF00'>Maglock Cargo";
				userActionID = 6;
			};
			class PelLift_LoadDevice
			{
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player) AND ((vehicle player) isKindOf ""VES_HDV134_Fujikawa"") AND (vehicle player getvariable [""VES_DeviceAvailable"",true])";
				displayName = "<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				displayNameDefault = "<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 2;
				radius = 4;
				showWindow = 0;
				statement = "0 = [this,vehicle player] spawn V_FZ_fnc_SlipspaceRuptureDetected;";
				textToolTip = "<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				userActionID = 6;
			};
			class PelLift_OpenDetatchPodMenu
			{
				condition = "(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName = "<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				displayNameDefault = "<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 3;
				radius = 5;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
				textToolTip = "<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				userActionID = 8;
			};
			class PelLift_UnLoadVehicle
			{
				condition = "(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName = "<t color='#DF3A01'>Release Maglock";
				displayNameDefault = "<t color='#DF3A01'>Release Maglock";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 3;
				radius = 5;
				showWindow = 0;
				statement = "0 = [this] spawn V_FZ_fnc_PelicanUnLoadValidate;";
				textToolTip = "<t color='#DF3A01'>Release Maglock";
				userActionID = 7;
			};
			class RampClose
			{
				animPeriod = 5;
				condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this))";
				displayName = "Close Ramp";
				displayNameDefault = "Close Ramp";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 4;
				radius = 4;
				showWindow = 0;
				statement = "this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				textToolTip = "Close Ramp";
				userActionID = 51;
			};
			class RampOpen
			{
				animPeriod = 5;
				condition = "((this animationPhase ""cargoDoor_1"" < 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this))";
				displayName = "Open Ramp";
				displayNameDefault = "Open Ramp";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 4;
				radius = 4;
				showWindow = 0;
				statement = "this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				textToolTip = "Open Ramp";
				userActionID = 50;
			};
		};
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
	};

	// Pelicans
	class Tenthed_Pelican_Desert : Tenthed_Pelican_Base {
		displayName = "[10th] Pelican - Desert";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\Pelican\textures\pelican_DESERT.paa",
			""
		};
	};
	class Tenthed_Pelican_Jungle : Tenthed_Pelican_Base {
		displayName = "[10th] Pelican - Jungle";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\Pelican\textures\pelican_JUNGLE.paa",
			""
		};
	};
	class Tenthed_Pelican_Urban : Tenthed_Pelican_Base {
		displayName = "[10th] Pelican - Urban";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\Pelican\textures\pelican_URBAN.paa",
			""
		};
	};

	class OPTRE_Pelican_armed_SOCOM;
	class Tenthed_Pelican_SOCOM_Base : OPTRE_Pelican_armed_SOCOM{
		displayName = "[10th] Pelican SOCOM - Desert";
		author = "Kodiak";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;

		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Pelicans";

		weapons[]=
		{
			"CMFlareLauncher",
			"OPTRE_missiles_Anvil1"
		};
		magazines[] = {
			"300Rnd_CMFlare_Chaff_Magazine" // 168Rnd_CMFlare_Chaff_Magazine
		};

		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\Pelican\textures\pelican_DESERT.paa",
			""
		};
	};
	class Tenthed_Pelican_SOCOM_Desert : Tenthed_Pelican_SOCOM_Base {
		displayName = "[10th] Pelican SOCOM - Desert";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\Pelican\textures\pelican_DESERT.paa",
			""
		};
	};
	class Tenthed_Pelican_SOCOM_Jungle : Tenthed_Pelican_SOCOM_Base {
		displayName = "[10th] Pelican SOCOM - Jungle";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\Pelican\textures\pelican_JUNGLE.paa",
			""
		};
	};
	class Tenthed_Pelican_SOCOM_Urban : Tenthed_Pelican_SOCOM_Base {
		displayName = "[10th] Pelican SOCOM - Urban";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		
		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\Pelican\textures\pelican_URBAN.paa",
			""
		};
	};

	// Old Variant Pelicans
	class Tenthed_Pelican : Tenthed_Pelican_Base {
		displayName = "[10th] Pelican";
		author = "Crow";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\Pelican\textures\10th_PelicanExterior.paa",
			""
		};
	};
	class Tenthed_Archangel_Pelican : Tenthed_Pelican_Base {
		displayName = "[10th] Archangel Pelican";
		author = "PocketsTheWizard";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\Pelican\textures\ArchangelPelican.paa",
			""
		};
	};
	class Tenthed_Dodo_Pelican : Tenthed_Pelican_Base {
		displayName = "[10th] DodoAirLines";
		author = "PocketsTheWizard";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {
			"\z\10thMod\addons\vehicles\Pelican\textures\DodoPelican.paa",
			""
		};
	};
};
