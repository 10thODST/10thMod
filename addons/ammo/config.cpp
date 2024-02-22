class CfgPatches {
    class Tenthed_Ammo {
        author = "Akira";
        name = "10th ODST: Ammo";
        requiredAddons[] = {
            "Tenthed_core",
        };
        weapons[] = {};
        units[] = {};
		ammo[] = {
			"Tenthed_SC_338_NM_Ball",
			"Tenthed_B_127x99_Ball_Tracer_Yellow",
			"Tenthed_762x39_Tracer_Yellow",
			"Tenthed_5x23_Caseless",
			"Tenthed_5x23_Caseless_Tracer",
			"Tenthed_5x23_Caseless_Tracer_Yellow",
			"Tenthed_5x23_Caseless_JHP",
			"Tenthed_5x23_Caseless_FMJ"
		};
		magazines[] = {
			"Tenthed_SC_200Rnd_338_Mag",
			"Tenthed_100Rnd_127x99_mag_Tracer_Yellow",
			"Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow",
			"Tenthed_10Rnd_338_Mag_Yellow",
			"Tenthed_60Rnd_5x23mm_Mag",
			"Tenthed_60Rnd_5x23mm_Mag_tracer",
			"Tenthed_60Rnd_5x23mm_Mag_tracer_yellow",
			"Tenthed_48Rnd_5x23mm_Mag",
			"Tenthed_48Rnd_5x23mm_Mag_tracer",
			"Tenthed_48Rnd_5x23mm_Mag_tracer_yellow",
			"Tenthed_48Rnd_5x23mm_JHP_Mag",
			"Tenthed_48Rnd_5x23mm_FMJ_Mag"
		};
    };
};
class CfgAmmo {
	class B_338_Ball;
	class Tenthed_SC_338_NM_Ball : B_338_Ball {
		hit = 14;
	};

	class B_127x99_Ball;
	class Tenthed_B_127x99_Ball_Tracer_Yellow : B_127x99_Ball {
		hit = 30;
	};

	class B_762x39_Ball_F;
	class Tenthed_762x39_Tracer_Yellow : B_762x39_Ball_F {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		cartridge = "FxCartridge_762x39";
	};

