class CfgPatches {
    class Tenthed_Armor_Marine_Base {
        author = "Akira";
        name = "10th ODST: Marine Armor Base";
        requiredAddons[] = {
            "OPTRE_Core",
            "TCF_Main",
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
	
    // Helmet Base class
	class Tenthed_Marine_Helmet_Base: ItemCore {
		scope=0;
		scopeArsenal=0;
		author="";
		ace_hearing_protection=1;
		displayName="[10th] Base Helmet";
		model="";
		picture="";
		hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Neck",
				"H_UNSCVacLower",
				"H_UNSCVacVisor",
				"H_VacCollar",
				"H_Ghillie"
		};
		hiddenSelectionsTextures[]={};
        class ItemInfo: HeadgearItem {
			mass=40;
			uniformModel="\OPTRE_UNSC_Units\Army\helmet.p3d";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Neck",
				"H_UNSCVacLower",
				"H_UNSCVacVisor",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsMaterials[]= {
				"TCF_EQUIPMENT\Helmets\Misc\data\Helmet_OP.rvmat"
			};
			hiddenSelectionsTextures[]= {
				"TCF_EQUIPMENT\Helmets\Misc\data\ch252_WDL.paa",
				"optre_unsc_units\army\data\helmet_visor_ca.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName="HitHead";
					armor = 17;
					passThrough = 0.1;
				};
				class Face {
					hitpointName="HitFace";
					armor = 17;
					passThrough = 0.1;
				};
				class Neck {
					hitpointName="HitNeck";
					armor = 17;
					passThrough = 0.1;
				};
			};
		};
	};

