class CfgPatches {
    class Tenthed_weapons {
        author = "Akira";
        name = "10th ODST: Weapons";
        requiredAddons[] = {
            "Tenthed_core",
			"sc_weapons_2"
        };
        weapons[] = {
			"Tenthed_SC_Rifle_PKMP",
			"Tenthed_Etilka",
			"Tenthed_ARG47",
			"Tenthed_ARG88M",
			"Tenthed_M7",
			"Tenthed_M7_Folded"
		};
        units[] = {};
    };
};

class asdg_MuzzleSlot_338;
class asdg_OpticRail1913;

//class asdg_OpticRail;
class asdg_UnderSlot;
//class asdg_MuzzleSlot;
class Mode_FullAuto;
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;
class SlotInfo;
class Mode_Burst;
class PointerSlot;

class CfgWeapons {

	class SC_Rifle_PKMP;
	class Tenthed_SC_Rifle_PKMP : SC_Rifle_PKMP {
		scope = 2;
		author = "Scion Conflict Mod Team";
		maxZeroing = 1000;
		displayName = "[10th] PKMP";
		descriptionshort = "[10th] PKMP - Heavy Machine Gun";
		model = "\sc_weapons_2\data\pkmp\pkmp.p3d";
		magazines[] = {
			"Tenthed_SC_200Rnd_338_Mag"
		};
		reloadAction = "GestureReloadSPAR_02";
		handAnim[] = {
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\Anim\mmg_02.rtm"
		};
		drySound[] = {
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry",
			0.60000002,
			1,
			10
		};
		reloadMagazineSound[] = {
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[] = {
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_firemode",
			0.69999999,
			1,
			5
		};
		picture = "\sc_weapons_2\data\icons\icon_pkmp_ca.paa";
		inertia = 1;
		recoil = "recoil_mmg_01";
		modes[] = {
			"FullAutoFast",
			"FullAutoSlow"
		};
		hiddenSelections[] = {
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"sc_weapons_2\data\pkmp\textures\body_co.paa",
			"sc_weapons_2\data\pkmp\textures\mag_co.paa"
		};

		mrbs = 3000;
		ACE_barrelTwist = 240.03;
		ACE_barrelLength = 657.86;
		ACE_Overheating_allowSwapBarrel = 1;

		class FullAutoSlow : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {
					"MMG02_Shot_SoundSet",
					"MMG02_Tail_SoundSet",
					"MMG02_InteriorTail_SoundSet"
				};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {
					"MMG02_silencerShot_SoundSet",
					"MMG02_silencerTail_SoundSet",
					"MMG02_silencerInteriorTail_SoundSet"
				};
			};
			dispersion = 0.00122;
			reloadTime = 0.15000001;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class FullAutoFast : FullAutoSlow {
			reloadTime = 0.075000003;
			textureType = "fastAuto";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 140;
			allowedSlots[] = { 901 };
			class MuzzleSlot : asdg_MuzzleSlot_338 {};
			class CowsSlot : asdg_OpticRail1913 {};
			class UnderBarrelSlot : asdg_UnderSlot {};
		};
	};

