class CfgPatches {
    class Tenthed_Units_Atlas {
        author = "Akira";
        name = "10th ODST: Monolith Defense and Technologies";
        requiredVersion=0.1;
        requiredAddons[] = {
            "Tenthed_core",
            "TKE_Unit_Groups"
        };
        weapons[] = {};
        units[] = {
			"Tenthed_MDTF_W_L_RFL",
			"Tenthed_MDTF_W_DMR",
			"Tenthed_MDTF_W_SNP",
			"Tenthed_MDTF_W_OIC_F",
			"Tenthed_MDTF_W_NCO_F",
			"Tenthed_MDTF_W_RTO",
			"Tenthed_MDTF_W_MED",
			"Tenthed_MDTF_W_ARFL",
			"Tenthed_MDTF_W_AT_RFL",
			"Tenthed_MDTF_W_AA_RFL",
			"Tenthed_MDTF_W_GRN",
			"Tenthed_MDTF_W_R_BOT",
			"Tenthed_MDTF_W_AR_BOT",
			"Tenthed_MDTF_W_MMG_BOT",
			"Tenthed_MDTF_W_MULE_BOT"
		};
    };
};
class CfgGroups
{
	class East
	{
		side=0;
		class Tenthed_TKE_MDTF_Groups
		{
			name="[10th] Monolith Defense and Technologies Forces";
			displayName="[10th] Monolith Defense and Technologies Forces";
			class Tenthed_TKE_MDTF_GROUPS_W
			{
				name="Monolith Defense and Technologies Forces";
				displayName="Monolith Defense and Technologies Forces";
				class Tenthed_MDW_Patrol
				{
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					name="Patrol";
					displayName="Patrol";
					side=0;
					faction="Tenthed_MD_MDTF";
					class Unit0
					{
						side=0;
						vehicle="Tenthed_MDTF_W_L_RFL";
						rank="PRIVATE";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="Tenthed_MDTF_W_L_RFL";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
				};
				class Tenthed_MDW_Markteam: Tenthed_MDW_Patrol
				{
					name="Marksman Team";
					displayName="Marksman Team";
					class Unit0
					{
						side=0;
						vehicle="Tenthed_MDTF_W_DMR";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="Tenthed_MDTF_W_DMR";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
				};
				class Tenthed_MDW_HQ: Tenthed_MDW_Patrol
				{
					name="HQ Team";
					displayName="HQ Team";
					class Unit0
					{
						side=0;
						vehicle="Tenthed_MDTF_W_OIC_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="Tenthed_MDTF_W_NCO_F";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit2
					{
						side=0;
						vehicle="Tenthed_MDTF_W_RTO";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit3
					{
						side=0;
						vehicle="Tenthed_MDTF_W_MED";
						rank="PRIVATE";
						position[]={0,-6,0};
					};
				};
				class Tenthed_MDW_Fireteam: Tenthed_MDW_Patrol
				{
					name="Fireteam";
					displayName="Fireteam";
					class Unit0
					{
						side=0;
						vehicle="Tenthed_MDTF_W_NCO_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="Tenthed_MDTF_W_GRN";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit2
					{
						side=0;
						vehicle="Tenthed_MDTF_W_ARFL";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit3
					{
						side=0;
						vehicle="Tenthed_MDTF_W_R_BOT";
						rank="PRIVATE";
						position[]={0,-6,0};
					};
				};
				class Tenthed_MDW_BotFireteam: Tenthed_MDW_Patrol
				{
					name="Warbot Fireteam";
					displayName="Warbot Fireteam";
					class Unit0
					{
						side=0;
						vehicle="Tenthed_MDTF_W_R_BOT";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="Tenthed_MDTF_W_R_BOT";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit2
					{
						side=0;
						vehicle="Tenthed_MDTF_W_AR_BOT";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit3
					{
						side=0;
						vehicle="Tenthed_MDTF_W_R_BOT";
						rank="PRIVATE";
						position[]={0,-6,0};
					};
				};
				class Tenthed_MDW_MGTeam: Tenthed_MDW_Patrol
				{
					name="MG Team";
					displayName="MG Team";
					class Unit0
					{
						side=0;
						vehicle="Tenthed_MDTF_W_NCO_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="Tenthed_MDTF_W_ARFL";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit2
					{
						side=0;
						vehicle="Tenthed_MDTF_W_ARFL";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit3
					{
						side=0;
						vehicle="Tenthed_MDTF_W_MMG_BOT";
						rank="PRIVATE";
						position[]={0,-6,0};
					};
				};
				class Tenthed_MDW_BotMGTeam: Tenthed_MDW_Patrol
				{
					name="Warbot MG Team";
					displayName="Warbot MG Team";
					class Unit0
					{
						side=0;
						vehicle="Tenthed_MDTF_W_R_BOT";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="Tenthed_MDTF_W_AR_BOT";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit2
					{
						side=0;
						vehicle="Tenthed_MDTF_W_MMG_BOT";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit3
					{
						side=0;
						vehicle="Tenthed_MDTF_W_MMG_BOT";
						rank="PRIVATE";
						position[]={0,-6,0};
					};
				};
				class Tenthed_MDW_ATTeam: Tenthed_MDW_Patrol
				{
					name="AT Team";
					displayName="AT Team";
					class Unit0
					{
						side=0;
						vehicle="Tenthed_MDTF_W_NCO_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="Tenthed_MDTF_W_AT_RFL";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit2
					{
						side=0;
						vehicle="Tenthed_MDTF_W_AT_RFL";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit3
					{
						side=0;
						vehicle="Tenthed_MDTF_W_R_BOT";
						rank="PRIVATE";
						position[]={0,-6,0};
					};
				};
				class Tenthed_MDW_AATeam: Tenthed_MDW_Patrol
				{
					name="AA Team";
					displayName="AA Team";
					class Unit0
					{
						side=0;
						vehicle="Tenthed_MDTF_W_NCO_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="Tenthed_MDTF_W_AA_RFL";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit2
					{
						side=0;
						vehicle="Tenthed_MDTF_W_AA_RFL";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit3
					{
						side=0;
						vehicle="Tenthed_MDTF_W_R_BOT";
						rank="PRIVATE";
						position[]={0,-6,0};
					};
				};
				class Tenthed_MDW_SWTeam: Tenthed_MDW_Patrol
				{
					name="Recon Sniper Team";
					displayName="Recon Sniper Team";
					class Unit0
					{
						side=0;
						vehicle="Tenthed_MDTF_W_DMR";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="Tenthed_MDTF_W_DMR";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit2
					{
						side=0;
						vehicle="Tenthed_MDTF_W_SNP";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit3
					{
						side=0;
						vehicle="Tenthed_MDTF_W_SNP";
						rank="PRIVATE";
						position[]={0,-6,0};
					};
				};
				class Tenthed_MDW_Squad: Tenthed_MDW_Patrol
				{
					name="Squad";
					displayName="Squad";
					class Unit0
					{
						side=0;
						vehicle="Tenthed_MDTF_W_NCO_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="Tenthed_MDTF_W_NCO_F";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit2
					{
						side=0;
						vehicle="Tenthed_MDTF_W_NCO_F";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit3
					{
						side=0;
						vehicle="Tenthed_MDTF_W_GRN";
						rank="PRIVATE";
						position[]={0,-6,0};
					};
					class Unit4
					{
						side=0;
						vehicle="Tenthed_MDTF_W_GRN";
						rank="PRIVATE";
						position[]={0,-8,0};
					};
					class Unit5
					{
						side=0;
						vehicle="Tenthed_MDTF_W_AR_BOT";
						rank="PRIVATE";
						position[]={0,-10,0};
					};
					class Unit6
					{
						side=0;
						vehicle="Tenthed_MDTF_W_AR_BOT";
						rank="PRIVATE";
						position[]={0,-12,0};
					};
					class Unit7
					{
						side=0;
						vehicle="Tenthed_MDTF_W_AT_RFL";
						rank="PRIVATE";
						position[]={0,-14,0};
					};
					class Unit8
					{
						side=0;
						vehicle="Tenthed_MDTF_W_AT_RFL";
						rank="PRIVATE";
						position[]={0,-16,0};
					};
					class Unit9
					{
						side=0;
						vehicle="Tenthed_MDTF_W_MULE_BOT";
						rank="PRIVATE";
						position[]={0,-18,0};
					};
				};
				class Tenthed_MDW_BotSquad: Tenthed_MDW_Patrol
				{
					name="Warbot Squad";
					displayName="Warbot Squad";
					class Unit0
					{
						side=0;
						vehicle="Tenthed_MDTF_W_R_BOT";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="Tenthed_MDTF_W_R_BOT";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit2
					{
						side=0;
						vehicle="Tenthed_MDTF_W_R_BOT";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit3
					{
						side=0;
						vehicle="Tenthed_MDTF_W_R_BOT";
						rank="PRIVATE";
						position[]={0,-6,0};
					};
					class Unit4
					{
						side=0;
						vehicle="Tenthed_MDTF_W_AR_BOT";
						rank="PRIVATE";
						position[]={0,-8,0};
					};
					class Unit5
					{
						side=0;
						vehicle="Tenthed_MDTF_W_MMG_BOT";
						rank="PRIVATE";
						position[]={0,-10,0};
					};
					class Unit6
					{
						side=0;
						vehicle="Tenthed_MDTF_W_MULE_BOT";
						rank="PRIVATE";
						position[]={0,-12,0};
					};
				};
			};
		};
    };
};
class CfgFactionClasses
{
	class Tenthed_MD_MDTF
	{
		displayName="[10th] Monolith Defense and Technologies Forces";
		side=0;
	};
};
class CfgEditorSubcategories
{
	class Tenthed_MD_MDTF_SubCat
	{
		displayName="Regulars (Arid)";
	};
	class Tenthed_MD_MDTF_SubCat_1
	{
		displayName="Regulars (Woodland)";
	};
	class Tenthed_MD_MDTF_SubCat_2
	{
		displayName="Regulars (Snow)";
	};
	class Tenthed_MD_MDTF_SubCat_3
	{
		displayName="Regulars (Voidborne)";
	};
	class Tenthed_MD_MDTF_SubCat_4
	{
		displayName="Vehicles (Arid)";
	};
	class Tenthed_MD_MDTF_SubCat_5
	{
		displayName="Vehicles (Woodland)";
	};
	class Tenthed_MD_MDTF_SubCat_6
	{
		displayName="Vehicles (Snow)";
	};
	class Tenthed_MD_MDTF_SubCat_7
	{
		displayName="Vehicles (Voidborne)";
	};
};
class CfgVehicles
{
    class MDTF_W_OIC_D;
	class Tenthed_MDTF_W_OIC_D_base: MDTF_W_OIC_D
	{
		faction="Tenthed_MD_MDTF";
		editorSubcategory="Tenthed_MD_MDTF_SubCat_1";
	};

