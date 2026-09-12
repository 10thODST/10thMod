class CfgPatches {
    class Tenthed_AstraFederation_Spartans {
        author = "Akira";
        name = "10th ODST: United Astra Federation Spartans";
        requiredVersion=0.1;
        requiredAddons[] = {
            "Tenthed_core",
            "Tenthed_Units_Astra_Base"
        };
        weapons[] = {};
        units[] = {
            "O_Astra_Spartan_01",
            "O_Astra_Spartan_02",
            "O_Astra_Spartan_03",
            "O_Astra_Spartan_04",
            "O_Astra_Spartan_05",
            "O_Astra_Spartan_06",
        };
    };
};

class CfgFactionClasses {
    class Tenthed_AstraFaction_Spartans {
        displayName = "[10th] Astra Spartans";
        side = 0;
        flag = "\Tenthed_Core\data\logo.paa";
        icon = "\Tenthed_Core\data\logo.paa";
        priority = 0;
    };
};
