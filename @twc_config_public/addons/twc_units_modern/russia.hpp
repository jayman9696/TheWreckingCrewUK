class O_Soldier_Base_F;
	class TWC_Modern_rus_Base: O_Soldier_Base_F
	{
		scope=2;
		displayName="Rifleman";
		faction="rus_units";
		editorSubcategory = "Men_twc_woodland";
		vehicleClass="Men_twc_woodland";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="CUP_U_O_RUS_EMR_1_VDV";
		twc_radioType = "ACRE_PRC343";
		backpack="";
		twc_radioChannel = 3;
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_ak74m"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_ak74m"
		};
		Items[]=
		{
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			
			"ACE_EarPlugs",
			"ACRE_PRC343",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
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
			"ACRE_PRC343",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
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
			"ACE_tourniquet"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_mag_rgo",
			"rhs_mag_rgo",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
		Respawnmagazines[]=
		{
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_mag_rgo",
			"rhs_mag_rgo",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
	};
	
	class TWC_Modern_rus_Base_l: TWC_Modern_rus_Base
	{
		backpack="";
	};

	class TWC_Modern_rus_Base_d: TWC_Modern_rus_Base
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class TWC_Modern_rus_Base_d_l: TWC_Modern_rus_Base_d
	{
		backpack="";
	};
	
	
	class TWC_Modern_rus_rifleman_at: TWC_Modern_rus_Base
	{
		scope=2;
		displayName="Rifleman (AT)";
		backpack="pol_backpack_rpg";
		weapons[]=
		{
			"Throw",
			"Put",
			"twc_rpg_pol",
			"rhs_weap_ak74m"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"twc_rpg_pol",
			"rhs_weap_ak74m"
		};
	};
	class TWC_Modern_rus_rifleman_at_l: TWC_Modern_rus_rifleman_at
	{
		backpack="";
	};
	
	class TWC_Modern_rus_rifleman_at_d: TWC_Modern_rus_rifleman_at
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class TWC_Modern_rus_rifleman_at_d_l: TWC_Modern_rus_rifleman_at_d
	{
		backpack="";
	};
	
	class TWC_Modern_rus_at_assistant: TWC_Modern_rus_Base
	{
		backpack="pol_backpack_rpg";
		displayName="AT Assistant";
	};
	class TWC_Modern_rus_at_assistant_l: TWC_Modern_rus_at_assistant
	{
		backpack="";
	};
	
	class TWC_Modern_rus_at_assistant_d: TWC_Modern_rus_Base
	{
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
	};
	class TWC_Modern_rus_at_assistant_d_l: TWC_Modern_rus_at_assistant_d
	{
		backpack="";
	};
	
	
	class TWC_Modern_rus_grenadier: TWC_Modern_rus_Base
	{
		scope=2;
		displayName="Grenadier";
		weapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_ak74m_fullplum_gp25"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_ak74m_fullplum_gp25"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_mag_rgo",
			"rhs_mag_rdg2_white",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25"
		};
		Respawnmagazines[]=
		{
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_mag_rgo",
			"rhs_mag_rdg2_white",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25"
		};
	};
	class TWC_Modern_rus_grenadier_l: TWC_Modern_rus_grenadier
	{
		backpack="";
	};
	
	class TWC_Modern_rus_grenadier_d: TWC_Modern_rus_grenadier
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class TWC_Modern_rus_grenadier_d_l: TWC_Modern_rus_grenadier_d
	{
		backpack="";
	};
	
	
	class TWC_Modern_rus_mg: TWC_Modern_rus_Base
	{
		scope=2;
		displayName="Machinegunner";
		backpack="pol_backpack_mg";
		weapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_pkm"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_pkm"
		};
		magazines[]=
		{
			"rhs_100Rnd_762x54mmR_green",
			"rhs_100Rnd_762x54mmR_green",
			"rhs_mag_rgo",
			"rhs_mag_rgo",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
		Respawnmagazines[]=
		{
			"rhs_100Rnd_762x54mmR_green",
			"rhs_100Rnd_762x54mmR_green",
			"rhs_mag_rgo",
			"rhs_mag_rgo",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
	};
	class TWC_Modern_rus_mg_l: TWC_Modern_rus_mg
	{
		backpack="";
	};
	
	class TWC_Modern_rus_mg_d: TWC_Modern_rus_mg
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class TWC_Modern_rus_mg_d_l: TWC_Modern_rus_mg_d
	{
		backpack="";
	};
	
	class TWC_Modern_rus_mg_assistant: TWC_Modern_rus_Base
	{
		backpack="pol_backpack_mg";
		displayName="MG Assistant";
	};
	class TWC_Modern_rus_mg_assistant_l: TWC_Modern_rus_mg_assistant
	{
		backpack="";
	};
	
	class TWC_Modern_rus_mg_assistant_d: TWC_Modern_rus_mg_assistant
	{
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class TWC_Modern_rus_mg_assistant_d_l: TWC_Modern_rus_mg_assistant_d
	{
		backpack="";
	};
	
	
	class TWC_Modern_rus_commander: TWC_Modern_rus_Base
	{
		scope=2;
		displayName="Section Commander @VDV";
		backpack="pol_backpack_leader";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"rhs_pdu4",
			"rhs_weap_ak74m_pkas"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhs_pdu4",
			"rhs_weap_ak74m_pkas"
		};
	};
	class TWC_Modern_rus_commander_l: TWC_Modern_rus_commander
	{
		backpack="";
		Items[]=
		{
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			
			"ACE_EarPlugs",
			"ACRE_PRC343",
			"ACRE_PRC152",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
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
			"ACRE_PRC343",
			"ACRE_PRC152",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
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
			"ACE_tourniquet"
		};
	};
	
	class TWC_Modern_rus_commander_d: TWC_Modern_rus_commander
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
	};
	class TWC_Modern_rus_commander_d_l: TWC_Modern_rus_commander_d
	{
		backpack="";
		Items[]=
		{
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			
			"ACE_EarPlugs",
			"ACRE_PRC343",
			"ACRE_PRC152",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
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
			"ACRE_PRC343",
			"ACRE_PRC152",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
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
			"ACE_tourniquet"
		};
	};
	
	
	class TWC_Modern_rus_subcommander: TWC_Modern_rus_commander
	{
		scope=2;
		displayName="2ic";
		backpack="rus_backpack_2ic";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_ak74m_fullplum_gp25"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_ak74m_fullplum_gp25"
		};
	};
	class TWC_Modern_rus_subcommander_l: TWC_Modern_rus_subcommander
	{
		backpack="";
	};
	
	class TWC_Modern_rus_subcommander_d: TWC_Modern_rus_subcommander
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class TWC_Modern_rus_subcommander_d_l: TWC_Modern_rus_subcommander_d
	{
		backpack="";
	};
	
	
	class TWC_Modern_rus_medic: TWC_Modern_rus_base
	{
		scope=2;
		displayName="Medic";
		attendant = 1;
		backpack="rus_backpack_medic";
	};
	
	class TWC_Modern_rus_medic_l: TWC_Modern_rus_medic
	{
		backpack="";
	};
	
	
	class TWC_Modern_rus_medic_d: TWC_Modern_rus_medic
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class TWC_Modern_rus_medic_d_l: TWC_Modern_rus_medic_d
	{
		backpack="";
	};
	
	
	class TWC_Modern_rus_vehcommander: TWC_Modern_rus_base
	{
		scope=2;
		displayName="Vehicle Commander";
		linkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_3",
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_3",
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_aks74u_folded"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_aks74u_folded"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_mag_rdg2_white"
		};
		Respawnmagazines[]=
		{
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_mag_rdg2_white"
		};
	};
	
	class TWC_Modern_rus_vehcommander_l: TWC_Modern_rus_vehcommander
	{};
	
	class TWC_Modern_rus_vehcommander_d: TWC_Modern_rus_vehcommander
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
	};
	
	class TWC_Modern_rus_vehcommander_d_l: TWC_Modern_rus_vehcommander_d
	{};
	
	class TWC_Modern_rus_vehcrewman: TWC_Modern_rus_vehcommander
	{
		scope=2;
		displayName="Vehicle Crewman";
		linkedItems[]=
		{
			"CUP_V_O_SLA_M23_1_OD",
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_O_SLA_M23_1_OD",
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class TWC_Modern_rus_vehcrewman_l: TWC_Modern_rus_vehcrewman
	{};
	
	class TWC_Modern_rus_vehcrewman_d: TWC_Modern_rus_vehcrewman
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
	};
	
	class TWC_Modern_rus_vehcrewman_d_l: TWC_Modern_rus_vehcrewman_d
	{};
	
	class TWC_Modern_rus_helipilot: TWC_Modern_rus_vehcrewman
	{
		scope=2;
		displayName="Helicopter Pilot";
		uniformClass="rhs_uniform_df15_tan";
		linkedItems[]=
		{
			"rhs_6b23_engineer",
			"rhs_zsh7a_mike_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_engineer",
			"rhs_zsh7a_mike_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class TWC_Modern_rus_crewchief: TWC_Modern_rus_helipilot
	{
		scope=2;
		displayName="Helicopter Crew Chief";
		linkedItems[]=
		{
			"rhs_6sh92_digi",
			"rhs_zsh7a_mike_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"rhs_6sh92_digi",
			"rhs_zsh7a_mike_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class TWC_Modern_rus_sniper: TWC_Modern_rus_Base
	{
		scope=2;
		displayName="Sniper";
		uniformClass="CUP_U_O_RUS_Ghillie";
		backpack="rus_backpack_sniper";
		linkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"twc_weap_ak105_sniper"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"twc_weap_ak105_sniper"
		};
		magazines[]=
		{
			"rhs_mag_rdg2_white",
			"CUP_30Rnd_545x39_AK74M_M",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag"
		};
		Respawnmagazines[]=
		{
			"rhs_mag_rdg2_white",
			"CUP_30Rnd_545x39_AK74M_M",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag"
		};
	};
	
	class TWC_Modern_rus_sniper_d: TWC_Modern_rus_sniper
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="U_I_FullGhillie_ard";
	};
	
	class TWC_Modern_rus_spotter: TWC_Modern_rus_Base
	{
		scope=2;
		displayName="Spotter";
		uniformClass="CUP_U_O_RUS_Ghillie";
		backpack="rus_backpack_spotter";
		linkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_3",
			"ItemcTab",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_3",
			"ItemcTab",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"rhs_pdu4",
			"twc_weap_ak105_spotter"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhs_pdu4",
			"twc_weap_ak105_spotter"
		};
		magazines[]=
		{
			"rhs_mag_rdg2_white",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M"
		};
		Respawnmagazines[]=
		{
			"rhs_mag_rdg2_white",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M"
		};
		Items[]=
		{
			"ACE_Kestrel4500",
			"ACE_EarPlugs",
			"ACRE_PRC343",
			"ACRE_PRC152",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
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
			"ACE_Kestrel4500",
			"ACE_EarPlugs",
			"ACRE_PRC343",
			"ACRE_PRC152",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
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
			"ACE_tourniquet"
		};
	};
	
	class TWC_Modern_rus_spotter_d: TWC_Modern_rus_spotter
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="U_I_FullGhillie_ard";
	};
	
	class TWC_Modern_rus_sso_Base: TWC_Modern_rus_Base
	{
		scope=2;
		displayName="Rifleman";
		faction="rus_units_sso";
		editorSubcategory = "Men_twc_woodland";
		vehicleClass="Men_twc_woodland";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="CUP_U_CRYE_MCAM_RUS2_Roll";
		twc_radioType = "ACRE_PRC343";
		backpack="rus_scoutpack_rifleman";
		twc_radioChannel = 2;
		linkedItems[]=
		{
			"CUP_V_B_Ciras_Olive",
			"CUP_H_OpsCore_Spray_SF",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_Ciras_Olive",
			"CUP_H_OpsCore_Spray_SF",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"rhsusf_weap_glock17g4",
			"twc_weap_ak74_supp_eotech"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhsusf_weap_glock17g4",
			"twc_weap_ak74_supp_eotech"
		};
		magazines[]=
		{
			"rhs_mag_rdg2_white",
			"rhs_mag_rgo",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK"
		};
		Respawnmagazines[]=
		{
			"rhs_mag_rdg2_white",
			"rhs_mag_rgo",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK"
		};
	};
	
	class TWC_Modern_rus_sso_Pointman: TWC_Modern_rus_sso_Base
	{
		displayName="Pointman";
		weapons[]=
		{
			"Throw",
			"Put",
			"rhsusf_weap_glock17g4",
			"twc_weap_ak74_supp_t1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhsusf_weap_glock17g4",
			"twc_weap_ak74_supp_t1"
		};
	};
	
	class TWC_Modern_rus_sso_Squadleader: TWC_Modern_rus_sso_Base
	{
		backpack="TWC_Backpack_USMC2000_Sectionleader";
		displayName="Squad Leader";
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_Soflam_Laserdesignator",
			"rhsusf_weap_glock17g4",
			"twc_weap_ak74_supp_specter"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_Soflam_Laserdesignator",
			"rhsusf_weap_glock17g4",
			"twc_weap_ak74_supp_specter"
		};
		magazines[]=
		{
			"rhs_mag_rdg2_white",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"Laserbatteries",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK"
		};
		Respawnmagazines[]=
		{
			"rhs_mag_rdg2_white",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"Laserbatteries",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK"
		};
	};
	
	class TWC_Modern_rus_sso_2ic: TWC_Modern_rus_sso_Base
	{
		backpack="rus_sso_backpack_2ic";
		displayName="2IC";
		weapons[]=
		{
			"Throw",
			"Put",
			"rhs_pdu4",
			"rhsusf_weap_glock17g4",
			"twc_weap_ak74_supp_specter"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhs_pdu4",
			"rhsusf_weap_glock17g4",
			"twc_weap_ak74_supp_specter"
		};
	};
	
	class TWC_Modern_rus_sso_Marksman: TWC_Modern_rus_sso_Base
	{
		backpack="";
		displayName="Marksman";
		weapons[]=
		{
			"Throw",
			"Put",
			"rhsusf_weap_glock17g4",
			"twc_weap_t5000_scope"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhsusf_weap_glock17g4",
			"twc_weap_t5000_scope"
		};
		magazines[]=
		{
			"rhs_mag_rdg2_white",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000"
		};
		Respawnmagazines[]=
		{
			"rhs_mag_rdg2_white",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000",
			"rhs_5Rnd_338lapua_t5000"
		};
	};
	
	class TWC_Modern_rus_sso_MG: TWC_Modern_rus_sso_Base
	{
		backpack="rus_backpack_MG";
		displayName="Machinegunner";
		weapons[]=
		{
			"Throw",
			"Put",
			"rhsusf_weap_glock17g4",
			"twc_weap_pkp_1p78"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhsusf_weap_glock17g4",
			"twc_weap_pkp_1p78"
		};
		magazines[]=
		{
			"rhs_mag_rdg2_white",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_100Rnd_762x54mmR_green",
			"rhs_100Rnd_762x54mmR_green",
			"rhs_100Rnd_762x54mmR_green"
		};
		Respawnmagazines[]=
		{
			"rhs_mag_rdg2_white",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhs_100Rnd_762x54mmR_green",
			"rhs_100Rnd_762x54mmR_green",
			"rhs_100Rnd_762x54mmR_green"
		};
	};
	
	class TWC_Modern_rus_sso_MG_assistant: TWC_Modern_rus_sso_Base
	{
		backpack="rus_backpack_MG";
		displayName="MG Assistant";
	};
	
	class TWC_Modern_rus_sso_medic: TWC_Modern_rus_sso_Base
	{
		backpack="rus_backpack_medic";
		displayName="Medic";
	};
	