	class OPTRE_M247H_Etilka;
	class Tenthed_Etilka : OPTRE_M247H_Etilka {
		dlc = "OPTRE";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] M247H HMG 'Etilka'";
		//descriptionShort = "Etilka was a specially-modified M247H machine gun employed by SPARTAN-II commando Jorge-052";
		descriptionShort = "";
		model = "\OPTRE_Weapons\Etilka\M247H_Jorge.p3d";
		cursor = "OPTRE_M41";
		magazines[] = {
			"Tenthed_SC_200Rnd_338_Mag"
		};
		magazineWell[] = {};
		baseWeapon = "Tenthed_Etilka";
		handAnim[] = {
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\Etilka\data\anim\Chainsaw.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\Etilka\data\anim\Chainsaw_Spartan.rtm"
		};
		class WeaponSlotsInfo {
			mass = 250;
			class CowsSlot : CowsSlot {
				compatibleitems[] = {};
			};
			class MuzzleSlot : MuzzleSlot {
				compatibleitems[] = {};
			};
		};
		modes[] = {
			"FullAuto",
			"close",
			"short",
			"medium",
			"far"
		};
		class FullAuto : Mode_FullAuto {
			sounds[] = {
				"StandardSound"
			};
			class BaseSoundModeType {
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound : BaseSoundModeType {
				begin1[] = {
					"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",
					1,
					1,
					2000
				};
				begin2[] = {
					"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",
					1,
					1,
					2000
				};
				soundBegin[] = {
					"begin1",
					0.34,
					"begin2",
					0.33000001
				};
				class SoundTails {
					class TailTrees {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",
							1.9952624,
							1,
							1200
						};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.1;
			dispersion = 0.001;
			recoil = "recoil_auto_mk200";
			recoilProne = "recoil_auto_prone_mk200";
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 300;
			midRangeProbab = 0.69999999;
			maxRange = 600;
			maxRangeProbab = 0.050000001;
			soundBurst = 0;
			burst = 1;
			displayName = "$STR_DN_MODE_FULLAUTO";
			textureType = "fullAuto";
		};
		class close : FullAuto {
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.050000001;
			midRange = 20;
			midRangeProbab = 0.69999999;
			maxRange = 50;
			maxRangeProbab = 0.039999999;
			showToPlayer = 0;
		};
		class short : close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.050000001;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 300;
			maxRangeProbab = 0.039999999;
		};
		class medium : close {
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.050000001;
			midRange = 300;
			midRangeProbab = 0.69999999;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class far : medium {
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.050000001;
			midRange = 500;
			midRangeProbab = 0.40000001;
			maxRange = 650;
			maxRangeProbab = 0.0099999998;
		};
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = {
			"OPTRE_Weapons\etilka\data\m247_co.paa",
			"OPTRE_Weapons\etilka\data\mag_co.paa",
			"OPTRE_Weapons\etilka\data\heavyattach_co.paa"
		};
	};