    // Armor Base class
	class Tenthed_Marine_Vest_Base: V_PlateCarrier1_rgr {
		scope=0;
		scopeArsenal=0;
		author="";
		displayName="[10th] Base Marine Vest";
		model="";
		picture="";
		hiddenSelections[]= {
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_Ghillie",
			"A_ODST",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
            "AS_LargeRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem {
			vestType="Rebreather";
            hiddenSelections[]= {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                "A_ODST",
                "A_ShinArmorLeft",
                "A_ShinArmorRight",
                "A_Ghillie",
                "A_ODST",
                "A_TacPad",
                "A_ThighArmorLeft",
                "A_ThighArmorRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_LargeRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_AR",
                "AP_BR",
                "AP_Canteen",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
            hiddenSelectionsTextures[]= {
                "TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL_2.paa",
                "TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL.paa",
                "TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL_3.paa",
                "optre_unsc_units\army\data\ghillie_woodland_co.paa",
                "optre_unsc_units\army\data\odst_armor_co.paa"
            };
			uniformModel="";
			containerClass="Supply250";
			mass=20;
			passThrough=0.1;
			modelSides[]={6};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 90;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 90;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 90;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 90;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 90;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 90;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 90;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 90;
					passThrough = 0.1;
				};
			};
		};
	};

    // Marine Helmet
	class Tenthed_CH252_Marine_Helmet : Tenthed_Marine_Helmet_Base {
		scope=2;
		scopeArsenal=2;
		model="\OPTRE_UNSC_Units\Army\helmet.p3d";
		displayName="[10th] CH252 Marine";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		hiddenSelections[]= {
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Neck",
			"H_UNSCVacLower",
			"H_UNSCVacVisor",
			"H_VacCollar",
			"H_Ghillie"
		};
		hiddenSelectionsMaterials[]= {
			"TCF_EQUIPMENT\Helmets\Misc\data\Helmet_OP.rvmat"
		};
		hiddenSelectionsTextures[]= {
			"TCF_EQUIPMENT\Helmets\Misc\data\CH252_WDL.paa",
			"optre_unsc_units\army\data\helmet_visor_ca.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\helmet.p3d";
		};
	};

    // Marine Armor
	class Tenthed_M52A_AR_Rifle_WDL: Tenthed_Marine_Vest_Base {
		author="Burgess and Baseplate";
		scope=2;
        scopeArsenal=2;
		displayName="[10th] M52A (Rifleman) [Woodland]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]= {
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_Ghillie",
			"A_ODST",
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
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
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
		hiddenSelectionsMaterials[]= {
			"TCF_EQUIPMENT\Vests\Misc\data\Vest_OP.rvmat",
			"TCF_EQUIPMENT\Vests\Misc\data\armor_OP.rvmat",
			"TCF_EQUIPMENT\Vests\Misc\data\legs_OP.rvmat"
		};
		hiddenSelectionsTextures[]= {
			"TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL_2.paa",
			"TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL.paa",
			"TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL_3.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_Ghillie",
				"A_ODST",
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
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
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
			containerClass="Supply250";
		};
	};

	// Marine Medic Armor
	class Tenthed_M52A_AR_Medic_WDL: Tenthed_Marine_Vest_Base {
		author="Burgess and Baseplate";
		scope=2;
        scopeArsenal=2;
		displayName="[10th] M52A (Medic) [Woodland]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]= {
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_Ghillie",
			"A_ODST",
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
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
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
		hiddenSelectionsMaterials[]= {
			"TCF_EQUIPMENT\Vests\Misc\data\Vest_OP.rvmat",
			"TCF_EQUIPMENT\Vests\Misc\data\armor_OP.rvmat",
			"TCF_EQUIPMENT\Vests\Misc\data\legs_OP.rvmat"
		};
		hiddenSelectionsTextures[]= {
			"TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL_2.paa",
			"TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL.paa",
			"TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL_3.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_Ghillie",
				"A_ODST",
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
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
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
			containerClass="Supply250";
		};
	};

	// Marine Light Armor
	class Tenthed_M52A_AR_Light_WDL: Tenthed_Marine_Vest_Base {
		author="Burgess and Baseplate";
		scope=2;
        scopeArsenal=2;
		displayName="[10th] M52A (Light) [Woodland]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]= {
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[]= {
			"TCF_EQUIPMENT\Vests\Misc\data\Vest_OP.rvmat",
			"TCF_EQUIPMENT\Vests\Misc\data\armor_OP.rvmat",
			"TCF_EQUIPMENT\Vests\Misc\data\legs_OP.rvmat"
		};
		hiddenSelectionsTextures[]= {
			"TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL_2.paa",
			"TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL.paa",
			"TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL_3.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"TCF_EQUIPMENT\Vests\Misc\data\ODST_Pads_W.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply250";
		};
	};

	// Marine Grenadier Armor
	class Tenthed_M52A_AR_Grenadier_WDL: Tenthed_Marine_Vest_Base {
		author="Burgess and Baseplate";
		scope=2;
        scopeArsenal=2;
		displayName="[10th] M52A (Grenadier) [Woodland]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]= {
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_Ghillie",
			"A_ODST",
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
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[]= {
			"TCF_EQUIPMENT\Vests\Misc\data\Vest_OP.rvmat",
			"TCF_EQUIPMENT\Vests\Misc\data\armor_OP.rvmat",
			"TCF_EQUIPMENT\Vests\Misc\data\legs_OP.rvmat"
		};
		hiddenSelectionsTextures[]= {
			"TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL_2.paa",
			"TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL.paa",
			"TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL_3.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_Ghillie",
				"A_ODST",
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
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply250";
		};
	};

	// Marine Breacher Armor
    class Tenthed_M52A_AR_Breacher_WDL: Tenthed_Marine_Vest_Base {
		author="Burgess and Baseplate";
		scope=2;
        scopeArsenal=2;
		displayName="[10th] M52A (Breacher) [Woodland]";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]= {
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_ODST",
			"A_TacPad",
			"AS_MediumLeft",
			"AS_LargeRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_MGThigh",
			"AP_Pack",
			"AP_Rounds",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[]= {
			"TCF_EQUIPMENT\Vests\Misc\data\Vest_OP.rvmat",
			"TCF_EQUIPMENT\Vests\Misc\data\armor_OP.rvmat",
			"TCF_EQUIPMENT\Vests\Misc\data\legs_OP.rvmat"
		};
		hiddenSelectionsTextures[]= {
			"TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL_2.paa",
			"TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL.paa",
			"TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL_3.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_ODST",
				"A_TacPad",
				"AS_MediumLeft",
				"AS_LargeRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_Pack",
				"AP_Rounds",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply250";
		};
	};
};