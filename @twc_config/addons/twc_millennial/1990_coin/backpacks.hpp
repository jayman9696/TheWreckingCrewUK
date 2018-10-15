//COIN
#define BACKPACK_COIN_SECTIONCOMMANDER(CAMO, INHERIT) \
{ \
	scope = 1; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
	}; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
};

#define BACKPACK_COIN_2IC(CAMO, INHERIT) \
class TWC_Backpack_1990_COIN_##CAMO##_2IC: INHERIT \
{ \
	scope = 1; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,4); \
	}; \
};

class TWC_Backpack_1990_COIN_##CAMO##_Platoon_Commander: INHERIT \
{ \
	scope = 1; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
	}; \
};

class TWC_Backpack_1990_COIN_##CAMO##_Platoon_Sergeant: INHERIT \
{ \
	scope = 1; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8); \
	}; \
};

class TWC_Backpack_1990_COIN_##CAMO##_Platoon_Medic: INHERIT \
{ \
	scope = 1; \
	class TransportItems { \
		ADD_ITEM(ACE_fieldDressing,20); \
		ADD_ITEM(ACE_morphine,10); \
		ADD_ITEM(ACE_elasticBandage,20); \
		ADD_ITEM(ACE_quikclot,20); \
		ADD_ITEM(ACE_packingBandage,20); \
		ADD_ITEM(ACE_adenosine,4); \
		ADD_ITEM(ACE_atropine,4); \
		ADD_ITEM(ACE_epinephrine,10); \
		ADD_ITEM(ACE_salineIV_500,6); \
		ADD_ITEM(ACE_tourniquet,4); \
		ADD_ITEM(ACE_personalAidKit,1); \
		ADD_ITEM(TWC_Item_Medical_SutureKit_25,1); \
	}; \
};

#define BACKPACK_COIN_SPOTTER(CAMO, INHERIT) \
class TWC_Backpack_1990_COIN_##CAMO##_Spotter: INHERIT \
{ \
	scope = 1; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC77,1); \
		ADD_ITEM(ACE_Tripod,1); \
		ADD_ITEM(ACE_SpottingScope,1); \
	}; \
};

#define BACKPACK_COIN_ARTILLERY_COMMANDER(CAMO, INHERIT) \
class TWC_Backpack_1990_COIN_##CAMO##_Artillery_Commander: INHERIT \
{ \
	scope = 1; \
	maximumLoad = 300; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC77,1); \
	}; \
};

#define BACKPACK_COIN_FO(CAMO, INHERIT) \
class TWC_Backpack_1990_COIN_##CAMO##_FO: INHERIT \
{ \
	scope = 1; \
	maximumLoad = 200; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
	}; \
};

#define BACKPACK_COIN_EOD_COMMANDER(CAMO, INHERIT) \
class TWC_Backpack_1990_COIN_##CAMO##_EOD_Commander: INHERIT \
{ \
	scope = 1; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
	}; \
};

#define BACKPACK_COIN_FAC(CAMO, INHERIT) \
class TWC_Backpack_1990_COIN_##CAMO##_FAC: INHERIT \
{ \
	scope = 1; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell, 5); \
		ADD_MAGA(SmokeShellGreen, 5); \
		ADD_MAGA(SmokeShellBlue, 5); \
		ADD_MAGA(SmokeShellOrange, 5); \
		ADD_MAGA(SmokeShellRed, 5); \
		ADD_MAGA(SmokeShellPurple, 5); \
	}; \
};

//COIN, DISMOUNTED
#define BACKPACK_COIN_DISMOUNTED_RIFLEMAN(CAMO, INHERIT) \
class TWC_Backpack_1990_COIN_Dismounted_##CAMO##_Rifleman: INHERIT \
{ \
	scope = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8); \
	}; \
};

#define BACKPACK_COIN_DISMOUNTED_AT(CAMO, INHERIT) \
class TWC_Backpack_1990_COIN_Dismounted_##CAMO##_AT: INHERIT \
{ \
	scope = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8); \
	}; \
};

#define BACKPACK_COIN_DISMOUNTED_GUNNER(CAMO, INHERIT) \
class TWC_Backpack_1990_COIN_Dismounted_##CAMO##_Gunner: INHERIT \
{ \
	scope = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,6); \
	}; \
};

#define BACKPACK_COIN_DISMOUNTED_SECTIONCOMMANDER(CAMO, INHERIT) \
class TWC_Backpack_1990_COIN_Dismounted_##CAMO##_SectionCommander: INHERIT \
{ \
	scope = 1; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,6); \
	}; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
};

#define BACKPACK_COIN_DISMOUNTED_2IC(CAMO, INHERIT) \
class TWC_Backpack_1990_COIN_Dismounted_##CAMO##_2iC: INHERIT \
{ \
	scope = 1; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8); \
	}; \
};

#define BACKPACK_COIN_DISMOUNTED_PLATOON_COMMANDER(CAMO, INHERIT) \
class TWC_Backpack_1990_COIN_Dismounted_##CAMO##_Platoon_Commander: INHERIT \
{ \
	scope = 1; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,6); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,2); \
	}; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
};

#define BACKPACK_COIN_DISMOUNTED_PLATOON_SERGEANT(CAMO, INHERIT) \
class TWC_Backpack_1990_COIN_Dismounted_##CAMO##_Platoon_Sergeant: INHERIT \
{ \
	scope = 1; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8); \
	}; \
};

