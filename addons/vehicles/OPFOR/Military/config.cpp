class CfgPatches {
	class Tenthed_OPFOR_Vehicles_Military {
		author = "Akira" ;
		name = "10th ODST: Vehicles";
		requiredAddons[] = {
			"Tenthed_core",
			"OPTRE_Core" 
		};
		weapons[] = {};
		units[] = {
			"Tenthed_O_Boat_Armed_01_hmg_F",
			"Tenthed_O_Boat_Transport_01_F",
			"Tenthed_O_Lifeboat",
			"Tenthed_O_Truck_03_transport_F",
			"Tenthed_O_Truck_03_covered_F",
			"Tenthed_O_UGV_01_rcws_F",
			"Tenthed_O_Plane_Fighter_02_F",
			"Tenthed_O_SDV_01_F",
			"Tenthed_HTNK_SLA",
			"Tenthed_HTNK_Grey",
			"Tenthed_HTNK_Desert",
			"Tenthed_HTNK_Snow",
			"Tenthed_HTNK_Green",
			"Tenthed_O_HMG_01_high_F",
			"Tenthed_O_HMG_01_F",
			"Tenthed_O_Mortar_01_F",
			"Tenthed_optre_catfish_ins_mg_f",
			"Tenthed_optre_catfish_ins_unarmed_f",
			"Tenthed_OPTRE_M12_ins_MED",
			"Tenthed_OPTRE_M12_ins_APC",
			"Tenthed_OPTRE_M12_LRV_ins",
			"Tenthed_OPTRE_M12_TD_ins",
			"Tenthed_VES_M19_URF_HMG",
			"Tenthed_TCF_URF_Nightingale",
			"Tenthed_OPTRE_Pelican_armed_ins",
			"Tenthed_OPTRE_Pelican_armed_70mm_ins",
			"Tenthed_OPTRE_Pelican_unarmed_ins",
			"Tenthed_OPTRE_ins_falcon",
			"Tenthed_OPTRE_ins_falcon_unarmed",
			"Tenthed_OPTRE_Falconagl_02",
			"Tenthed_OPTRE_M494_INS",
			"Tenthed_OPTRE_M808B_INS",
			"Tenthed_OPTRE_Static_FG75",
			"Tenthed_OPTRE_Static_M41_Ins",
			"Tenthed_OPTRE_Static_ATGM_Ins",
			"Tenthed_TCF_Arkhangelsk_Koslovic",
			"Tenthed_TCF_Ural_MLRS_Koslovic",
			"Tenthed_OPTRE_tarantula_02",
			"Tenthed_SC_SaurusAPC_AA_SE",
			"Tenthed_LM_OPCAN_M92_BOLT_URA",
			"Tenthed_FRI_RAD_Regular",
			"Tenthed_TCF_M247H_FRI",
			"Tenthed_TCF_M92_BOLT_FRI",
			"Tenthed_FRI_SAM_Regular",
			"Tenthed_O_G_HMG_02_F",
			"Tenthed_O_G_HMG_02_high_F",
			"Tenthed_O_G_Mortar_01_F",
			"Tenthed_TCF_M48_Buzz_FRI",
			"Tenthed_TCF_Witherwing_Frieden",
			"Tenthed_OPTRE_YSS_1000_A_ins",
			"Tenthed_OPTRE_bayonet_02",
			"Tenthed_TCF_gladius_02",
			"Tenthed_TCF_gladius_02L",
			"Tenthed_TCF_D81LRTA",
			"Tenthed_TCF_D81LRTI",
			"Tenthed_TCF_D56I",
			"Tenthed_TCF_D56V",
			"Tenthed_OPTRE_UNSC_hornet_ins",
			"Tenthed_VES_MQ221_URF",
			"Tenthed_LM_OPCAN_M350_INS_WDL",
			"Tenthed_TCF_Otakar_Koslovic",
			"Tenthed_TCF_Bastardsword",
			"Tenthed_OPTRE_m1015_mule_ins",
			"Tenthed_OPTRE_m1015_mule_ammo_ins",
			"Tenthed_OPTRE_m1015_mule_cover_ins",
			"Tenthed_OPTRE_m1015_mule_fuel_ins",
			"Tenthed_OPTRE_m1015_mule_medical_ins",
			"Tenthed_O_Plane_CAS_02_dynamicLoadout_F"
		};
	};
};

class CfgVehicles {
// begin

	class O_Boat_Armed_01_hmg_F;
	class Tenthed_O_Boat_Armed_01_hmg_F : O_Boat_Armed_01_hmg_F {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class O_Boat_Transport_01_F;
	class Tenthed_O_Boat_Transport_01_F : O_Boat_Transport_01_F {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
    };
    
	class O_Lifeboat;
    class Tenthed_O_Lifeboat : O_Lifeboat {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
    };

