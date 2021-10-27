


#include "GraphicsLib.h"
#include "graphics.h"


	
	void GraphicsLib::initWINDOW(INT16 width, INT16 height) {
		this->width = width;
		this->height = height;
		initwindow(this->width, this->height,"GraphicsWin");
	}
	void GraphicsLib::ClearDisplay() {

		cleardevice();
	}

	void GraphicsLib::drawPixel(INT16 x0, INT16 y0, INT16 R, INT16 G, INT16 B) {

		putpixel(x0, y0, COLOR(R, G, B));
	}

	void GraphicsLib::drawLine(INT16 x0, INT16 y0, INT16 x1, INT16 y1, INT16 R, INT16 G, INT16 B) {
	
		setcolor(COLOR(R, G, B));
		line(x0, y0, x1, y1);

	}

	void GraphicsLib::DrawRectangle(INT16 left, INT16 top, INT16 right, INT bottom, INT16 R, INT16 G, INT16 B) {
		setcolor(COLOR(R, G, B));
		rectangle(left, top, right, bottom);
	}

	void GraphicsLib::FillRectangle(INT16 left, INT16 top, INT16 right, INT bottom, INT16 R, INT16 G, INT16 B) {


		setfillstyle(1, COLOR(R, G, B));
		bar(left, top, right, bottom);
	}
	void GraphicsLib::DrawEllipse(INT16 x0, INT16 y0, INT16 rX, INT rY, INT16 R, INT16 G, INT16 B) {

		setcolor(COLOR(R, G, B));
		ellipse(x0, y0, 0, 360, rX, rY);
		
	}
	void GraphicsLib::FillEllipse(INT16 x0, INT16 y0, INT16 rX, INT rY, INT16 R, INT16 G, INT16 B) {


		setfillstyle(1, COLOR(R, G, B));

		fillellipse(x0, y0,rX,rY);
	
	}

	void GraphicsLib::DrawCircle(INT16 x0, INT16 y0, INT16 rad, INT16 R, INT16 G, INT16 B) {


		setcolor(COLOR(R, G, B));
		circle(x0, y0, rad);

	}

	void GraphicsLib::FillCircle(INT16 x0, INT16 y0, INT16 rad, INT16 R, INT16 G, INT16 B) {
		
		setfillstyle(1, COLOR(R, G, B));
		setcolor(COLOR(R, G, B));
		circle(x0, y0, rad);
		floodfill(x0, y0, COLOR(R, G, B));
	}


	void GraphicsLib::DrawText(INT16 x0, INT16 y0, INT16 font, INT16 length, INT16 R, INT16 G, INT16 B,string TEXT) {

		settextstyle(font, 0, length);
		setfillstyle(1, COLOR(29, 42, 72));
		floodfill(x0, y0, COLOR(29, 42, 72));
		outtextxy(x0, y0, (char*)TEXT.c_str());
	}

	int GraphicsLib::getWindowWidth() {
	
		return this->width;
	}
	
	int GraphicsLib::getWindowHeight() {

		return this->height;
	}
	void GraphicsLib::setOrin(INT16 x, INT16 y) {
		closegraph();
		initwindow(this->width, this->height, "GraphicsWin", x, y);
	}

