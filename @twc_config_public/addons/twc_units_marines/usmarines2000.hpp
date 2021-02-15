class 2000_USMC_Base: B_Soldier_base_F
{
scope=2;
displayName="Rifleman";
faction="twc_public_usmc";
editorSubcategory = "US_Men_2000";
vehicleClass="US_Men_2000";
icon="iconMan";
nakedUniform="U_BasicBody";
uniformClass="CUP_U_B_USMC_FROG1_WMARPAT";
twc_radioType = "ACRE_PRC148";
twc_radioChannel = 3;
backpack="TWC_Backpack_USMC2000_Rifleman";
linkedItems[]=
{
"CUP_V_B_Interceptor_Grenadier_M81",
"CUP_H_LWHv2_MARPAT",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Grenadier_M81",
"CUP_H_LWHv2_MARPAT",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
Items[]=
{
"ACE_fieldDressing",
"ACRE_PRC148",
"ACE_EarPlugs",

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
"ACRE_PRC148",
"ACE_EarPlugs",

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
weapons[]=
{
"Throw",
"Put",
"CUP_TWC_arifle_M16A4_Grip_clean"
};
respawnweapons[]=
{
"Throw",
"Put",
"CUP_TWC_arifle_M16A4_Grip_clean"
};
magazines[]=
{
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag_Tracer_Red",
"30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag_Tracer_Red",
"30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
};

class 2000_USMC_Base_d: 2000_USMC_Base
{
scope=2;
uniformClass="CUP_U_B_USMC_FROG1_DMARPAT";
linkedItems[]=
{
"CUP_V_B_Interceptor_Grenadier_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Grenadier_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};

};


class 2000_USMC_Squadleader: 2000_USMC_Base
{
scope=2;
displayName="Squad Leader@USMC Section";
icon="iconManLeader";
backpack="TWC_Backpack_USMC2000_Sectionleader";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT",
"ItemMap",
"ItemMicroDAGR",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT",
"ItemMap",
"ItemMicroDAGR",
"ItemCompass",
"ItemWatch"
};
weapons[]=
{
"Throw",
"Put",
"ACE_Yardage450",
"twc_CUP_arifle_M16A4_Grip_acog",
"CUP_hgun_Colt1911"
};
respawnweapons[]=
{
"Throw",
"Put",
"ACE_Yardage450",
"twc_CUP_arifle_M16A4_Grip_acog",
"CUP_hgun_Colt1911"
};
magazines[]=
{
"CUP_7Rnd_45ACP_1911",
"CUP_7Rnd_45ACP_1911",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag_Tracer_Red",
"30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"CUP_7Rnd_45ACP_1911",
"CUP_7Rnd_45ACP_1911",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag_Tracer_Red",
"30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
};
class 2000_USMC_Squadleader_d: 2000_USMC_Squadleader
{
uniformClass="CUP_U_B_USMC_FROG1_DMARPAT";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemMicroDAGR",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemMicroDAGR",
"ItemCompass",
"ItemWatch"
};
};

class 2000_USMC_Teamleader: 2000_USMC_Base
{
scope=2;
displayName="Team Leader";
icon="iconManLeader";
backpack="TWC_Backpack_USMC2000_Teamleader";
weapons[]=
{
"Throw",
"Put",
"ACE_Yardage450",
"twc_CUP_arifle_M16A4_Grip_acog",
"CUP_hgun_Colt1911"
};
respawnweapons[]=
{
"Throw",
"Put",
"ACE_Yardage450",
"twc_CUP_arifle_M16A4_Grip_acog",
"CUP_hgun_Colt1911"
};
magazines[]=
{
"CUP_7Rnd_45ACP_1911",
"CUP_7Rnd_45ACP_1911",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag_Tracer_Red",
"30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"CUP_7Rnd_45ACP_1911",
"CUP_7Rnd_45ACP_1911",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag_Tracer_Red",
"30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
};
class 2000_USMC_Teamleader_d: 2000_USMC_Teamleader
{
uniformClass="CUP_U_B_USMC_FROG1_DMARPAT";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};
class 2000_USMC_Grenadier: 2000_USMC_Base
{
scope=2;
displayName="Grenadier";
backpack="TWC_Backpack_USMC2000_Rifleman";
weapons[]=
{
"Throw",
"Put",
"twc_CUP_arifle_M16A4_GL"
};
respawnweapons[]=
{
"Throw",
"Put",
"twc_CUP_arifle_M16A4_GL"
};
magazines[]=
{
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag_Tracer_Red",
"30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag_Tracer_Red",
"30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
};

class 2000_USMC_Grenadier_d: 2000_USMC_Grenadier
{
uniformClass="CUP_U_B_USMC_FROG1_DMARPAT";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};
class 2000_USMC_Breacher: 2000_USMC_Base
{
scope=2;
displayName="Breacher";
backpack="TWC_Backpack_USMC2000_Breacher";
weapons[]=
{
"Throw",
"Put",
"CUP_sgun_M1014",
"CUP_hgun_Colt1911"
};
respawnweapons[]=
{
"Throw",
"Put",
"CUP_sgun_M1014",
"CUP_hgun_Colt1911"
};
magazines[]=
{
"CUP_7Rnd_45ACP_1911",
"CUP_7Rnd_45ACP_1911",
"CUP_8Rnd_B_Beneli_74Pellets",
"CUP_8Rnd_B_Beneli_74Pellets",
"CUP_8Rnd_B_Beneli_74Pellets",
"CUP_8Rnd_B_Beneli_74Pellets",
"CUP_8Rnd_B_Beneli_74Pellets",
"CUP_8Rnd_B_Beneli_74Slug",
"CUP_8Rnd_B_Beneli_74Slug",
"CUP_8Rnd_B_Beneli_74Slug",
"CUP_8Rnd_B_Beneli_74Slug",
"CUP_8Rnd_B_Beneli_74Slug",
"CUP_8Rnd_B_Beneli_74Slug",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"CUP_7Rnd_45ACP_1911",
"CUP_7Rnd_45ACP_1911",
"CUP_8Rnd_B_Beneli_74Pellets",
"CUP_8Rnd_B_Beneli_74Pellets",
"CUP_8Rnd_B_Beneli_74Pellets",
"CUP_8Rnd_B_Beneli_74Pellets",
"CUP_8Rnd_B_Beneli_74Pellets",
"CUP_8Rnd_B_Beneli_74Slug",
"CUP_8Rnd_B_Beneli_74Slug",
"CUP_8Rnd_B_Beneli_74Slug",
"CUP_8Rnd_B_Beneli_74Slug",
"CUP_8Rnd_B_Beneli_74Slug",
"CUP_8Rnd_B_Beneli_74Slug",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
};

class 2000_USMC_Breacher_d: 2000_USMC_Breacher
{
uniformClass="CUP_U_B_USMC_FROG1_DMARPAT";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};
class 2000_USMC_Autorifleman: 2000_USMC_Base
{
scope=2;
displayName="Autorifleman";
backpack="TWC_Backpack_USMC2000_Autorifleman";
weapons[]=
{
"Throw",
"Put",
"CUP_lmg_M249_E2"
};
respawnweapons[]=
{
"Throw",
"Put",
"CUP_lmg_M249_E2"
};
magazines[]=
{
"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
};

class 2000_USMC_Autorifleman_d: 2000_USMC_Autorifleman
{
uniformClass="CUP_U_B_USMC_FROG1_DMARPAT";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};
class 2000_USMC_AsstAutorifleman: 2000_USMC_Base
{
scope=2;
displayName="Asst. Automatic Rifleman";
icon="iconManMG";
backpack="TWC_Backpack_USMC2000_Autorifleman";
weapons[]=
{
"Throw",
"Put",
"CUP_TWC_arifle_M16A4_Grip_clean"
};
respawnweapons[]=
{
"Throw",
"Put",
"CUP_TWC_arifle_M16A4_Grip_clean"
};
magazines[]=
{
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag_Tracer_Red",
"30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag_Tracer_Red",
"30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
};

class 2000_USMC_AsstAutorifleman_d: 2000_USMC_AsstAutorifleman
{
uniformClass="CUP_U_B_USMC_FROG1_DMARPAT";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};

class 2000_USMC_Medic: 2000_USMC_Base
{
scope=2;
displayName="Corpsman";
icon="iconManMedic";
backpack="TWC_Backpack_USMC2000_Medic";
attendant = 1;

magazines[]=
{
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag_Tracer_Red",
"30Rnd_556x45_Stanag_Tracer_Red",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag",
"30Rnd_556x45_Stanag_Tracer_Red",
"30Rnd_556x45_Stanag_Tracer_Red",
"SmokeShell",
"SmokeShell"
};
};

class 2000_USMC_Medic_d: 2000_USMC_Medic
{
uniformClass="CUP_U_B_USMC_FROG1_DMARPAT";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};

class 2000_USMC_Marksman: 2000_USMC_Base
{
scope=2;
displayName="Marksman";

magazines[]=
{
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"SmokeShell",
"SmokeShell"
};
weapons[]=
{
"Throw",
"Put",
"twc_CUP_arifle_M16A4_Grip_acog_sdmr"
};
respawnweapons[]=
{
"Throw",
"Put",
"twc_CUP_arifle_M16A4_Grip_acog_sdmr"
};
};
class 2000_USMC_Marksman_d: 2000_USMC_Marksman
{
uniformClass="CUP_U_B_USMC_FROG1_DMARPAT";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"CUP_H_LWHv2_MARPAT_des",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};