	class O_Truck_03_transport_F;
    class Tenthed_O_Truck_03_transport_F : O_Truck_03_transport_F {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
    };

	class O_Truck_03_covered_F;
    class Tenthed_O_Truck_03_covered_F : O_Truck_03_covered_F {};

	class O_UGV_01_rcws_F;
    class Tenthed_O_UGV_01_rcws_F : O_UGV_01_rcws_F {
		author="Baseplate";
		displayname="RCWS-12 Hyena";
		editorPreview="\TCF_MISC\EditorPreviews\TCF_Hyena_Frieden.jpg";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		crew="B_UAV_AI";
		faction="Tenthed_UnitFact_Military_Insurrection";
		side=0;
		hiddenSelectionsTextures[]= {
			"TCF_OPFOR\Frieden\Vehicles\Data\Stomper\UGV_01_ext_Frieden_co.paa",
			"TCF_OPFOR\Frieden\Vehicles\Data\Stomper\UGV_01_int_Frieden_co.paa",
			"TCF_OPFOR\Frieden\Vehicles\Data\Turret_Frieden.paa"
		};
	};

	class O_Plane_Fighter_02_F;
    class Tenthed_O_Plane_Fighter_02_F : O_Plane_Fighter_02_F {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class O_SDV_01_F;
    class Tenthed_O_SDV_01_F : O_SDV_01_F {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};
    
	// Mammoth Tanks
	class HTNK_SLA;
	class Tenthed_HTNK_SLA : HTNK_SLA {
		//displayname="Mammoth tank";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};
	
	class HTNK_Grey;
	class Tenthed_HTNK_Grey : HTNK_Grey {
		//displayname="Mammoth tank";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class HTNK_Desert;
	class Tenthed_HTNK_Desert : HTNK_Desert {
		//displayname="Mammoth tank";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class HTNK_Snow;
	class Tenthed_HTNK_Snow : HTNK_Snow {
		//displayname="Mammoth tank";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class HTNK_Green;
	class Tenthed_HTNK_Green : HTNK_Green {
		//displayname="Mammoth tank";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class O_HMG_01_high_F;
	class Tenthed_O_HMG_01_high_F : O_HMG_01_high_F {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class O_HMG_01_F;
	class Tenthed_O_HMG_01_F : O_HMG_01_F {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class O_Mortar_01_F;
	class Tenthed_O_Mortar_01_F : O_Mortar_01_F {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class optre_catfish_ins_mg_f;
	class Tenthed_optre_catfish_ins_mg_f : optre_catfish_ins_mg_f {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class optre_catfish_ins_unarmed_f;
	class Tenthed_optre_catfish_ins_unarmed_f : optre_catfish_ins_unarmed_f {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_M12_ins_MED;
	class Tenthed_OPTRE_M12_ins_MED : OPTRE_M12_ins_MED {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_M12_ins_APC;
	class Tenthed_OPTRE_M12_ins_APC : OPTRE_M12_ins_APC {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_M12_LRV_ins;
	class Tenthed_OPTRE_M12_LRV_ins : OPTRE_M12_LRV_ins {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};
	
	class OPTRE_M12_TD_ins;
	class Tenthed_OPTRE_M12_TD_ins : OPTRE_M12_TD_ins {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class VES_M19_URF_HMG;
	class Tenthed_VES_M19_URF_HMG : VES_M19_URF_HMG {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class TCF_URF_Nightingale;
	class Tenthed_TCF_URF_Nightingale : TCF_URF_Nightingale {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	// Pelicans
	class OPTRE_Pelican_armed_ins;
	class Tenthed_OPTRE_Pelican_armed_ins : OPTRE_Pelican_armed_ins {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_Pelican_armed_70mm_ins;
	class Tenthed_OPTRE_Pelican_armed_70mm_ins : OPTRE_Pelican_armed_70mm_ins {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_Pelican_unarmed_ins;
	class Tenthed_OPTRE_Pelican_unarmed_ins : OPTRE_Pelican_unarmed_ins {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};
	
