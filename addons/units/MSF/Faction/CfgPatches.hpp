class CfgPatches {
    class Tenthed_MSF_FactionConfig {
        author = "Akira";
        name = "10th ODST: Military Without Borders Config";
        requiredVersion=0.1;
        requiredAddons[] = {
            "Tenthed_core",
            "Tenthed_Units_MSF_Base"
        };
        weapons[] = {};
        units[] = {
            // Base MSF Unit
            "O_MSF_01",
            // Riflemen
            "O_MSF_Riflemen_01",
            // Heavy Machine Gunner
            // Shotgunner
            "O_MSF_ShotGunner_01",
            "O_MSF_ShotGunner_02",
            // Recon
            // Medic
            "O_MSF_Medic_01",
            // RTO
            // AT
            "O_MSF_AT_01",
            // AA
            "O_MSF_AA_01",
        };
    };
};

class CfgFactionClasses {
    class Tenthed_MSF_Faction {
        displayName = "[10th] Military Without Borders";
        side = 0;
        flag = "\Tenthed_Core\data\logo.paa";
        icon = "\Tenthed_Core\data\logo.paa";
        priority = 0;
    };
};
