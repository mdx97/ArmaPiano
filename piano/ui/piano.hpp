// @TODO: Fix note names.
class Piano
{
	idd = 999;

	class controlsBackground
	{
		class Body: IGUIBack
		{
			idc = -1;
			x = 0.210198 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.576502 * safezoneW;
			h = 0.33 * safezoneH;
		};
	};

	class controls
	{
		class Felt: RscPicture
		{
			idc = -1;
			text = "#(argb,8,8,3)color(0.5,0,0,1)";
			x = 0.214344 * safezoneW + safezoneX;
			y = 0.3856 * safezoneH + safezoneY;
			w = 0.567219 * safezoneW;
			h = 0.0055 * safezoneH;
		};

		class SustainBackground: RscPicture
		{
			idc = 1036;
			x = 0.435031 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.055 * safezoneH;
			text = "#(argb,8,8,3)color(0,0,0,0.8)";
		};

		class SustainText: RscStructuredText
		{
			idc = -1;
			text = "<t  align = 'center' valign='middle' size='2'>SUSTAIN</t>"; //--- ToDo: Localize;
			x = 0.435031 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

		class RecordButtonImage: RscPicture
		{
			idc = -1;
			text = "#(argb,8,8,3)color(1,0,0,1)";
			x = 0.379342 * safezoneW + safezoneX;
			y = 0.3394 * safezoneH + safezoneY;
			w = 0.02475 * safezoneW;
			h = 0.0418 * safezoneH;
		};

		class RecordButton: RscButton
		{
			idc = 1037;
			x = 0.379342 * safezoneW + safezoneX;
			y = 0.3394 * safezoneH + safezoneY;
			w = 0.02475 * safezoneW;
			h = 0.0418 * safezoneH;
			action = "disableSerialization; if (!PIANO_recording) then { [] call PIANO_fnc_startRecording; ((findDisplay 999) displayCtrl 1037) ctrlSetToolTip ""Stop Recording.""; } else { PIANO_recording = false; ((findDisplay 999) displayCtrl 1037) ctrlSetToolTip ""Start Recording.""; };";
			toolTip = "Start Recording.";
			onKeyDown = "_this call PIANO_fnc_keyDownHandler;";
			onKeyUp = "_this call PIANO_fnc_keyUpHandler;";
		};

		class PlayButtonImage: RscPicture
		{
			idc = -1;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.405123 * safezoneW + safezoneX;
			y = 0.3394 * safezoneH + safezoneY;
			w = 0.02475 * safezoneW;
			h = 0.0418 * safezoneH;
		};

		class PlayButton: RscButton
		{
			idc = 1038;
			x = 0.405123 * safezoneW + safezoneX;
			y = 0.3394 * safezoneH + safezoneY;
			w = 0.02475 * safezoneW;
			h = 0.0418 * safezoneH;
			action = "if (!PIANO_recording && !PIANO_playingBack) then { [] spawn PIANO_fnc_playback; } else { PIANO_playingBack = false; };";
			toolTip = "Playback Recording.";
			onKeyDown = "_this call PIANO_fnc_keyDownHandler;";
			onKeyUp = "_this call PIANO_fnc_keyUpHandler;";
		};

		/*
		====================
			NATURALS
		====================
		*/

		class C3: RscPicture
		{
			idc = 1000;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.217437 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class D3: RscPicture
		{
			idc = 1002;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.244249 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class E3: RscPicture
		{
			idc = 1004;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.271063 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class F3: RscPicture
		{
			idc = 1005;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.297875 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class G3: RscPicture
		{
			idc = 1007;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class A4: RscPicture
		{
			idc = 1009;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.3515 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class B4: RscPicture
		{
			idc = 1011;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.378312 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class C4: RscPicture
		{
			idc = 1012;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.405124 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class D4: RscPicture
		{
			idc = 1014;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.431936 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class E4: RscPicture
		{
			idc = 1016;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class F4: RscPicture
		{
			idc = 1017;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.485562 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class G4: RscPicture
		{
			idc = 1019;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.512374 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class A5: RscPicture
		{
			idc = 1021;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.539187 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class B5: RscPicture
		{
			idc = 1023;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.566 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class C5: RscPicture
		{
			idc = 1024;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class D5: RscPicture
		{
			idc = 1026;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.619625 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class E5: RscPicture
		{
			idc = 1028;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.646437 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class F5: RscPicture
		{
			idc = 1029;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.673249 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class G5: RscPicture
		{
			idc = 1031;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.700061 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class A6: RscPicture
		{
			idc = 1033;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.726875 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		class B6: RscPicture
		{
			idc = 1035;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.753667 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.264 * safezoneH;
		};

		/*
		====================
			ACCIDENTALS
		====================
		*/

		class C_Sharp_3: RscPicture
		{
			idc = 1001;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			x = 0.236 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.1738 * safezoneH;
		};

		class D_Sharp_3: RscPicture
		{
			idc = 1003;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			x = 0.262812 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.1738 * safezoneH;
		};

		class F_Sharp_3: RscPicture
		{
			idc = 1006;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			x = 0.316437 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.1738 * safezoneH;
		};

		class G_Sharp_3: RscPicture
		{
			idc = 1008;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			x = 0.343249 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.1738 * safezoneH;
		};

		class A_Sharp_4: RscPicture
		{
			idc = 1010;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			x = 0.370063 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.1738 * safezoneH;
		};

		class C_Sharp_4: RscPicture
		{
			idc = 1013;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			x = 0.423687 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.1738 * safezoneH;
		};

		class D_Sharp_4: RscPicture
		{
			idc = 1015;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			x = 0.4505 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.1738 * safezoneH;
		};

		class F_Sharp_4: RscPicture
		{
			idc = 1018;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			x = 0.504125 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.1738 * safezoneH;
		};

		class G_Sharp_4: RscPicture
		{
			idc = 1020;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			x = 0.530936 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.1738 * safezoneH;
		};

		class A_Sharp_5: RscPicture
		{
			idc = 1022;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			x = 0.55775 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.1738 * safezoneH;
		};

		class C_Sharp_5: RscPicture
		{
			idc = 1025;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			x = 0.611374 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.1738 * safezoneH;
		};

		class D_Sharp_5: RscPicture
		{
			idc = 1027;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			x = 0.638188 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.1738 * safezoneH;
		};

		class F_Sharp_5: RscPicture
		{
			idc = 1030;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			x = 0.691812 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.1738 * safezoneH;
		};
		
		class G_Sharp_5: RscPicture
		{
			idc = 1032;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			x = 0.718626 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.1738 * safezoneH;
		};

		class A_Sharp_6: RscPicture
		{
			idc = 1034;
			text = "#(argb,8,8,3)color(0,0,0,1)";
			x = 0.745438 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.1738 * safezoneH;
		};
	};
};
