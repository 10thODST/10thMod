class CfgPatches {
    class Tenthed_objects {
        author = "Akira";
        name = "10th ODST: Objects";
        requiredAddons[] = {
            "Tenthed_core",
        };
        weapons[] = {};
        units[] = {
			"Tenthed_FlagStand",
			"Tenthed_ODST_Flag",
			"Tenthed_ODST_FlagPole",
			"Tenthed_Squad_Flag_Chaos",
			"Tenthed_Squad_Flag_Zeus",
			"Tenthed_Squad_Flag_Hades",
			"Tenthed_Squad_Flag_Artemis",
			"Tenthed_Squad_Flag_Ares",
			"Tenthed_Squad_Flag_Odin",
			"Tenthed_Squad_Flag_Baldur",
			"Tenthed_Squad_Flag_Heimdall",
			"Tenthed_Squad_Flag_Tyr",
			"Tenthed_Squad_Flag_Tiamat",
			"Tenthed_Squad_Flag_Aethur"
		};
    };
};
class CfgVehicles {
	class Flagpole_F;
	class Sign_F;
	class Flag_White_F;

	class Tenthed_FlagBase : Flagpole_F {
		model = "\OPTRE_Misc\Multiplayer\CTF_flag_pole";
		armor = 999999;
		armorStructural = 999;
		scope = 1;
		scopeCurator = 1;
		displayName = "[10th] Flag (Base)";
		editorCategory = "Tenthed_EditorCategory_Objects";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Military";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"optre_misc\multiplayer\data\flag_guidon_whiteunsc_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"optre_misc\multiplayer\data\CTF_flag.rvmat"
		};
	};
	class Tenthed_FlagStand : Sign_F {
		model = "\OPTRE_Misc\Multiplayer\CTF_flag_stand";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] Flag (Stand)";
		editorCategory = "Tenthed_EditorCategory_Objects";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Military";
	};

	// 10th ODST flag and pole version
	class Tenthed_ODST_Flag : Tenthed_FlagBase {
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] ODST Logo Flag";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\addons\objects\data\flag_guidon_10thODST_co.paa"
		};
	};
	class Tenthed_ODST_FlagPole: Flag_White_F {
		author="Akira";
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] Flag (Pole)";
		editorCategory = "Tenthed_EditorCategory_Objects";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Military";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\z\10thMod\addons\objects\data\flag_10thODST_co.paa'";
		};
	};

	// Chaos Battalion
	class Tenthed_Squad_Flag_Chaos : Tenthed_FlagBase {
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] Squad Flag (Chaos)";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\addons\objects\data\flag_guidon_SquadFlag_Chaos_co.paa"
		};
	};

	// Zeus Platoon
	class Tenthed_Squad_Flag_Zeus : Tenthed_FlagBase {
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] Squad Flag (Zeus)";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\addons\objects\data\flag_guidon_SquadFlag_Zeus_co.paa"
		};
	};
	class Tenthed_Squad_Flag_Hades : Tenthed_FlagBase {
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] Squad Flag (Hades)";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\addons\objects\data\flag_guidon_SquadFlag_Hades_co.paa"
		};
	};
	class Tenthed_Squad_Flag_Artemis : Tenthed_FlagBase {
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] Squad Flag (Artemis)";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\addons\objects\data\flag_guidon_SquadFlag_Artemis_co.paa"
		};
	};
	class Tenthed_Squad_Flag_Ares : Tenthed_FlagBase {
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] Squad Flag (Ares)";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\addons\objects\data\flag_guidon_SquadFlag_Ares_co.paa"
		};
	};

	// Odin Platoon
	class Tenthed_Squad_Flag_Odin : Tenthed_FlagBase {
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] Squad Flag (Odin)";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\addons\objects\data\flag_guidon_SquadFlag_Odin_co.paa"
		};
	};
	class Tenthed_Squad_Flag_Baldur : Tenthed_FlagBase {
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] Squad Flag (Baldur)";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\addons\objects\data\flag_guidon_SquadFlag_Baldur_co.paa"
		};
	};
	class Tenthed_Squad_Flag_Heimdall : Tenthed_FlagBase {
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] Squad Flag (Heimdall)";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\addons\objects\data\flag_guidon_SquadFlag_Heimdall_co.paa"
		};
	};
	class Tenthed_Squad_Flag_Tyr : Tenthed_FlagBase {
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] Squad Flag (Tyr)";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\addons\objects\data\flag_guidon_SquadFlag_Tyr_co.paa"
		};
	};

	// Tiamat Company
	class Tenthed_Squad_Flag_Tiamat : Tenthed_FlagBase {
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] Squad Flag (Tiamat)";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\addons\objects\data\flag_guidon_SquadFlag_Tiamat_co.paa"
		};
	};
	class Tenthed_Squad_Flag_Aethur : Tenthed_FlagBase {
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] Squad Flag (Aethur)";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"z\10thMod\addons\objects\data\flag_guidon_SquadFlag_Aethur_co.paa"
		};
	};

};