#define BACKPACK_COIN_DISMOUNTED_PLATOON_MEDIC(CAMO, INHERIT) \
class TWC_Backpack_1990_COIN_Dismounted_##CAMO##_Platoon_Medic: INHERIT \
{ \
	scope = 1; \
	class TransportItems { \
		ADD_ITEM(ACE_fieldDressing,20); \
		ADD_ITEM(ACE_morphine,10); \
		ADD_ITEM(ACE_elasticBandage,20); \
		ADD_ITEM(ACE_quikclot,20); \
		ADD_ITEM(ACE_packingBandage,20); \
		ADD_ITEM(ACE_adenosine,4); \
		ADD_ITEM(ACE_atropine,4); \
		ADD_ITEM(ACE_epinephrine,10); \
		ADD_ITEM(ACE_salineIV_500,6); \
		ADD_ITEM(ACE_tourniquet,4); \
		ADD_ITEM(ACE_personalAidKit,1); \
		ADD_ITEM(TWC_Item_Medical_SutureKit_25,1); \
	}; \
};

//WOODLAND, COIN
//Section
BACKPACK_COIN_SECTIONCOMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_COIN_2IC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)

//Platoon Command
BACKPACK_COIN_PLATOON_COMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_COIN_PLATOON_SERGEANT(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_COIN_PLATOON_MEDIC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_B)

//Attachments

//WOODLAND, COIN, DISMOUNTED
//Section
BACKPACK_COIN_DISMOUNTED_RIFLEMAN(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)
BACKPACK_COIN_DISMOUNTED_AT(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)
BACKPACK_COIN_DISMOUNTED_GUNNER(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)
BACKPACK_COIN_DISMOUNTED_SECTIONCOMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_COIN_DISMOUNTED_2IC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_B)

//Platoon Command
BACKPACK_COIN_DISMOUNTED_PLATOON_COMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_COIN_DISMOUNTED_PLATOON_SERGEANT(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_COIN_DISMOUNTED_PLATOON_MEDIC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_B)

//DESERT, REGULAR
//Section
BACKPACK_COIN_SECTIONCOMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
BACKPACK_COIN_2IC(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_A)

//Platoon Command
BACKPACK_COIN_PLATOON_COMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
BACKPACK_COIN_PLATOON_SERGEANT(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
BACKPACK_COIN_PLATOON_MEDIC(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_B)

//Attachments

//DESERT, COIN, DISMOUNTED
//Section
BACKPACK_COIN_DISMOUNTED_RIFLEMAN(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_A)
BACKPACK_COIN_DISMOUNTED_AT(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_A)
BACKPACK_COIN_DISMOUNTED_GUNNER(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_A)
BACKPACK_COIN_DISMOUNTED_SECTIONCOMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
BACKPACK_COIN_DISMOUNTED_2IC(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_B)

//Platoon Command
BACKPACK_COIN_DISMOUNTED_PLATOON_COMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
BACKPACK_COIN_DISMOUNTED_PLATOON_SERGEANT(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
BACKPACK_COIN_DISMOUNTED_PLATOON_MEDIC(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_B)

//TROPIC, COIN
//Section
BACKPACK_COIN_SECTIONCOMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
BACKPACK_COIN_2IC(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_A)

//Platoon Command
BACKPACK_COIN_PLATOON_COMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
BACKPACK_COIN_PLATOON_SERGEANT(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
BACKPACK_COIN_PLATOON_MEDIC(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_B)

//Attachments

//TROPIC, COIN, DISMOUNTED
//Section
BACKPACK_COIN_DISMOUNTED_RIFLEMAN(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_A)
BACKPACK_COIN_DISMOUNTED_AT(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_A)
BACKPACK_COIN_DISMOUNTED_GUNNER(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_A)
BACKPACK_COIN_DISMOUNTED_SECTIONCOMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
BACKPACK_COIN_DISMOUNTED_2IC(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_B)

//Platoon Command
BACKPACK_COIN_DISMOUNTED_PLATOON_COMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
BACKPACK_COIN_DISMOUNTED_PLATOON_SERGEANT(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
BACKPACK_COIN_DISMOUNTED_PLATOON_MEDIC(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_B)

//ARCTIC, COIN
//Section
BACKPACK_COIN_SECTIONCOMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
BACKPACK_COIN_2IC(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_A)

//Platoon Command
BACKPACK_COIN_PLATOON_COMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
BACKPACK_COIN_PLATOON_SERGEANT(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
BACKPACK_COIN_PLATOON_MEDIC(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_B)

//Attachments

//ARCTIC, COIN, DISMOUNTED
//Section
BACKPACK_COIN_DISMOUNTED_RIFLEMAN(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_A)
BACKPACK_COIN_DISMOUNTED_AT(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_A)
BACKPACK_COIN_DISMOUNTED_GUNNER(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_A)
BACKPACK_COIN_DISMOUNTED_SECTIONCOMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
BACKPACK_COIN_DISMOUNTED_2IC(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_B)

//Platoon Command
BACKPACK_COIN_DISMOUNTED_PLATOON_COMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
BACKPACK_COIN_DISMOUNTED_PLATOON_SERGEANT(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
BACKPACK_COIN_DISMOUNTED_PLATOON_MEDIC(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_B)