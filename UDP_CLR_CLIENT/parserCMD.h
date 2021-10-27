#pragma once
#include <string>
using namespace std;


class parserCMD
{
public:

	int* parserV2(char buff[]);
	static constexpr int CLEAR_DISPLAY = 1;
	static constexpr int DRAW_PIX = 2;
	static constexpr int DRAW_LINE = 3;
	static constexpr int DRAW_REACTANGLE = 4;
	static constexpr int FILL_REACTANGLE = 5;
	static constexpr int DRAW_ELLIPSE = 6;
	static constexpr int FILL_ELLIPSE = 7;


	//2nd LVL
	static constexpr int DRAW_CIRCLE = 8;
	static constexpr int FILL_CIRCLE = 9;
	static constexpr int DRAW_ROUND_RECTANGLE = 10;
	static constexpr int FILL_ROUND_RECTANGLE = 11;
	static constexpr int DRAW_TEXT = 12;
	static constexpr int DRAW_IMG = 13;


	//ADVANCED LVL
	static constexpr int SET_ORIN = 14;
	static constexpr int GET_WIDTH = 15;
	static constexpr int GET_HEIGHT = 16;
	static constexpr int GET_TIME = 17;
	static constexpr int START_TIME = 18;
	static constexpr int STOP_TIME = 19;
	static constexpr int SET_PRESET_DC = 20;


	static constexpr int PRESS_BTN_ONE_ARDUINO = 21;
	static constexpr int PRESS_BTN_TWO_ARDUINO = 22;
	static constexpr int PRESS_BTN_THREE_ARDUINO = 23;
	static constexpr int LCD_ON = 24;
	static constexpr int LCD_OFF = 25;
	static constexpr int IDLE_ARDUINO = 26;
	static constexpr int STOP_IDLE_ARDUINO = 27;
	static constexpr int DRAW_LCD_CIRCLES = 28;
	static constexpr int  DRAW_LCD_RECTANGLES = 29;

	string NAME_IMG = "";
	string TEXT = "";


};


