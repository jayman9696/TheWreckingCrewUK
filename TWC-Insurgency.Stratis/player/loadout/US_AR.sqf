comment "Exported from Arsenal by jayman";

comment "Remove existing items";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

comment "Add containers";
player forceAddUniform "U_B_CombatUniform_mcam";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACRE_PRC148";
player addItemToUniform "ACE_EarPlugs";
player addVest "CUP_V_B_MTV_MG";
player addItemToVest "CUP_HandGrenade_L109A1_HE";
for "_i" from 1 to 2 do {player addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 3 do {player addItemToVest "200Rnd_mas_556x45_Stanag";};
player addItemToVest "200Rnd_mas_556x45_T_Stanag";
player addBackpack "B_mas_Kitbag_mul";
for "_i" from 1 to 2 do {player addItemToBackpack "200Rnd_mas_556x45_T_Stanag";};
for "_i" from 1 to 2 do {player addItemToBackpack "HandGrenade";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addItemToBackpack "CUP_M136_M";
player addHeadgear "H_HelmetB_camo";

comment "Add weapons";
player addWeapon "LMG_mas_M249_F";
player addPrimaryWeaponItem "acc_mas_pointer_IR_b";
player addPrimaryWeaponItem "optic_mas_acog_eo";
player addPrimaryWeaponItem "bipod_03_F_blk";
player addWeapon "CUP_launch_M136";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "CUP_NVG_PVS7";