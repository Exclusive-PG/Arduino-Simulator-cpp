#ifndef GraphicsLib_HEADER
#define GraphicsLib_HEADER
#pragma once
#include <basetsd.h>
#include "graphics.h"
using namespace std;

class GraphicsLib
{

private:
	INT16 width, height;

public:
	void ClearDisplay();

	void drawPixel(INT16 x0, INT16 y0, INT16 R , INT16 G , INT16 B);

	void drawLine(INT16 x0 , INT16 y0 , INT16 x1 , INT16 y1 , INT16 R, INT16 G, INT16 B);

	void DrawRectangle(INT16 left, INT16 top, INT16 right, INT bottom, INT16 R, INT16 G, INT16 B);

	void FillRectangle(INT16 left, INT16 top, INT16 right, INT bottom, INT16 R, INT16 G, INT16 B);

	void DrawEllipse(INT16 x0, INT16 y0, INT16 rX, INT rY, INT16 R, INT16 G, INT16 B);
	
	void FillEllipse(INT16 x0, INT16 y0, INT16 rX, INT rY, INT16 R, INT16 G, INT16 B);

	void DrawCircle(INT16 x0, INT16 y0, INT16 rad, INT16 R, INT16 G, INT16 B);

	void FillCircle(INT16 x0, INT16 y0, INT16 rad, INT16 R, INT16 G, INT16 B);

	void DrawText(INT16 x0, INT16 y0, INT16 font, INT16 length, INT16 R, INT16 G, INT16 B, string TEXT);

	int getWindowWidth();

	int getWindowHeight();

	void setOrin(INT16 x , INT16 y);

	void initWINDOW(INT16 width, INT16 height);
};

#endif