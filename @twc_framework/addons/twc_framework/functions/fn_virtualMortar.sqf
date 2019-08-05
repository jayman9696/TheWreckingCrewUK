/*
* Author: [TWC] jayman
* Creates an zeus artillery barrage at the selected location
*
* Arguments:
* 0: Target Marker <STRING>
*
* Additional Parameters:
* 1: Dispersion Radius <NUMBER>
* 2: Amount of Rounds <NUMBER>
* 3: Type of Rounds <STRING>
* 4: Delay <Number>
*
* Return Value:
* NOTHING
*
* Example:
* ["mortarTargetMarker", 150, 5, "HE", 15] call twc_fnc_virtualMortar;
*
* Public: No
*/

if (isServer) then {
	params ["_marker", ["_radius", 200], ["_rounds", 5], ["_roundselect", ""], ["_delay", 10], ["_safeArea", "nil"]];

	_pos = switch (typeName _marker) do {
		case "STRING": {getMarkerPos _marker;};
		case "ARRAY": {_marker};
		default {throw "Invalid Virtual Artillery Marker"};
	};

	_roundtype = switch (_roundselect) do {
		case "HE": {"ModuleOrdnanceMortar_F"};
		case "HE_Harmless_Small": {"twc_ModuleOrdnanceMortar_Dummy_small"};
		case "HE_Harmless_Medium": {"twc_ModuleOrdnanceMortar_Dummy_medium"};
		case "HE_Harmless_Big": {"twc_ModuleOrdnanceMortar_Dummy_big"};
		case "SMOKE": {"SmokeShellArty"};
		case "ILLUM": {"twc_ammo_artillery_illumination"};
		case "ILLUM_IR": {"twc_ammo_artillery_illumination_ir"};
		default {"ModuleOrdnanceMortar_F"};
	};

	for "_i" from 1 to _rounds do {
		_position = [_pos, _radius] call CBA_fnc_randPos;

		if !(_position inArea _safeArea) then {
			[{
				params ["_position", "_roundtype"];
				_round = _roundtype createVehicle _position;
				if (_roundtype == "twc_ammo_artillery_illumination" || _roundtype == "twc_ammo_artillery_illumination_ir") then {
					_position set [2, 100];
					_round setPos _position;
					_round setVelocity [0, 0, -0.05];
				};
			}, [_position, _roundtype], _delay * _i] call CBA_fnc_waitAndExecute;
		} else {
			_i = _i - 1;
		};
	};
};

