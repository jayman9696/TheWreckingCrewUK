//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Sakhe
//delete itself
_Sakhestart = createTrigger ["EmptyDetector", getMarkerPos "Sakhe"];
_Sakhestart setTriggerArea [400, 400, 0, false];
_Sakhestart setTriggerActivation ["West", "PRESENT", False];
_Sakhestart setTriggerStatements ["this","['Sakhe',7,100,6,[400,500]] call twc_townSetup"
	,""
];