	class B_762x51_Ball;
	class Tenthed_5x23_Caseless : B_762x51_Ball {
		hit = 10;
		typicalSpeed = 450;
		caliber = 0.75;
		cartridge = "FxCartridge_65_caseless";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class Tenthed_5x23_Caseless_Tracer : Tenthed_5x23_Caseless {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class Tenthed_5x23_Caseless_Tracer_Yellow : Tenthed_5x23_Caseless_Tracer {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class Tenthed_5x23_Caseless_JHP : Tenthed_5x23_Caseless {
		hit = 11;
		caliber = 0.25;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class Tenthed_5x23_Caseless_FMJ : Tenthed_5x23_Caseless {
		caliber = 1.5;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};
class CfgMagazines {
	class 130Rnd_338_Mag;
	class Tenthed_SC_200Rnd_338_Mag : 130Rnd_338_Mag {
		scope = 2;
		displayName = "[10th] 200Rnd .338 Magazine";
		picture = "\A3\Weapons_F_Mark\Data\UI\M_338_NM_CA.paa";
		count = 200;
		ammo = "Tenthed_SC_338_NM_Ball";
		tracersEvery = 3;
		lastRoundsTracer = 20;
		descriptionshort = "Rounds: 200<br/>Used in: PKMP";
		mass = 75;
	};

	class 100Rnd_127x99_mag;
	class Tenthed_100Rnd_127x99_mag_Tracer_Yellow : Tenthed_SC_200Rnd_338_Mag {
		scope = 2;
		displayName = "[10th] 100Rnd 127x99 mag Tracer Yellow";
		picture = "\A3\Weapons_F_Mark\Data\UI\M_338_NM_CA.paa";
		count = 100;
		ammo = "Tenthed_B_127x99_Ball_Tracer_Yellow";
		tracersEvery = 3;
		lastRoundsTracer = 20;
		descriptionShort = "Rounds: 200<br/>Used in: [10th] HMG";
		displaynameshort = "100Rnd 127x99";
		mass = 75;
	};

	class 30Rnd_762x39_AK12_Mag_F;
	class Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow : 30Rnd_762x39_AK12_Mag_F {
		author = "Scion Conflict Mod Team";
		displayName = "[10th] 30Rnd Shrapnel Magazine";
		descriptionshort = "Rounds: 30<br />Used in: ARG-47/ARG-88<br/>Contains small pieces of shrapnel which are accelerated in the augmented railguns of the ARG rifle series.";
		ammo = "Tenthed_762x39_Tracer_Yellow";
		tracersEvery = 1;
		model = "\sc_weapons\data\magazines\arg\mag.p3d";
		modelSpecial = "\sc_weapons\data\magazines\arg\mag.p3d";
		modelSpecialIsProxy = 1;
	};

	class 10Rnd_338_Mag;
	class Tenthed_10Rnd_338_Mag_Yellow : 10Rnd_338_Mag {
		scope = 2;
		author = "Scion Conflict Mod Team";
		displayName = "[10th] 10Rnd 338 Shrapnel Magazine";
		count = 10;
		descriptionshort = "Rounds: 10<br />Used in: [10th] ARG-88/M<br/>Contains large pieces of shrapnel which are accelerated in the augmented railguns of the ARG rifle series.";
		ammo = "Tenthed_SC_338_NM_Ball";
	};

	class 20Rnd_762x51_Mag;
	class Tenthed_60Rnd_5x23mm_Mag : 20Rnd_762x51_Mag {
		model = "\OPTRE_Weapons\Ammo\M7Ammo.p3d";
		displayname = "[10th] 60Rnd 5x23mm Magazine";
		displaynameshort = "5x23mm";
		ammo = "Tenthed_5x23_Caseless";
		count = 60;
		initspeed = 600;
		picture = "\OPTRE_weapons\smg\icons\magazine.paa";
		descriptionshort = "60 Round Magazine<br>5x23mm";
		mass = 8;
		tracersEvery = 0;
		lastRoundsTracer = 5;
	};
	class Tenthed_60Rnd_5x23mm_Mag_tracer : Tenthed_60Rnd_5x23mm_Mag {
		displayname = "[10th] 60Rnd 5x23mm Magazine (Tracers)";
		displaynameshort = "5x23mm Tracer";
		ammo = "Tenthed_5x23_Caseless_Tracer";
		descriptionshort = "60 Round Magazine<br>5x23mm<br>Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 60;
	};
	class Tenthed_60Rnd_5x23mm_Mag_tracer_yellow : Tenthed_60Rnd_5x23mm_Mag_tracer {
		displayname = "[10th] 60Rnd 5x23mm Magazine (Tracers Yellow)";
		ammo = "Tenthed_5x23_Caseless_Tracer_Yellow";
	};
	class Tenthed_48Rnd_5x23mm_Mag : Tenthed_60Rnd_5x23mm_Mag {
		displayname = "[10th] 48Rnd 5x23mm Magazine";
		count = 48;
		initspeed = 700;
		descriptionshort = "48 Round Magazine<br>5x23mm";
		mass = 6;
		tracersEvery = 0;
		lastRoundsTracer = 5;
	};
	class Tenthed_48Rnd_5x23mm_Mag_tracer : Tenthed_60Rnd_5x23mm_Mag {
		displayname = "[10th] 48Rnd 5x23mm Magazine (Tracers)";
		displaynameshort = "5x23mm Tracer";
		ammo = "Tenthed_5x23_Caseless_Tracer";
		descriptionshort = "48 Round Magazine<br>5x23mm<br>Tracer";
		tracersEvery = 1;
		lastRoundsTracer = 48;
	};
	class Tenthed_48Rnd_5x23mm_Mag_tracer_yellow : Tenthed_48Rnd_5x23mm_Mag {
		displayname = "[10th] 48Rnd 5x23mm Magazine (Tracers Yellow)";
		ammo = "Tenthed_5x23_Caseless_Tracer_Yellow";
	};
	class Tenthed_48Rnd_5x23mm_JHP_Mag : Tenthed_60Rnd_5x23mm_Mag {
		displayname = "[10th] 48Rnd 5x23mm (JHP) Magazine";
		displaynameshort = "5x23mm JHP";
		ammo = "Tenthed_5x23_Caseless_JHP";
		descriptionshort = "48 Round Magazine<br>5x23mm<br>Jacketed Hollow Point";
	};
	class Tenthed_48Rnd_5x23mm_FMJ_Mag : Tenthed_60Rnd_5x23mm_Mag {
		displayname = "[10th] 48Rnd 5x23mm (FMJ) Magazine";
		displaynameshort = "5x23mm FMJ";
		ammo = "Tenthed_5x23_Caseless_FMJ";
		descriptionshort = "48 Round Magazine<br>5x23mm<br>Full Metal Jacket";
	};

};
