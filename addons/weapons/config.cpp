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
class Single;
class FullAuto;

class CfgWeapons {

	// Original Weapons
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
		descriptionShort = "The 10ths Etilka";
		//model = "\OPTRE_Weapons\Etilka\M247H_Jorge.p3d";
		cursor = "OPTRE_M41";
		magazines[] = {
			"Tenthed_SC_200Rnd_338_Mag"
		};
		magazineWell[] = {};
		baseWeapon = "Tenthed_Etilka";
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

	//New Weapons
	class OPTRE_M6C; // Infantry Pistol
	class TCF_M6D; // Pilot Pistol
	class LM_OPCAN_AR0M37; // common pool rifle
	class LM_OPCAN_AR0M37_SHT;
	class TCF_MA1B;
	class OPTRE_BR45;
};