	class SC_Rifle_ARG47;
	class Tenthed_ARG47 : SC_Rifle_ARG47 {
		scope = 2;
		author = "Scion Conflict Mod Team";
		maxZeroing = 500;
		displayName = "[10th] ARG-47";
		descriptionshort = "Automatic Railgun Rifle 47 - Carbine<br/>Railgun augmented ballistic carbine with integrated flashlight.";
		model = "\sc_weapons\data\arg47\arg47.p3d";
		magazines[] = {
			"Tenthed_30Rnd_762x39_Shrapnel_Mag_Tracer_Yellow"
		};
		reloadAction = "GestureReloadAKM";
		handAnim[] = {
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\AKM\Data\Anim\akm.rtm"
		};
		drySound[] = {
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry",
			0.60000002,
			1,
			10
		};
		reloadMagazineSound[] = {
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[] = {
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_firemode",
			0.69999999,
			1,
			5
		};
		picture = "\sc_weapons\data\icons\icon_arg47_ca.paa";
		inertia = 0.5;
		recoil = "recoil_aks";
		modes[] = {
			"FullAuto",
			"Single",
			"FullAuto_medium"
		};
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"sc_weapons\data\arg47\textures\camo_co.paa"
		};
		class FlashLight {
			color[] = { 170,60,80 };
			ambient[] = { 0.89999998,0.81,0.69999999 };
			intensity = 130;
			size = 1;
			innerAngle = 5;
			outerAngle = 100;
			coneFadeCoef = 8;
			position = "flash dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 1.5;
			flareMaxDistance = 50;
			dayLight = 1;
			class Attenuation {
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 0.2;
				hardLimitStart = 27;
				hardLimitEnd = 34;
			};
			scale[] = { 0 };
		};
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {
					"MMG02_Shot_SoundSet",
					"MMG02_Tail_SoundSet",
					"MMG02_InteriorTail_SoundSet"
				};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {
					"MMG02_silencerShot_SoundSet",
					"MMG02_silencerTail_SoundSet",
					"MMG02_silencerInteriorTail_SoundSet"
				};
			};
			dispersion = 0.00145;
			reloadTime = 0.085000001;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class FullAuto : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {
					"MMG02_Shot_SoundSet",
					"MMG02_Tail_SoundSet",
					"MMG02_InteriorTail_SoundSet"
				};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {
					"MMG02_silencerShot_SoundSet",
					"MMG02_silencerTail_SoundSet",
					"MMG02_silencerInteriorTail_SoundSet"
				};
			};
			dispersion = 0.00145;
			reloadTime = 0.085000001;
			minRange = 2;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.050000001;
		};
		class FullAuto_medium : FullAuto {
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.69999999;
			maxRange = 100;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 2;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 85;
			allowedSlots[] = { 701,801,901 };
			class MuzzleSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] =
				{
					"SC_B2_Suppressor",
					"muzzle_snds_M"
				};
				iconScale = 0.1;
			};
			class CowsSlot : asdg_OpticRail1913 {
				iconScale = 0.1;
			};
			class UnderBarrelSlot : asdg_UnderSlot {
				iconScale = 0.1;
			};
		};
	};

	class SC_Rifle_ARG88;
	class Tenthed_ARG88M : SC_Rifle_ARG88 {
		author = "Scion Conflict Mod Team";
		maxZeroing = 1200;
		displayName = "[10th] ARG-88/M";
		descriptionshort = "Automatic Railgun Rifle 88/M - Marksman Rifle<br/>Railgun augmented ballistic rifle with integrated flashlight.";
		model = "\sc_weapons\data\arg88\arg88m.p3d";
		magazines[] = {
			"Tenthed_10Rnd_338_Mag_Yellow"
		};
		picture = "\sc_weapons\data\icons\icon_arg88m_ca.paa";
		modes[] = {
			"Single",
			"Burst"
		};
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"sc_weapons\data\arg88\textures\camo_co.paa"
		};
		recoil = "recoil_dmr_02";
		class Single : Mode_SemiAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {
					"GM6Lynx_Shot_SoundSet",
					"GM6Lynx_Tail_SoundSet",
					"GM6Lynx_InteriorTail_SoundSet"
				};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {
					"MMG02_silencerShot_SoundSet",
					"MMG02_silencerTail_SoundSet",
					"MMG02_silencerInteriorTail_SoundSet"
				};
			};
			dispersion = 0.00053000002;
			reloadTime = 0.11;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class Burst : Mode_Burst {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {
					"GM6Lynx_Shot_SoundSet",
					"GM6Lynx_Tail_SoundSet",
					"GM6Lynx_InteriorTail_SoundSet"
				};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {
					"MMG02_silencerShot_SoundSet",
					"MMG02_silencerTail_SoundSet",
					"MMG02_silencerInteriorTail_SoundSet"
				};
			};
			textureType = "dual";
			burst = 2;
			dispersion = 0.00053000002;
			reloadTime = 0.039999999;
			minRange = 2;
			minRangeProbab = 0.89999998;
			midRange = 50;
			midRangeProbab = 0.69999999;
			maxRange = 200;
			maxRangeProbab = 0.050000001;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 110;
			allowedSlots[] = { 701,801,901 };
			class MuzzleSlot : asdg_MuzzleSlot_338 {
				iconScale = 0.1;
			};
			class CowsSlot : asdg_OpticRail1913 {
				iconScale = 0.1;
			};
			class UnderBarrelSlot : asdg_UnderSlot {
				iconScale = 0.1;
			};
		};
	};

	class OPTRE_M7;
	class Tenthed_M7 : OPTRE_M7 {
		dlc = "OPTRE";
		author = "Article 2 Studios";
		scope = 2;
		scopeArsenal = 2;
		handAnim[] = {
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\smg\data\anim\m7_handpos.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\smg_handanim_Spartan.rtm"
		};
		reloadAction = "OPTRE_GestureReloadM7";
		model = "\OPTRE_Weapons\SMG\SMG.p3d";
		displayName = "[10th] M7/Caseless SMG";
		descriptionShort = "UNSC M7 SMG";
		picture = "\OPTRE_weapons\smg\icons\smg.paa";
		magazines[] = {
			"Tenthed_60Rnd_5x23mm_Mag",
			"Tenthed_60Rnd_5x23mm_Mag_tracer",
			"Tenthed_60Rnd_5x23mm_Mag_tracer_yellow",
			"Tenthed_48Rnd_5x23mm_Mag",
			"Tenthed_48Rnd_5x23mm_Mag_tracer",
			"Tenthed_48Rnd_5x23mm_Mag_tracer_yellow",
			"Tenthed_48Rnd_5x23mm_JHP_Mag",
			"Tenthed_48Rnd_5x23mm_FMJ_Mag"
		};
		magazineWell[] = {};
		recoil = "recoil_pdw";
		baseWeapon = "Tenthed_M7";
		cursor = "OPTRE_M7";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\SMG\SMG_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_SMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_SMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_SMG";
		HUD_BulletInARows = 3;
		HUD_TotalPosibleBullet = 60;
		hiddenSelections[] = {
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"OPTRE_Weapons\smg\data\m7_m7_co.paa",
			"OPTRE_Weapons\smg\data\m7_magazine_co.paa"
		};
		class GunParticles {
			class EffectShotCloud {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 30;
			class MuzzleSlot : MuzzleSlot {
				compatibleitems[] = {
					"OPTRE_M7_Silencer"
				};
			};
			class CowsSlot : CowsSlot {
				compatibleitems[] = {
					"optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
					"OPTRE_M392_Scope",
					"OPTRE_BR55HB_Scope",
					"OPTRE_M7_Sight",
					"OPTRE_M12_Optic",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"OPTRE_BR45_Scope"
				};
			};
			class PointerSlot : PointerSlot {
				compatibleitems[] = {
					"OPTRE_M7_Laser",
					"OPTRE_M7_Flashlight"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot {
				compatibleitems[] = {};
			};
		};
		modes[] = {
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far"
		};
		class Single : Mode_SemiAuto {
			sounds[] = {
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType {
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound : BaseSoundModeType {
				begin1[] = {
					"\OPTRE_Weapons\SMG\Data\sounds\SMG_1.ogg",
					1.5,
					1,
					2000
				};
				begin2[] = {
					"\OPTRE_Weapons\SMG\Data\sounds\SMG_2.ogg",
					1.5,
					1,
					2000
				};
				begin3[] = {
					"\OPTRE_Weapons\SMG\Data\sounds\SMG_3.ogg",
					1.5,
					1,
					2000
				};
				soundBegin[] = {
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails {
					class TailInterior {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",
							1.5848932,
							1,
							1200
						};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType {
				begin1[] = {
					"\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",
					1,
					1,
					600
				};
				begin2[] = {
					"\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",
					1,
					1,
					600
				};
				soundBegin[] = {
					"begin1",
					0.5,
					"begin2",
					0.5
				};
				class SoundTails {
					class TailInterior {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_tail_interior",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_trees",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\silencer_Vermin_tail_forest",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_meadows",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_houses",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.066;
			dispersion = 0.0013;
			recoil = "recoil_single_pdw";
			recoilProne = "recoil_single_prone_pdw";
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 50;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.050000001;
		};
		class FullAuto : Mode_FullAuto {
			sounds[] = {
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType {
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound : BaseSoundModeType {
				begin1[] = {
					"\OPTRE_Weapons\SMG\Data\sounds\SMG_1.ogg",
					1.5,
					1,
					2000
				};
				begin2[] = {
					"\OPTRE_Weapons\SMG\Data\sounds\SMG_2.ogg",
					1.5,
					1,
					2000
				};
				begin3[] = {
					"\OPTRE_Weapons\SMG\Data\sounds\SMG_3.ogg",
					1.5,
					1,
					2000
				};
				soundBegin[] = {
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails {
					class TailInterior {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",
							1.5848932,
							1,
							1200
						};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType {
				begin1[] = {
					"\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",
					1,
					1,
					600
				};
				begin2[] = {
					"\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",
					1,
					1,
					600
				};
				soundBegin[] = {
					"begin1",
					0.5,
					"begin2",
					0.5
				};
				class SoundTails {
					class TailInterior {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_tail_interior",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_trees",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\silencer_Vermin_tail_forest",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_meadows",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] = {
							"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_houses",
							1,
							1,
							400
						};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.066;
			dispersion = 0.0013;
			recoil = "recoil_auto_pdw";
			recoilProne = "recoil_auto_prone_pdw";
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 50;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.050000001;
		};
		class close : FullAuto {
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.050000001;
			midRange = 30;
			midRangeProbab = 0.69999999;
			maxRange = 50;
			maxRangeProbab = 0.039999999;
			showToPlayer = 0;
		};
		class short : close {
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.050000001;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 300;
			maxRangeProbab = 0.039999999;
		};
		class medium : close {
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.050000001;
			midRange = 400;
			midRangeProbab = 0.60000002;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far : close {
			burst = 3;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 700;
			minRange = 350;
			minRangeProbab = 0.039999999;
			midRange = 550;
			midRangeProbab = 0.5;
			maxRange = 700;
			maxRangeProbab = 0.0099999998;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 10;
	};
	class Tenthed_M7_Folded : Tenthed_M7 {
		dlc = "OPTRE";
		handAnim[] = {
			"OFP2_ManSkeleton"
		};
		reloadAction = "GestureReloadPistol";
		model = "\OPTRE_Weapons\SMG\SMG_folded.p3d";
		displayName = "[10th] M7/Caseless SMG (Folded)";
		descriptionShort = "UNSC M7 SMG (Folded)";
		type = 2;
		recoil = "recoil_mk200";
		baseWeapon = "Tenthed_M7_Folded";
		class Single : Single {
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
		};
		class FullAuto : FullAuto {
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
		};
	};
};