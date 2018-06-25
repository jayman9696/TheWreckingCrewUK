class CfgPatches {
	class twc_faction_ww2 {
		units[] = {
			"WW2_British_Base",
			"WW2_British_Platoon_Commander",
			"WW2_British_Platoon_Sergeant",
			"WW2_British_Medic",
			"WW2_British_Section_Leader",
			"WW2_British_Rifleman",
			"WW2_British_2IC",
			"WW2_British_MG",
			"WW2_British_MGASS",
			"WW2_British_AT",
			"WW2_British_AAT",
			"WW2_British_Vehicle_Commander",
			"WW2_British_Vehicle_Crewman",
			
			"WW2_Para_British_Platoon_Commander",
			"WW2_Para_British_Platoon_Sergeant",
			"WW2_Para_British_Medic",
			"WW2_Para_British_Section_Commander",
			"WW2_Para_British_Rifleman",
			"WW2_Para_British_2IC",
			"WW2_Para_British_MG",
			"WW2_Para_British_MGASS",
			"WW2_Para_British_AT",
			"WW2_Para_British_AAT",
			"WW2_Para_British_Carrier_SMG",
			
			"WW2_British_Platoon_Commander_Early",
			"WW2_British_Medic_Early",
			"WW2_British_Section_Leader_Early"
		};

		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR"
		};
	};
};

class EventHandlers;
class CfgEditorSubCategories {
	class Men_WW2 {
		displayName = "Infantry (Late)";
	};

	class Men_WW2_Para {
		displayName = "Infantry - Paratroopers (Late)";
	};

	class Men_1956 {
		displayName = "Infantry (1956)";
	};

	class Regular_Early_WW2 {
		displayName = "Infantry (Early)";
	};
};

class CfgFactionClasses {
	class twc_faction_independent {
		displayName = "TWC WW2 Operation Units";
		author = "Saxon, Bosenator, Rik";
		icon = "TWClogo.paa";
		priority = 2;
		side = 2;
	};
};

class CfgVehicles {
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;

	#include "ww2.hpp"
	#include "1956.hpp"
	#include "ww2_para.hpp"
	#include "backpacks.hpp"

	#include "early\infantry.hpp"
	//#include "late\infantry.hpp"
	//#include "1956\infantry.hpp"
};

// class fow_b_uk_p37_blanco;
class CfgWeapons {
	#include "vests.hpp"
};