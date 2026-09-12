class CfgVehicles {
    class O_Soldier_F;

    // Base Astra Spartan and the SL variant
    class O_Astra_Spartan_01 : O_Soldier_F {
        author = "Akira";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spartan Squad Lead";
        side = 0;
        faction = "Tenthed_AstraFaction_Spartans";
        identityTypes[] = { "LanguageENG_F","Head_NATO","G_NATO_default" };

        canDeactivateMines = 1;        // Can this character deactivate mines?
        engineer = 1;                  // Can this character repair vehicles?
        attendant = 1;                 // Can this character heal soldiers?    

        backpack="Mjolnir_ODST_Shoulders";
        uniformClass = "Tenthed_M56S_BDU";

        linkedItems[] = {
            "Tenthed_AstraSpartan_Armor",
            "Tenthed_AstraSpartan_SL_Helmet",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };
        respawnlinkedItems[] = {
            "Tenthed_AstraSpartan_Armor",
            "Tenthed_AstraSpartan_SL_Helmet",
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
            "OPTREP_BR55",
            "OPTRE_FC_Plasma_Pistol",
            "OPTRE_Smartfinder"
        };
        respawnWeapons[] = {
            "Throw",
            "Put",
            "OPTREP_BR55",
            "OPTRE_FC_Plasma_Pistol",
            "OPTRE_Smartfinder"
        };

        magazines[] = {
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_FC_Plasma_Pistol_Battery",
            "Laserbatteries"
        };
        respawnMagazines[] = {
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_36Rnd_95x40_Mag_Tracer",
            "OPTRE_FC_Plasma_Pistol_Battery",
            "Laserbatteries"
        };
    };

    // Heavy Machine Gunner
    class O_Astra_Spartan_02 : O_Astra_Spartan_01 {
        displayName = "Spartan Heavy Machine Gunner";

        backpack="Mjolnir_ODST_Shoulders";
        uniformClass = "Tenthed_M56S_BDU";

        linkedItems[] = {
            "Tenthed_AstraSpartan_Armor",
            "Tenthed_AstraSpartan_Basic_Helmet",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };
        respawnlinkedItems[] = {
            "Tenthed_AstraSpartan_Armor",
            "Tenthed_AstraSpartan_Basic_Helmet",
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
            "OPTRE_M247H_Shield_Etilka",
            "OPTRE_FC_Plasma_Pistol",
            "OPTRE_Smartfinder"
        };
        respawnWeapons[] = {
            "Throw",
            "Put",
            "OPTRE_M247H_Shield_Etilka",
            "OPTRE_FC_Plasma_Pistol",
            "OPTRE_Smartfinder"
        };

        magazines[] = {
            "OPTRE_200Rnd_127x99_M247H_Etilka_Ball",
            "OPTRE_200Rnd_127x99_M247H_Etilka_Ball",
            "OPTRE_200Rnd_127x99_M247H_Etilka_Ball",
            "OPTRE_200Rnd_127x99_M247H_Etilka_Ball",
            "OPTRE_200Rnd_127x99_M247H_Etilka_Ball",
            "OPTRE_FC_Plasma_Pistol_Battery",
            "Laserbatteries"
        };
        respawnMagazines[] = {
            "OPTRE_200Rnd_127x99_M247H_Etilka_Ball",
            "OPTRE_200Rnd_127x99_M247H_Etilka_Ball",
            "OPTRE_200Rnd_127x99_M247H_Etilka_Ball",
            "OPTRE_200Rnd_127x99_M247H_Etilka_Ball",
            "OPTRE_200Rnd_127x99_M247H_Etilka_Ball",
            "OPTRE_FC_Plasma_Pistol_Battery",
            "Laserbatteries"
        };
    };

    // Spartan Bully(Shotgunner)
    class O_Astra_Spartan_03 : O_Astra_Spartan_01 {
        displayName = "Spartan Bully";

        backpack="Mjolnir_ODST_Shoulders";
        uniformClass = "Tenthed_M56S_BDU";

        linkedItems[] = {
            "Tenthed_AstraSpartan_Armor",
            "Tenthed_AstraSpartan_Basic_Helmet",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };
        respawnlinkedItems[] = {
            "Tenthed_AstraSpartan_Armor",
            "Tenthed_AstraSpartan_Basic_Helmet",
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
            "OPTRE_CQS48_Bulldog_Automatic_Innie",
            "OPTRE_FC_Plasma_Pistol",
            "OPTRE_Smartfinder"
        };
        respawnWeapons[] = {
            "Throw",
            "Put",
            "OPTRE_CQS48_Bulldog_Automatic_Innie",
            "OPTRE_FC_Plasma_Pistol",
            "OPTRE_Smartfinder"
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
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_FC_Plasma_Pistol_Battery",
            "Laserbatteries",
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
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_12Rnd_12Gauge_Pellets_Tracer",
            "OPTRE_FC_Plasma_Pistol_Battery",
            "Laserbatteries",
        };
    };

    // Spartan Riflemen
    class O_Astra_Spartan_04 : O_Astra_Spartan_01 {
        displayName = "Spartan Riflemen";

        backpack="Mjolnir_ODST_Shoulders";
        uniformClass = "Tenthed_M56S_BDU";

        linkedItems[] = {
            "Tenthed_AstraSpartan_Armor",
            "Tenthed_AstraSpartan_Basic_Helmet",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };
        respawnlinkedItems[] = {
            "Tenthed_AstraSpartan_Armor",
            "Tenthed_AstraSpartan_Basic_Helmet",
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
            "TCF_CM_12_Insurgent",
            "OPTRE_FC_Plasma_Pistol",
            "OPTRE_Smartfinder"
        };
        respawnWeapons[] = {
            "Throw",
            "Put",
            "TCF_CM_12_Insurgent",
            "OPTRE_FC_Plasma_Pistol",
            "OPTRE_Smartfinder"
        };

        magazines[] = {
            "TCF_150Rnd_30x06_Mag_Tracer",
            "TCF_150Rnd_30x06_Mag_Tracer",
            "TCF_150Rnd_30x06_Mag_Tracer",
            "TCF_150Rnd_30x06_Mag_Tracer",
            "TCF_150Rnd_30x06_Mag_Tracer",
            "OPTRE_FC_Plasma_Pistol_Battery",
            "Laserbatteries",
        };
        respawnMagazines[] = {
            "TCF_150Rnd_30x06_Mag_Tracer",
            "TCF_150Rnd_30x06_Mag_Tracer",
            "TCF_150Rnd_30x06_Mag_Tracer",
            "TCF_150Rnd_30x06_Mag_Tracer",
            "TCF_150Rnd_30x06_Mag_Tracer",
            "OPTRE_FC_Plasma_Pistol_Battery",
            "Laserbatteries",
        };
    };

    // Spartan Grenadier
    class O_Astra_Spartan_05 : O_Astra_Spartan_01 {
        displayName = "Spartan Grenadier";

        backpack="Mjolnir_ODST_Shoulders";
        uniformClass = "Tenthed_M56S_BDU";

        linkedItems[] = {
            "Tenthed_AstraSpartan_Armor",
            "Tenthed_AstraSpartan_Basic_Helmet",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };
        respawnlinkedItems[] = {
            "Tenthed_AstraSpartan_Armor",
            "Tenthed_AstraSpartan_Basic_Helmet",
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
            "MA_GRL_45",
            "OPTRE_FC_Plasma_Pistol",
            "OPTRE_Smartfinder"
        };
        respawnWeapons[] = {
            "Throw",
            "Put",
            "MA_GRL_45",
            "OPTRE_FC_Plasma_Pistol",
            "OPTRE_Smartfinder"
        };

        magazines[] = {
            "GRL45_6rnd_HE",
            "GRL45_6rnd_HE",
            "GRL45_6rnd_HE",
            "GRL45_6rnd_HE",
            "GRL45_6rnd_Whistle",
            "GRL45_6rnd_Whistle",
            "GRL45_6rnd_Whistle",
            "GRL45_6rnd_Whistle",
            "OPTRE_FC_Plasma_Pistol_Battery",
            "Laserbatteries",
        };
        respawnMagazines[] = {
            "GRL45_6rnd_HE",
            "GRL45_6rnd_HE",
            "GRL45_6rnd_HE",
            "GRL45_6rnd_HE",
            "GRL45_6rnd_Whistle",
            "GRL45_6rnd_Whistle",
            "GRL45_6rnd_Whistle",
            "GRL45_6rnd_Whistle",
            "OPTRE_FC_Plasma_Pistol_Battery",
            "Laserbatteries",
        };
    };

    // Spartan Recon
    class O_Astra_Spartan_06 : O_Astra_Spartan_01 {
        displayName = "Spartan Recon";

        backpack="Mjolnir_ODST_Shoulders";
        uniformClass = "Tenthed_M56S_BDU";

        linkedItems[] = {
            "Tenthed_AstraSpartan_Armor",
            "Tenthed_AstraSpartan_Recon_Helmet",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ACE_Altimeter",
            "OPTRE_NVG"
        };
        respawnlinkedItems[] = {
            "Tenthed_AstraSpartan_Armor",
            "Tenthed_AstraSpartan_Recon_Helmet",
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
            "TCF_M14",
            "OPTRE_BMR_Scope",
            "OPTRE_FC_Plasma_Pistol",
            "OPTRE_Smartfinder"
        };
        respawnWeapons[] = {
            "Throw",
            "Put",
            "TCF_M14",
            "OPTRE_BMR_Scope",
            "OPTRE_FC_Plasma_Pistol",
            "OPTRE_Smartfinder"
        };

        magazines[] = {
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_FC_Plasma_Pistol_Battery",
            "Laserbatteries"
        };
        respawnMagazines[] = {
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_15Rnd_762x51_Mag",
            "OPTRE_FC_Plasma_Pistol_Battery",
            "Laserbatteries"
        };
    };
};
