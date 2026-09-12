class CfgVehicles {
    class O_Soldier_F;

    // Base MSF Unit and the SL variant
    class O_MSF_01 : O_Soldier_F {
        author = "Akira";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSF Squad Lead";
        side = 0;
        faction = "Tenthed_MSF_Faction";
        identityTypes[] = { "LanguageENG_F","Head_NATO","G_NATO_default" };

        canDeactivateMines = 1;        // Can this character deactivate mines?
        engineer = 1;                  // Can this character repair vehicles?
        attendant = 1;                 // Can this character heal soldiers?    

        backpack="MGS_Soldier_backpack";
        uniformClass = "MGS_Soldier_uniform";

        linkedItems[] = {
            "MGS_Soldier_vest_03",
            "MGS_Soldier_helmet",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };
        respawnlinkedItems[] = {
            "MGS_Soldier_vest_03",
            "MGS_Soldier_helmet",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };

        Items[] = { "FirstAidKit" };			// Which items the character has.
        RespawnItems[] = { "FirstAidKit" };		// Which items the character respawns with.

        weapons[] = {
            "Throw",
            "Put",
            "Tenthed_ARG47",
            "Tenthed_M7_Folded",
            "OPTRE_Smartfinder_Vector"
        };
        respawnWeapons[] = {
            "Throw",
            "Put",
            "Tenthed_ARG47",
            "Tenthed_M7_Folded",
            "OPTRE_Smartfinder_Vector"
        };

        magazines[] = {
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_60Rnd_5x23mm_Mag",
            "Laserbatteries"
        };
        respawnMagazines[] = {
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_60Rnd_5x23mm_Mag",
            "Laserbatteries"
        };
    };

    // Riflemen Variant
    class O_MSF_Riflemen_01 : O_MSF_01 {
        displayName = "MSF Riflemen";

        backpack="OPTRE_UNSC_Rucksack_Heavy";
        uniformClass = "MGS_Soldier_uniform";

        linkedItems[] = {
            "MGS_Soldier_vest_02",
            "MSF_mercenaries_headphones",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };
        respawnlinkedItems[] = {
            "MGS_Soldier_vest_02",
            "MSF_mercenaries_headphones",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };

        Items[] = { "FirstAidKit" };			// Which items the character has.
        RespawnItems[] = { "FirstAidKit" };		// Which items the character respawns with.

        weapons[] = {
            "Throw",
            "Put",
            "Tenthed_ARG47",
            "OPTRE_Smartfinder_Vector"
        };
        respawnWeapons[] = {
            "Throw",
            "Put",
            "Tenthed_ARG47",
            "OPTRE_Smartfinder_Vector"
        };

        magazines[] = {
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Laserbatteries"
        };
        respawnMagazines[] = {
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
            "Laserbatteries"
        };
    };
    // Riflemen Variant
    // Riflemen Variant
    // Riflemen Variant

    // Heavy Machine Gunner

    // Bully(Shotgunner)
    class O_MSF_ShotGunner_01 : O_MSF_01 {
        displayName = "MSF Bully";

        backpack="OPTRE_UNSC_Rucksack_Heavy";
        uniformClass = "MGS_Soldier_uniform";

        linkedItems[] = {
            "MGS_Soldier_vest_02",
            "MSF_mercenaries_headphones",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };
        respawnlinkedItems[] = {
            "MGS_Soldier_vest_02",
            "MSF_mercenaries_headphones",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };

        Items[] = { "FirstAidKit" };			// Which items the character has.
        RespawnItems[] = { "FirstAidKit" };		// Which items the character respawns with.

        weapons[] = {
            "Throw",
            "Put",
            "OPTRE_CQS48_Bulldog_Automatic",
            "OPTRE_Smartfinder_Vector"
        };
        respawnWeapons[] = {
            "Throw",
            "Put",
            "OPTRE_CQS48_Bulldog_Automatic",
            "OPTRE_Smartfinder_Vector"
        };

        magazines[] = {
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "Laserbatteries"
        };
        respawnMagazines[] = {
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "Laserbatteries"
        };
    };
    // Shotgunner
    class O_MSF_ShotGunner_02 : O_MSF_01 {
        displayName = "MSF ShotGunner";

        backpack="OPTRE_UNSC_Rucksack_Heavy";
        uniformClass = "MGS_Soldier_uniform";

        linkedItems[] = {
            "MGS_Soldier_vest_02",
            "MSF_mercenaries_headphones",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };
        respawnlinkedItems[] = {
            "MGS_Soldier_vest_02",
            "MSF_mercenaries_headphones",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };

        Items[] = { "FirstAidKit" };			// Which items the character has.
        RespawnItems[] = { "FirstAidKit" };		// Which items the character respawns with.

        weapons[] = {
            "Throw",
            "Put",
            "OPTRE_M45TAC",
            "OPTRE_Smartfinder_Vector"
        };
        respawnWeapons[] = {
            "Throw",
            "Put",
            "OPTRE_M45TAC",
            "OPTRE_Smartfinder_Vector"
        };

        magazines[] = {
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "Laserbatteries"
        };
        respawnMagazines[] = {
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "OPTRE_12Rnd_8Gauge_Pellets",
            "Laserbatteries"
        };
    };

    // Recon

    // Medic
    class O_MSF_Medic_01 : O_MSF_01 {
        displayName = "MSF Medic";

        backpack="OPTRE_UNSC_Rucksack_Heavy";
        uniformClass = "MGS_Soldier_MED_uniform";

        linkedItems[] = {
            "MGS_Soldier_vest_02",
            "MSF_mercenaries_headphones",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };
        respawnlinkedItems[] = {
            "MGS_Soldier_vest_02",
            "MSF_mercenaries_headphones",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };

        Items[] = { "FirstAidKit" };			// Which items the character has.
        RespawnItems[] = { "FirstAidKit" };		// Which items the character respawns with.

        weapons[] = {
            "Throw",
            "Put",
            "OPTRE_M12_SOC",
            "OPTRE_Smartfinder_Vector"
        };
        respawnWeapons[] = {
            "Throw",
            "Put",
            "OPTRE_M12_SOC",
            "OPTRE_Smartfinder_Vector"
        };

        magazines[] = {
            "OPTRE_64Rnd_57x31_Mag",
            "OPTRE_64Rnd_57x31_Mag",
            "OPTRE_64Rnd_57x31_Mag",
            "OPTRE_64Rnd_57x31_Mag",
            "OPTRE_64Rnd_57x31_Mag",
            "OPTRE_64Rnd_57x31_Mag",
            "OPTRE_64Rnd_57x31_Mag",
            "OPTRE_64Rnd_57x31_Mag",
            "Laserbatteries"
        };
        respawnMagazines[] = {
            "OPTRE_64Rnd_57x31_Mag",
            "OPTRE_64Rnd_57x31_Mag",
            "OPTRE_64Rnd_57x31_Mag",
            "OPTRE_64Rnd_57x31_Mag",
            "OPTRE_64Rnd_57x31_Mag",
            "OPTRE_64Rnd_57x31_Mag",
            "OPTRE_64Rnd_57x31_Mag",
            "OPTRE_64Rnd_57x31_Mag",
            "Laserbatteries"
        };
    };

    // RTO

    // AT
    class O_MSF_AT_01 : O_MSF_01 {
        displayName = "MSF AT";

        backpack="OPTRE_UNSC_Rucksack_Heavy";
        uniformClass = "MGS_Soldier_uniform";

        linkedItems[] = {
            "MGS_Soldier_vest",
            "MSF_mercenaries_headphones",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };
        respawnlinkedItems[] = {
            "MGS_Soldier_vest",
            "MSF_mercenaries_headphones",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };

        Items[] = { "FirstAidKit" };			// Which items the character has.
        RespawnItems[] = { "FirstAidKit" };		// Which items the character respawns with.

        weapons[] = {
            "Throw",
            "Put",
            "TCF_M30DFLSF",
            "Tenthed_M7_Folded",
            "OPTRE_Smartfinder_Vector"
        };
        respawnWeapons[] = {
            "Throw",
            "Put",
            "TCF_M30DFLSF",
            "Tenthed_M7_Folded",
            "OPTRE_Smartfinder_Vector"
        };

        magazines[] = {
            "TCF_1Rnd_50x137_PEN",
            "TCF_1Rnd_50x137_PEN",
            "TCF_1Rnd_50x137_PEN",
            "TCF_1Rnd_50x137_PEN",
            "TCF_1Rnd_50x137_PEN",
            "TCF_1Rnd_50x137_PEN",
            "TCF_1Rnd_50x137_PEN",
            "TCF_1Rnd_50x137_PEN",
            "Tenthed_60Rnd_5x23mm_Mag",
            "Tenthed_60Rnd_5x23mm_Mag",
            "Laserbatteries"
        };
        respawnMagazines[] = {
            "TCF_1Rnd_50x137_PEN",
            "TCF_1Rnd_50x137_PEN",
            "TCF_1Rnd_50x137_PEN",
            "TCF_1Rnd_50x137_PEN",
            "TCF_1Rnd_50x137_PEN",
            "TCF_1Rnd_50x137_PEN",
            "TCF_1Rnd_50x137_PEN",
            "TCF_1Rnd_50x137_PEN",
            "Tenthed_60Rnd_5x23mm_Mag",
            "Tenthed_60Rnd_5x23mm_Mag",
            "Laserbatteries"
        };
    };

    // AA
    class O_MSF_AA_01 : O_MSF_AT_01 {
        displayName = "MSF AA";

        weapons[] = {
            "Throw",
            "Put",
            "SC_MPML",
            "Tenthed_M7_Folded",
            "OPTRE_Smartfinder_Vector"
        };
        respawnWeapons[] = {
            "Throw",
            "Put",
            "SC_MPML",
            "Tenthed_M7_Folded",
            "OPTRE_Smartfinder_Vector"
        };

        magazines[] = {
            "SC_MPML_M_AA",
            "SC_MPML_M_AA",
            "SC_MPML_M_AA",
            "SC_MPML_M_AA",
            "SC_MPML_M_AA",
            "SC_MPML_M_AA",
            "SC_MPML_M_AA",
            "SC_MPML_M_AA",
            "Tenthed_60Rnd_5x23mm_Mag",
            "Tenthed_60Rnd_5x23mm_Mag",
            "Laserbatteries"
        };
        respawnMagazines[] = {
            "SC_MPML_M_AA",
            "SC_MPML_M_AA",
            "SC_MPML_M_AA",
            "SC_MPML_M_AA",
            "SC_MPML_M_AA",
            "SC_MPML_M_AA",
            "SC_MPML_M_AA",
            "SC_MPML_M_AA",
            "Tenthed_60Rnd_5x23mm_Mag",
            "Tenthed_60Rnd_5x23mm_Mag",
            "Laserbatteries"
        };
    };
};
