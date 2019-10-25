
	class Modern_ger_Base: B_Soldier_base_F
	{
		scope=2;
		displayName="Rifleman";
		faction="ger_units";
		editorSubcategory = "Men_twc_woodland";
		vehicleClass="Men_twc_woodland";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="CUP_U_B_GER_Flecktarn_1";
		twc_radioType = "ACRE_PRC148";
		backpack="ger_backpack_rif_flk";
		twc_radioChannel = 6;
		linkedItems[]=
		{
			"twc_flk_spcs_rif",
			"rhsusf_ach_bare",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"twc_flk_spcs_rif",
			"rhsusf_ach_bare",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"CUP_arifle_G36A"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"CUP_arifle_G36A"
		};
		Items[]=
		{
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			
			"ACE_EarPlugs",
			"ACRE_PRC148",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_MapTools"
		};
		respawnitems[]=
		{
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			
			"ACE_EarPlugs",
			"ACRE_PRC148",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	};

	class Modern_ger_Base_d: Modern_ger_Base
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		backpack="ger_backpack_rif_trp";
		uniformClass="CUP_U_B_GER_Tropentarn_1";
		linkedItems[]=
		{
			"twc_trp_spcs_rif",
			"rhsusf_ach_bare_tan_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"twc_trp_spcs_rif",
			"rhsusf_ach_bare_tan_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};

	class Modern_ger_rif_AT: Modern_ger_Base
	{
		scope=2;
		displayName="Rifleman AT";
		backpack="ger_backpack_at_flk";
		
		weapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_maaws_optic",
			"CUP_arifle_G36A"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_maaws_optic",
			"CUP_arifle_G36A"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"rhs_mag_maaws_HEDP",
			"HandGrenade",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"rhs_mag_maaws_HEDP",
			"HandGrenade",
			"SmokeShell"
		};
	};

	class Modern_ger_rif_AT_d: Modern_ger_rif_AT
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		backpack="ger_backpack_at_trp";
		uniformClass="CUP_U_B_GER_Tropentarn_1";
		linkedItems[]=
		{
			"twc_trp_spcs_rif",
			"rhsusf_ach_bare_tan_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"twc_trp_spcs_rif",
			"rhsusf_ach_bare_tan_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	class Modern_ger_grenadier: Modern_ger_Base
	{
		scope=2;
		displayName="Grenadier";
		backpack="ger_backpack_rif_flk";
		weapons[]=
		{
			"Throw",
			"Put",
			"CUP_arifle_AG36"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"CUP_arifle_AG36"
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
	};
	
	class Modern_ger_grenadier_d: Modern_ger_grenadier
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		backpack="ger_backpack_rif_trp";
		uniformClass="CUP_U_B_GER_Tropentarn_1";
		linkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_Gren",
			"rhsusf_ach_bare_tan_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_Gren",
			"rhsusf_ach_bare_tan_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	class Modern_ger_mg: Modern_ger_Base
	{
		scope=2;
		displayName="Machinegunner";
		backpack="ger_backpack_mg";
		linkedItems[]=
		{
			"twc_flk_spcs_MG",
			"rhsusf_ach_bare",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"twc_flk_spcs_MG",
			"rhsusf_ach_bare",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"twc_HK_MG4"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"twc_HK_MG4"
		};
		magazines[]=
		{
			"rhs_200rnd_556x45_T_SAW",
			"rhs_200rnd_556x45_T_SAW",
			"rhs_200rnd_556x45_T_SAW",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"rhs_200rnd_556x45_T_SAW",
			"rhs_200rnd_556x45_T_SAW",
			"rhs_200rnd_556x45_T_SAW",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	};
	
	class Modern_ger_mg_d: Modern_ger_mg
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		backpack="ger_backpack_mg_d";
		uniformClass="CUP_U_B_GER_Tropentarn_1";
		linkedItems[]=
		{
			"twc_trp_spcs_MG",
			"rhsusf_ach_bare_tan_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"twc_trp_spcs_MG",
			"rhsusf_ach_bare_tan_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	class Modern_ger_commander: Modern_ger_Base
	{
		scope=2;
		displayName="Section Commander @Bundeswehr";
		backpack="ger_backpack_leader";
		linkedItems[]=
		{
			"twc_flk_spcs_SL",
			"rhsusf_ach_bare",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"twc_flk_spcs_SL",
			"rhsusf_ach_bare",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"CUP_arifle_G36A"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"CUP_arifle_G36A"
		};
	};
	
	class Modern_ger_commander_d: Modern_ger_commander
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		backpack="ger_backpack_leader_d";
		uniformClass="CUP_U_B_GER_Tropentarn_1";
		linkedItems[]=
		{
			"twc_trp_spcs_SL",
			"rhsusf_ach_bare_tan_ess",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"twc_trp_spcs_SL",
			"rhsusf_ach_bare_tan_ess",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
	};
	
	
	class Modern_ger_subcommander: Modern_ger_commander
	{
		scope=2;
		displayName="2ic";
		backpack="ger_backpack_2ic";
		linkedItems[]=
		{
			"twc_flk_spcs_SL",
			"rhsusf_ach_bare",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"twc_flk_spcs_SL",
			"rhsusf_ach_bare",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class Modern_ger_subcommander_d: Modern_ger_subcommander
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		backpack="ger_backpack_2ic_d";
		uniformClass="CUP_U_B_GER_Tropentarn_1";
		linkedItems[]=
		{
			"twc_trp_spcs_SL",
			"rhsusf_ach_bare_tan_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"twc_trp_spcs_SL",
			"rhsusf_ach_bare_tan_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	class Modern_ger_medic: Modern_ger_base
	{
		scope=2;
		displayName="Medic";
		attendant = 1;
		backpack="ger_backpack_medic_flk";
	};
	
	
	class Modern_ger_medic_d: Modern_ger_medic
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		backpack="ger_backpack_medic_trp";
		uniformClass="CUP_U_B_GER_Tropentarn_1";
		linkedItems[]=
		{
			"twc_trp_spcs_rif",
			"rhsusf_ach_bare_tan_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"twc_trp_spcs_rif",
			"rhsusf_ach_bare_tan_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	