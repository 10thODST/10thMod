class CfgPatches {
    class Tenthed_Units_Astra_Armor {
        author = "Akira";
        name = "10th ODST: United Astra Federation Armor";
        requiredVersion=0.1;
        requiredAddons[] = {
            "Tenthed_core",
            "Tenthed_Units_Astra_Base"
        };
        weapons[] = {};
        units[] = {};
    };
};
class cfgWeapons {
	class HeadgearItem;
	class ItemCore;
	class InventoryItem_Base_F;
	class VestItem;
	class V_PlateCarrier1_rgr;
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class NVGoggles;
	class HitPoints;
	class Uniform_Base: ItemCore {
		class ItemInfo;
	};

    // [10th] United Astra Federation

    // Helmets
    // OPTRE_FC_VX19_Helmet_Urban
	class OPTRE_FC_VX19_Helmet;
	class Tenthed_Astra_VX19_Helmet: OPTRE_FC_VX19_Helmet {
		dlc="OPTRE";
		scope=2;
		author="Article 2 Studios";
		displayName="[10th] Astra VX19 Flight Helmet (Urban)";
		model="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
		picture="\OPTRE_FC_Units\Marines\data\h3_pilothelmet_i_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\marines\data\h3_pilothelmet_Urban_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
		};
		optreVarietys[]=
		{
			"_dp",
			"",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsMaterials[]=
		{
			"optre_fc_units\marines\data\h3_pilothelmet.rvmat",
			"optre_fc_units\marines\data\h3_pilothelmet_visor.rvmat"
		};
	};
	class OPTRE_FC_VX19_Helmet_dp;
	class Tenthed_Astra_VX19_Helmet_dp: OPTRE_FC_VX19_Helmet_dp {
		dlc="OPTRE";
		scope=1;
		author="Article 2 Studios";
		displayName="VX19 Flight Helmet (Urban)";
		model="\OPTRE_FC_Units\Marines\h3_pilothelmet_dp.p3d";
		picture="\OPTRE_FC_Units\Marines\data\h3_pilothelmet_i_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\marines\data\h3_pilothelmet_Urban_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_CA.paa"
		};
		optreVarietys[]=
		{
			"_dp",
			"",
			"_broken"
		};
		optreHUDStyle="ODST_1";
	};
    // OPTRE_UNSC_Recon_Helmet
	class OPTRE_UNSC_CH252D_Helmet_Base;
	class Tenthed_Astra_Recon_Helmet: OPTRE_UNSC_CH252D_Helmet_Base {
		dlc="OPTRE";
		scope=2;
		author="Article 2 Studios";
		displayName="[10th] Astra R/B5 Helmet";
		picture="\OPTRE_UNSC_Units\Army\icons\odst_recon.paa";
	};
	class Tenthed_Astra_Recon_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_Base {
		dlc="OPTRE";
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Article 2 Studios";
		model="\OPTRE_UNSC_Units\Army\recon_helmet_dp.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\recon_co.paa",
			"optre_unsc_units\army\data\recon_visor_ca.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"optre_unsc_units\army\data\recon_co.paa",
				"optre_unsc_units\army\data\recon_visor_ca.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
		};
	};
    // OPTRE_UNSC_CH252_Helmet2_Vacuum_URB_MED
	class OPTRE_UNSC_CH252_Helmet2_Vacuum_URB_MED;
	class Tenthed_Astra_CH252_Helmet: OPTRE_UNSC_CH252_Helmet2_Vacuum_URB_MED {
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="[10th] Astra ECH252 Helmet (Polarized) [Urban / Medic]";
	};
    // OPTRE_UNSC_CH252A_Black_Helmet
	class OPTRE_UNSC_CH252A_Black_Helmet;
	class Tenthed_Astra_CH252A_Helmet: OPTRE_UNSC_CH252A_Black_Helmet {
		dlc="OPTRE";
		scope=2;
		author="Article 2 Studios";
		displayName="[10th] Astra CH252[AA] Helmet (Black)";
	};
	class Tenthed_Astra_CH252A_Helmet_dp: OPTRE_UNSC_CH252A_Black_Helmet {
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		dlc="OPTRE";
		author="Article 2 Studios";
		displayName="[10th] Astra CH252[AA] Helmet (Black)";
	};

    // Armor
	class OPTRE_UNSC_M52A_Armor_Rifleman_MAR;
	class Tenthed_Astra_Vest_Base: OPTRE_UNSC_M52A_Armor_Rifleman_MAR {
		scope=0;
		scopeArsenal=0;
		dlc="FZ";
		author="Vespade & Baseplate";
		displayName="[10th] Astra Base";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
			"V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
			"V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
			"",
			""
		};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=35;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    // VES_M52A_URB_Rifleman_D
	class Tenthed_Astra_Rifleman: Tenthed_Astra_Vest_Base {
        scope=2;
		scopeArsenal=2;
		displayName="[10th] Astra M52A (Rifleman)";
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_R_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
    // VES_M52A_URB_Grenadier_B
	class Tenthed_Astra_Grenadier: Tenthed_Astra_Vest_Base {
        scope=2;
		scopeArsenal=2;
		displayName="[10th] Astra M52A (Grenadier)			";
		class ItemInfo: ItemInfo {
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
    // VES_M52A_URB_Corpsman_B
	class Tenthed_Astra_Corpsman: Tenthed_Astra_Vest_Base {
        scope=2;
		scopeArsenal=2;
		displayName="[10th] Astra M52A (Corpsman)			";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_M_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
    // VES_M52A_URB_Security_B
	class Tenthed_Astra_Security: Tenthed_Astra_Vest_Base {
        scope=2;
		scopeArsenal=2;
		displayName="[10th] Astra M52A (Security)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_M_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};

};