	class Tenthed_MDTF_W_L_RFL: Tenthed_MDTF_W_OIC_D_base
	{
		displayName="Light Rifleman";
		uniformClass="TKE_CombatUniNARolledMDCamo_U_B";
		weapons[]=
		{
			"TKE_MDStdRifleGrey_Optic",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"TKE_MD30rnd_575x45_magTG",
			"TKE_MD30rnd_575x45_magTG",
			"TKE_MD30rnd_575x45_magTG",
			"TKE_MD30rnd_575x45_magTG",
			"TKE_MD30rnd_575x45_magTG",
			"TKE_MD30rnd_575x45_magTG"
		};
		backpack="";
		Items[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"H_Booniehat_mgrn",
			"TKE_MDTFArmour3Camo",
			"TKE_UCMCGogglesDown",
			"TKE_IntegratedNVGs",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class Tenthed_MDTF_W_DMR: Tenthed_MDTF_W_OIC_D_base
	{
		displayName="Marksman";
		uniformClass="TKE_CombatUniRolledV1MDCamo_U_B";
		weapons[]=
		{
			"TKE_MDDMR_Optic",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"TKE_20rnd_969x51_magMD",
			"TKE_20rnd_969x51_magMD",
			"TKE_20rnd_969x51_magMD",
			"TKE_20rnd_969x51_magMD",
			"TKE_20rnd_969x51_magMD",
			"TKE_20rnd_969x51_magMD",
			"TKE_FRAG_mag",
			"TKE_SMOKE_mag"
		};
		backpack="TKE_BackPack2MDCamo";
		Items[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"TKE_MDTFHelmClearCamo",
			"TKE_MDTFArmour3Camo",
			"TKE_MDWebbingNettingCamo",
			"TKE_MDTFNvgRed",
			"TKE_BackPack2MDCamo",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class Tenthed_MDTF_W_SNP: Tenthed_MDTF_W_OIC_D_base
	{
		displayName="Sniper";
		uniformClass="TKE_CombatUniNAMDCamo_U_B";
		weapons[]=
		{
			"TKE_MDSniperGrey_Optic",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_APDS_Mag",
			"TKE_FRAG_mag",
			"TKE_SMOKE_mag"
		};
		backpack="";
		Items[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"TKE_MDTFHeavyHelmCamo",
			"TKE_MDTFArmour3_1Camo",
			"TKE_MDWebbingNettingCamo",
			"TKE_MDTFNvgRed",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class Tenthed_MDTF_W_OIC_F: Tenthed_MDTF_W_OIC_D_base
	{
		displayName="Officer (Field)";
		uniformClass="TKE_CombatUniNAMDCamo_U_B";
		weapons[]=
		{
			"TKE_MDStdRifleGrey_Optic",
			"TKE_MDPistolBlack",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"TKE_MD30rnd_575x45_magTG",
			"TKE_MD30rnd_575x45_magTG",
			"TKE_MD30rnd_575x45_magTG",
			"TKE_MD30rnd_575x45_magTG",
			"TKE_MD30rnd_575x45_magTG",
			"TKE_MDPistol_mag",
			"TKE_MDPistol_mag"
		};
		backpack="TKE_CamelBakMD2";
		Items[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"TKE_MDTFHelmClearCamo",
			"TKE_MDTFArmour3_1Camo",
			"TKE_MDWebbingCamo",
			"TKE_IntegratedNVGs",
			"TKE_CamelBakMD2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class Tenthed_MDTF_W_NCO_F: Tenthed_MDTF_W_OIC_D_base
	{
		displayName="NCO (Field)";
		uniformClass="TKE_CombatUniRolledV1MDCamo_U_B";
		weapons[]=
		{
			"TKE_MDRifle_Optic",
			"TKE_MDPistolBlack",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_MDPistol_mag",
			"TKE_MDPistol_mag",
			"TKE_FRAG_mag",
			"TKE_SMOKE_mag"
		};
		backpack="TKE_LightPackMDTFCamo";
		Items[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"TKE_MDTFHeavyHelmCamo",
			"TKE_MDTFArmour4_1Camo",
			"TKE_MDWebbingCamo",
			"TKE_IntegratedNVGs",
			"TKE_LightPackMDTFCamo",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class Tenthed_MDTF_W_RTO: Tenthed_MDTF_W_OIC_D_base
	{
		displayName="Radio Transmit Operator";
		uniformClass="TKE_CombatUniMDCamo_U_B";
		weapons[]=
		{
			"TKE_MDStdRifleGrey_Optic",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"TKE_MD30rnd_575x45_magTG",
			"TKE_MD30rnd_575x45_magTG",
			"TKE_MD30rnd_575x45_magTG",
			"TKE_MD30rnd_575x45_magTG",
			"TKE_MD30rnd_575x45_magTG",
			"TKE_MD30rnd_575x45_magTG",
			"TKE_FRAG_mag",
			"TKE_SMOKE_mag"
		};
		backpack="TKE_RadioPackUCN";
		Items[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"TKE_MDTFHelmClearCamo",
			"TKE_MDTFArmour2_1Camo",
			"TKE_MDTFNvgFCRed",
			"TKE_IntegratedNVGs",
			"TKE_RadioPackUCN",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class Tenthed_MDTF_W_MED: Tenthed_MDTF_W_OIC_D_base
	{
		displayName="Field Medic";
		uniformClass="TKE_CombatUniRolledV1MDCamo_U_B";
		weapons[]=
		{
			"TKE_MDRifle_Optic",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_FRAG_mag",
			"TKE_SMOKE_mag"
		};
		backpack="TKE_AlicePackMTDFCamo_Med";
		Items[]=
		{
			"FirstAidKit",
			"Medikit"
		};
		linkedItems[]=
		{
			"TKE_MDTFHelmClearCamo",
			"TKE_MDTFArmour3_1Camo",
			"TKE_MDWebbingV1Camo",
			"TKE_AlicePackMTDFCamo_Med",
			"TKE_MDTFNvg2Grey",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class Tenthed_MDTF_W_ARFL: Tenthed_MDTF_W_OIC_D_base
	{
		displayName="Auto-Rifleman";
		uniformClass="TKE_CombatUniRolledV1MDCamo_U_B";
		weapons[]=
		{
			"TKE_MDLMG_Optic",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"TKE_150rnd_62x35_magMD",
			"TKE_150rnd_62x35_magMD",
			"TKE_150rnd_62x35_magMD",
			"TKE_150rnd_62x35_magMD",
			"TKE_150rnd_62x35_magMD",
			"TKE_150rnd_62x35_magMD",
			"TKE_FRAG_mag",
			"TKE_SMOKE_mag"
		};
		backpack="TKE_CamelBakMD2";
		Items[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"TKE_MDTFHeavyHelmClearCamo",
			"TKE_MDTFArmour4_2Camo",
			"TKE_FaceCoverGrey",
			"TKE_IntegratedNVGs",
			"TKE_CamelBakMD2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class Tenthed_MDTF_W_AT_RFL: Tenthed_MDTF_W_OIC_D_base
	{
		displayName="AT Rifleman";
		uniformClass="TKE_CombatUniMDCamo_U_B";
		weapons[]=
		{
			"TKE_MDRifle_Optic",
			"launch_MRAWS_green_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_FRAG_mag",
			"TKE_SMOKE_mag",
			"MRAWS_HEAT_F",
			"MRAWS_HEAT_F"
		};
		backpack="TKE_BackPack1MDCamo";
		Items[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"TKE_MDTFHelmClearCamo",
			"TKE_MDTFArmour2Camo",
			"None",
			"TKE_IntegratedNVGs",
			"TKE_BackPack1MDCamo",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class Tenthed_MDTF_W_AA_RFL: Tenthed_MDTF_W_OIC_D_base
	{
		displayName="AA Rifleman";
		uniformClass="TKE_CombatUniMDCamo_U_B";
		weapons[]=
		{
			"TKE_MDRifle_Optic",
			//"launch_B_Titan_olive_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_FRAG_mag",
			"TKE_SMOKE_mag"//,
			//"Titan_AA",
			//"Titan_AA"
		};
		backpack="TKE_BackPack1MDCamo";
		Items[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"TKE_MDTFHelmCamo",
			"TKE_MDTFArmour2Camo",
			"None",
			"TKE_IntegratedNVGs",
			"TKE_BackPack1MDCamo",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class Tenthed_MDTF_W_GRN: Tenthed_MDTF_W_OIC_D_base
	{
		displayName="Grenadier";
		uniformClass="TKE_CombatUniMDCamo_U_B";
		weapons[]=
		{
			"TKE_MDRifleV2_Optic",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_FRAG_mag",
			"TKE_SMOKE_mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		backpack="TKE_LightPackMDTFCamo";
		Items[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"TKE_MDTFHelmCamo",
			"TKE_MDTFArmour2Camo",
			"TKE_MDWebbingV2Camo",
			"TKE_IntegratedNVGs",
			"TKE_LightPackMDTFCamo",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};

    class Tenthed_MDTF_W_R_BOT: Tenthed_MDTF_W_OIC_D_base
	{
		displayName="Warbot";
		uniformClass="TKE_WarbotUniMDTFCamo_U_B";
		weapons[]=
		{
			"TKE_MDRifle_Optic",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_FRAG_mag",
			"TKE_SMOKE_mag"
		};
		backpack="";
		Items[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"TKE_WarBotHeadMDTFCamo",
			"TKE_WarBotArmourPMDTFCamo",
			"None",
			"TKE_IntegratedNVGs",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class Tenthed_MDTF_W_AR_BOT: Tenthed_MDTF_W_OIC_D_base
	{
		displayName="Warbot AR";
		uniformClass="TKE_WarbotUniMDTFCamo_U_B";
		weapons[]=
		{
			"TKE_MDLMG_Optic",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"TKE_150rnd_62x35_magMD",
			"TKE_150rnd_62x35_magMD",
			"TKE_150rnd_62x35_magMD",
			"TKE_150rnd_62x35_magMD",
			"TKE_150rnd_62x35_magMD",
			"TKE_150rnd_62x35_magMD",
			"TKE_FRAG_mag",
			"TKE_SMOKE_mag"
		};
		backpack="";
		Items[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"TKE_WarBotHeadMDTFCamo",
			"TKE_WarBotArmourPMDTFCamo",
			"None",
			"TKE_IntegratedNVGs",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class Tenthed_MDTF_W_MMG_BOT: Tenthed_MDTF_W_OIC_D_base
	{
		displayName="Warbot MMG";
		uniformClass="TKE_WarbotUniMDTFCamo_U_B";
		weapons[]=
		{
			"TKE_UCNMMG_MD_Optic",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"TKE_100rnd_ucnmmg_mag",
			"TKE_100rnd_ucnmmg_mag",
			"TKE_100rnd_ucnmmg_mag",
			"TKE_100rnd_ucnmmg_mag",
			"TKE_100rnd_ucnmmg_mag",
			"TKE_100rnd_ucnmmg_mag",
			"TKE_FRAG_mag",
			"TKE_SMOKE_mag"
		};
		backpack="TKE_CamelBakUCN";
		Items[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"TKE_WarBotHeadMDTFCamo",
			"TKE_WarBotArmourPMDTFCamo",
			"None",
			"TKE_IntegratedNVGs",
			"TKE_CamelBakUCN",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class Tenthed_MDTF_W_MULE_BOT: Tenthed_MDTF_W_OIC_D_base
	{
		displayName="Warbot Mule";
		uniformClass="TKE_WarbotUniMDTFCamo_U_B";
		weapons[]=
		{
			"TKE_MDRifle_Optic",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_35rnd_62x35_magTGMD",
			"TKE_FRAG_mag",
			"TKE_SMOKE_mag"
		};
		backpack="TKE_AlicePackMTDFCamo_Mule";
		Items[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"TKE_WarBotHeadMDTFCamo",
			"TKE_WarBotArmourPMDTFCamo",
			"None",
			"TKE_IntegratedNVGs",
			"TKE_AlicePackMTDFCamo_Mule",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
};
