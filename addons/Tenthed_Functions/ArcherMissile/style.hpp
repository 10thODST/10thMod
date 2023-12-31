#define Dr_COEF_X safezoneX
#define Dr_COEF_Y safezoneY
#define Dr_COEF_W safezoneW / 40
#define Dr_COEF_H safezoneH / 25
#define Dr_COEF_WAbs safezoneW
#define Dr_COEF_HAbs safezoneH

class RscPicture
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {1, 1, 1, 1};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
};
class RscStructuredText {
	deletable = 0;
	fade = 0;
	access = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {1, 1, 1, 1};
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#ffffff";
		colorLink = "#D09B43";
		align = "left";
		shadow = 1;
		valign = "top";
	};
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 1;
};

class RscVignette: RscPicture
{
	x = "safezoneXAbs";
	y = "safezoneY";
	w = "safezoneWAbs";
	h = "safezoneH";
	text = "data\UI\vignette_ca.paa";
	colortext[] = {0, 0, 0, 0.5};
};

class RscStructuredTextUI : RscStructuredText {
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * (0.55 / (getResolution # 5)))";
};

class RscTitles {
	class DrPredatorScreen {
		idd = -1;
		movingEnable = 0;
		duration = 1e+10;
		fadein = 0;
		fadeout = 0;
		onLoad = "uinamespace setVariable ['DrPredatorScreen', _this # 0]";
		onUnload = "uinamespace setVariable ['DrPredatorScreen', displayNull]";
		
		class controls {
			class Vignette : RscVignette {};
			class Title: RscStructuredTextUI
			{
				idc = 1100;
				text = "<t align='center' font='EtelkaMonospaceProBold' size='1'>CAMERA: MISSILE</t>";
				x = 12 * Dr_COEF_W + Dr_COEF_X;
				y = 5 * Dr_COEF_H + Dr_COEF_Y;
				w = 16 * Dr_COEF_W;
				h = 1.5 * Dr_COEF_H;
				colorBackground[] = {-1,-1,-1,0};
			};
			class Scope: RscPicture
			{
				idc = 1200;
				text = "data\UI\scope_ca.paa";
				x = 14.02 * Dr_COEF_W + Dr_COEF_X;
				y = 5.73 * Dr_COEF_H + Dr_COEF_Y;
				w = 12 * Dr_COEF_W;
				h = 13.5 * Dr_COEF_H;
			};
			class DroneID: RscStructuredTextUI
			{
				idc = 1101;
				text = "<t align='right' font='EtelkaMonospaceProBold' size='0.8'>54.23.56.78.32.4c.5a.45.68.7d.8u.54.51.85</t>";
				x = 21 * Dr_COEF_W + Dr_COEF_X;
				y = 21.5 * Dr_COEF_H + Dr_COEF_Y;
				w = 16 * Dr_COEF_W;
				h = 0.5 * Dr_COEF_H;
				colorBackground[] = {-1,-1,-1,0};
			};
			class Coordinates: RscStructuredTextUI
			{
				idc = 1102;
				text = "";
				x = 3 * Dr_COEF_W + Dr_COEF_X;
				y = 3 * Dr_COEF_H + Dr_COEF_Y;
				w = 4.5 * Dr_COEF_W;
				h = 3.5 * Dr_COEF_H;
				colorBackground[] = {-1,-1,-1,0};
			};
			class Hiint: RscStructuredTextUI
			{
				idc = 1103;
				text = "<t align='left' font='EtelkaMonospaceProBold' size='0.7'><t color=""#ffd804"">RMB</t> - Toggle Zoom<br /><t color=""#ffd804"">N</t> - Toggle Thermal<t>"; //--- ToDo: Localize;
				x = 4 * Dr_COEF_W + Dr_COEF_X;
				y = 21.5 * Dr_COEF_H + Dr_COEF_Y;
				w = 7.35417 * Dr_COEF_W;
				h = 1.5625 * Dr_COEF_H;
			};
		};
	};
};

class CfgSounds
{
	sounds[] = {};
	
	class DrSound_Base {
		name = "";
		sound[] = {"", 1, 1, 0};
		titles[] = {};
	};
	class DrSound_LaunchRocket : DrSound_Base {
		name = "DrSound_LaunchRocket";
		sound[] = {"data\sounds\missile_1", 1, 1, 10};
	};
};