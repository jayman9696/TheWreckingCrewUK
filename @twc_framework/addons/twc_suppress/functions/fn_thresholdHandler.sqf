if (TWC_Suppress_threshold > 0) then {
	private _subtract = call {
		if ((time - TWC_Suppress_lastShotTime) <= 2.4) exitWith {0.25};
		if (TWC_Suppress_isSuppressed) exitWith {1.5};
		1.9
	};

	TWC_Suppress_threshold = (TWC_Suppress_threshold - _subtract) max 0;
};