class CfgPatches {
    class Tenthed_modules {
        author = "Akira";
        name = "10th ODST: Modules";
        requiredAddons[] = {
            "OPTRE_Core",
            "Tenthed_core",
            "A3_Modules_F"
        };
        weapons[] = {};
		units[] = {
			"Tenthed_Module_Arsenal"
		};
    };
};
class CfgVehicles
{
    class Module_F;

    class Tenthed_Module_Arsenal: Module_F
    {
        scope = 2;
        scopeCurator = 2;

        displayName = "Apply Arsenal";
        icon = "\A3\ui_f\data\igui\cfg\simpleTasks\types\armor_ca.paa";
        category = "Tenthed_EditorCategory_Modules";

        function = "Tenthed_fnc_ArsenalModule";
        functionPriority = 1;
        isGlobal = 2;
        isTriggerActivated = 0;
        isDisposable = 1;

        curatorCanAttach = 1;
        curatorInfoType = "RscCurator";

        class Attributes {};
    };
};
class CfgFunctions
{
    class Tenthed
    {
        class Functions
        {
            class ArsenalModule
            {
                file = "z\10thMod\addons\modules\functions\fn_ArsenalModule.sqf";
            };
        };
    };
};