	// Falcon
	class OPTRE_ins_falcon;
	class Tenthed_OPTRE_ins_falcon : OPTRE_ins_falcon {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_ins_falcon_unarmed;
	class Tenthed_OPTRE_ins_falcon_unarmed : OPTRE_ins_falcon_unarmed {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_Falconagl_02;
	class Tenthed_OPTRE_Falconagl_02 : OPTRE_Falconagl_02 {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_M494_INS;
	class Tenthed_OPTRE_M494_INS : OPTRE_M494_INS {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_M808B_INS;
	class Tenthed_OPTRE_M808B_INS : OPTRE_M808B_INS {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_Static_FG75;
	class Tenthed_OPTRE_Static_FG75 : OPTRE_Static_FG75 {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_Static_M41_Ins;
	class Tenthed_OPTRE_Static_M41_Ins : OPTRE_Static_M41_Ins {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_Static_ATGM_Ins;
	class Tenthed_OPTRE_Static_ATGM_Ins : OPTRE_Static_ATGM_Ins {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class TCF_Arkhangelsk_Koslovic;
	class Tenthed_TCF_Arkhangelsk_Koslovic : TCF_Arkhangelsk_Koslovic {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class TCF_Ural_MLRS_Koslovic;
	class Tenthed_TCF_Ural_MLRS_Koslovic : TCF_Ural_MLRS_Koslovic {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_tarantula_02;
	class Tenthed_OPTRE_tarantula_02 : OPTRE_tarantula_02 {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class SC_SaurusAPC_AA_SE;
	class Tenthed_SC_SaurusAPC_AA_SE : SC_SaurusAPC_AA_SE {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class LM_OPCAN_M92_BOLT_URA;
	class Tenthed_LM_OPCAN_M92_BOLT_URA : LM_OPCAN_M92_BOLT_URA {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};
	
	class FRI_RAD_Regular;
	class Tenthed_FRI_RAD_Regular : FRI_RAD_Regular {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class TCF_M247H_FRI;
	class Tenthed_TCF_M247H_FRI : TCF_M247H_FRI {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class TCF_M92_BOLT_FRI;
	class Tenthed_TCF_M92_BOLT_FRI : TCF_M92_BOLT_FRI {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class FRI_SAM_Regular;
	class Tenthed_FRI_SAM_Regular : FRI_SAM_Regular {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class O_G_HMG_02_F;
	class Tenthed_O_G_HMG_02_F : O_G_HMG_02_F {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class O_G_HMG_02_high_F;
	class Tenthed_O_G_HMG_02_high_F : O_G_HMG_02_high_F {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class O_G_Mortar_01_F;
	class Tenthed_O_G_Mortar_01_F : O_G_Mortar_01_F {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class TCF_M48_Buzz_FRI;
	class Tenthed_TCF_M48_Buzz_FRI : TCF_M48_Buzz_FRI {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class TCF_Witherwing_Frieden;
	class Tenthed_TCF_Witherwing_Frieden : TCF_Witherwing_Frieden {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_YSS_1000_A_ins;
	class Tenthed_OPTRE_YSS_1000_A_ins : OPTRE_YSS_1000_A_ins {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_bayonet_02;
	class Tenthed_OPTRE_bayonet_02 : OPTRE_bayonet_02 {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class TCF_gladius_02;
	class Tenthed_TCF_gladius_02 : TCF_gladius_02 {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};
	
	class TCF_gladius_02L;
	class Tenthed_TCF_gladius_02L : TCF_gladius_02L {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class TCF_D81LRTA;
	class Tenthed_TCF_D81LRTA : TCF_D81LRTA {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class TCF_D81LRTI;
	class Tenthed_TCF_D81LRTI : TCF_D81LRTI {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class TCF_D56I;
	class Tenthed_TCF_D56I : TCF_D56I {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class TCF_D56V;
	class Tenthed_TCF_D56V : TCF_D56V {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_UNSC_hornet_ins;
	class Tenthed_OPTRE_UNSC_hornet_ins : OPTRE_UNSC_hornet_ins {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class VES_MQ221_URF;
	class Tenthed_VES_MQ221_URF : VES_MQ221_URF {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class LM_OPCAN_M350_INS_WDL;
	class Tenthed_LM_OPCAN_M350_INS_WDL : LM_OPCAN_M350_INS_WDL {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class TCF_Otakar_Koslovic;
	class Tenthed_TCF_Otakar_Koslovic : TCF_Otakar_Koslovic {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class TCF_Bastardsword;
	class Tenthed_TCF_Bastardsword : TCF_Bastardsword {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_m1015_mule_ins;
	class Tenthed_OPTRE_m1015_mule_ins : OPTRE_m1015_mule_ins {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_m1015_mule_ammo_ins;
	class Tenthed_OPTRE_m1015_mule_ammo_ins : OPTRE_m1015_mule_ammo_ins {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_m1015_mule_cover_ins;
	class Tenthed_OPTRE_m1015_mule_cover_ins : OPTRE_m1015_mule_cover_ins {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_m1015_mule_fuel_ins;
	class Tenthed_OPTRE_m1015_mule_fuel_ins : OPTRE_m1015_mule_fuel_ins {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class OPTRE_m1015_mule_medical_ins;
	class Tenthed_OPTRE_m1015_mule_medical_ins : OPTRE_m1015_mule_medical_ins {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};

	class O_Plane_CAS_02_dynamicLoadout_F;
	class Tenthed_O_Plane_CAS_02_dynamicLoadout_F : O_Plane_CAS_02_dynamicLoadout_F {
		//displayname="";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "Tenthed_EditorCategory_Main";
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		faction = "Tenthed_UnitFact_Military_Insurrection";
		side = 0;
	};



// end
};