#define _CRT_SECURE_NO_WARNINGS
#include "parserCMD.h"
#include <string>;
#include <iostream>;
#include <algorithm>

using namespace std;






int* parserCMD::parserV2(char buff[]) {

	string* arrayWord = new string[100];

	int* arrayData = new int[100];
	//Разбор слов
	char separators[] = ", ()";
	char* tok;

	
	//tok = strtok(buff, separators);
	int w = 0;
	for (size_t i = 0; i < strlen(buff); i++)
	{
		
		bool o = false;
		for (size_t j = 0; j < sizeof(separators) / sizeof(*separators); j++)
		{
			if (separators[j] == buff[i]) {
				o = true;
				w++;
			
				break;
			}
		}
		if (!o) {
			arrayWord[w] += buff[i];
		}
	}
	/*while (tok) {
		cout << tok << endl;

		arrayWord[counter] = tok;
		arrayWord[counter].erase(remove_if(arrayWord[counter].begin(), arrayWord[counter].end(), isspace), arrayWord[counter].end());
		tok = strtok(NULL, separators);
		counter++;
	}*/
	//Очистка консоли 1



	if (arrayWord[0] == "clear") {
		arrayData[0] = 1;
		return arrayData;
	}

	///PIXEL 2
	else if (arrayWord[0] == "draw" && arrayWord[1] == "pix") {

		int x, y, RedColor, GreenColor, BlueColor;

		try
		{
			
			x = stoi(arrayWord[2]);
			y = stoi(arrayWord[3]);
			RedColor = stoi(arrayWord[4]);
			GreenColor = stoi(arrayWord[5]);
			BlueColor = stoi(arrayWord[6]);

			if (RedColor > 255 || GreenColor > 255 || BlueColor > 255 || x > 1000 || x < 0 || y > 1000 || y < 0) {
			//if(x > 1000){
				cout << "WRONG PARAMETR" << endl;
				arrayData[0] = -999;
				return arrayData;
			}
			arrayData[0] = 2;
			arrayData[1] = x;
			arrayData[2] = y;
			arrayData[3] = RedColor;
			arrayData[4] = GreenColor;
			arrayData[5] = BlueColor;

	

			return arrayData;
		}

		catch (const std::exception& ex)
		{
			cout << ex.what() << endl;
			arrayData[0] = -999;
			return arrayData;
		}

	}
	///LINE 3
	else if (arrayWord[0] == "draw" && arrayWord[1] == "line") {

		int x0, y0,x1,y1, RedColor, GreenColor, BlueColor;

		try
		{

			x0 = stoi(arrayWord[2]);
			y0 = stoi(arrayWord[3]);
			x1 = stoi(arrayWord[4]);
			y1 = stoi(arrayWord[5]);
			RedColor = stoi(arrayWord[6]);
			GreenColor = stoi(arrayWord[7]);
			BlueColor = stoi(arrayWord[8]);

			if (RedColor > 255 || GreenColor > 255 || BlueColor > 255 || x0 > 1000 || x0 < 0 || y0 > 1000 || y0 < 0) {
				//if(x > 1000){
				cout << "WRONG PARAMETR" << endl;
				arrayData[0] = -999;
				return arrayData;
			}
			arrayData[0] = 3;
			arrayData[1] = x0;
			arrayData[2] = y0;
			arrayData[3] = x1;
			arrayData[4] = y1;
			arrayData[5] = RedColor;
			arrayData[6] = GreenColor;
			arrayData[7] = BlueColor;



			return arrayData;
		}

		catch (const std::exception& ex)
		{
			cout << ex.what() << endl;
			arrayData[0] = -999;
			//arrayData[1] = DRAW_PIX;
			return arrayData;
		}

	}

	//DRAW RECTANGLE 4 
	
	else if (arrayWord[0] == "draw" && arrayWord[1] == "rectangle") {

		int x0, y0, w, h, RedColor, GreenColor, BlueColor;

		try
		{

			x0 = stoi(arrayWord[2]);
			y0 = stoi(arrayWord[3]);
			w = stoi(arrayWord[4]);
			h = stoi(arrayWord[5]);
			RedColor = stoi(arrayWord[6]);
			GreenColor = stoi(arrayWord[7]);
			BlueColor = stoi(arrayWord[8]);

			if (RedColor > 255 || GreenColor > 255 || BlueColor > 255 || x0 > 1000 || x0 < 0 || y0 > 1000 || y0 < 0) {
				//if(x > 1000){
				cout << "WRONG PARAMETR" << endl;
				arrayData[0] = -999;
				return arrayData;
			}
			arrayData[0] = 4;
			arrayData[1] = x0;
			arrayData[2] = y0;
			arrayData[3] = w;
			arrayData[4] = h;
			arrayData[5] = RedColor;
			arrayData[6] = GreenColor;
			arrayData[7] = BlueColor;

			return arrayData;
		}

		catch (const std::exception& ex)
		{
			cout << ex.what() << endl;
			arrayData[0] = -999;
			return arrayData;
		}

	}


	//FILL RECTANGLE 5 

	else if (arrayWord[0] == "fill" && arrayWord[1] == "rectangle") {

	int x0, y0, w, h, RedColor, GreenColor, BlueColor;

	try
	{

		x0 = stoi(arrayWord[2]);
		y0 = stoi(arrayWord[3]);
		w = stoi(arrayWord[4]);
		h = stoi(arrayWord[5]);
		RedColor = stoi(arrayWord[6]);
		GreenColor = stoi(arrayWord[7]);
		BlueColor = stoi(arrayWord[8]);

		if (RedColor > 255 || GreenColor > 255 || BlueColor > 255 || x0 > 1000 || x0 < 0 || y0 > 1000 || y0 < 0) {
			//if(x > 1000){
			cout << "WRONG PARAMETR" << endl;
			arrayData[0] = -999;
			return arrayData;
		}
		arrayData[0] = 5; //CMD
		arrayData[1] = x0;
		arrayData[2] = y0;
		arrayData[3] = w;
		arrayData[4] = h;
		arrayData[5] = RedColor;
		arrayData[6] = GreenColor;
		arrayData[7] = BlueColor;



		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}


	//DRAW_ELLIPSE 6

	else if (arrayWord[0] == "draw" && arrayWord[1] == "ellipse") {

	int x0, y0,radX, radY, RedColor, GreenColor, BlueColor;

	try
	{

		x0 = stoi(arrayWord[2]);
		y0 = stoi(arrayWord[3]);
		radX = stoi(arrayWord[4]);
		radY = stoi(arrayWord[5]);
		RedColor = stoi(arrayWord[6]);
		GreenColor = stoi(arrayWord[7]);
		BlueColor = stoi(arrayWord[8]);

		if (RedColor > 255 || GreenColor > 255 || BlueColor > 255 || x0 > 1000 || x0 < 0 || y0 > 1000 || y0 < 0) {
			//if(x > 1000){
			cout << "WRONG PARAMETR" << endl;
			arrayData[0] = -999;
			return arrayData;
		}
		arrayData[0] = 6; //CMD
		arrayData[1] = x0;
		arrayData[2] = y0;
		arrayData[3] = radX;
		arrayData[4] = radY;
		arrayData[5] = RedColor;
		arrayData[6] = GreenColor;
		arrayData[7] = BlueColor;



		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}
	

	//FILL_ELLIPSE  7
	else if (arrayWord[0] == "fill" && arrayWord[1] == "ellipse") {

	int x0, y0, radX, radY, RedColor, GreenColor, BlueColor;

	try
	{

		x0 = stoi(arrayWord[2]);
		y0 = stoi(arrayWord[3]);
		radX = stoi(arrayWord[4]);
		radY = stoi(arrayWord[5]);
		RedColor = stoi(arrayWord[6]);
		GreenColor = stoi(arrayWord[7]);
		BlueColor = stoi(arrayWord[8]);

		if (RedColor > 255 || GreenColor > 255 || BlueColor > 255 || x0 > 1000 || x0 < 0 || y0 > 1000 || y0 < 0) {
			//if(x > 1000){
			cout << "WRONG PARAMETR" << endl;
			arrayData[0] = -999;
			return arrayData;
		}
		arrayData[0] = 7; //CMD
		arrayData[1] = x0;
		arrayData[2] = y0;
		arrayData[3] = radX;
		arrayData[4] = radY;
		arrayData[5] = RedColor;
		arrayData[6] = GreenColor;
		arrayData[7] = BlueColor;



		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}


	//DRAW_CIRCLE  8
	else if (arrayWord[0] == "draw" && arrayWord[1] == "circle") {

	int x0, y0, rad, RedColor, GreenColor, BlueColor;

	try
	{

		x0 = stoi(arrayWord[2]);
		y0 = stoi(arrayWord[3]);
		rad = stoi(arrayWord[4]);
		RedColor = stoi(arrayWord[5]);
		GreenColor = stoi(arrayWord[6]);
		BlueColor = stoi(arrayWord[7]);

		if (RedColor > 255 || GreenColor > 255 || BlueColor > 255 || x0 > 1000 || x0 < 0 || y0 > 1000 || y0 < 0) {
			//if(x > 1000){
			cout << "WRONG PARAMETR" << endl;
			arrayData[0] = -999;
			return arrayData;
		}
		arrayData[0] = DRAW_CIRCLE; //CMD
		arrayData[1] = x0;
		arrayData[2] = y0;
		arrayData[3] = rad;
		arrayData[4] = RedColor;
		arrayData[5] = GreenColor;
		arrayData[6] = BlueColor;



		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}

	// FILL_CIRCLE  9
	else if (arrayWord[0] == "fill" && arrayWord[1] == "circle") {

	int x0, y0, rad, RedColor, GreenColor, BlueColor;

	try
	{

		x0 = stoi(arrayWord[2]);
		y0 = stoi(arrayWord[3]);
		rad = stoi(arrayWord[4]);
		RedColor = stoi(arrayWord[5]);
		GreenColor = stoi(arrayWord[6]);
		BlueColor = stoi(arrayWord[7]);

		if (RedColor > 255 || GreenColor > 255 || BlueColor > 255 || x0 > 1000 || x0 < 0 || y0 > 1000 || y0 < 0) {
			//if(x > 1000){
			cout << "WRONG PARAMETR" << endl;
			arrayData[0] = -999;
			return arrayData;
		}
		arrayData[0] = FILL_CIRCLE; //CMD
		arrayData[1] = x0;
		arrayData[2] = y0;
		arrayData[3] = rad;
		arrayData[4] = RedColor;
		arrayData[5] = GreenColor;
		arrayData[6] = BlueColor;



		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}

	//  DRAW_ROUND_REACTANGLE 10
	else if (arrayWord[0] == "draw" && arrayWord[1] == "round" && arrayWord[2] == "rectangle") {

	int x0, y0, w, h ,rad, RedColor, GreenColor, BlueColor;

	try
	{

		x0 = stoi(arrayWord[3]);
		y0 = stoi(arrayWord[4]);
		w = stoi(arrayWord[5]);
		h = stoi(arrayWord[6]);
		rad = stoi(arrayWord[7]);
		RedColor = stoi(arrayWord[8]);
		GreenColor = stoi(arrayWord[9]);
		BlueColor = stoi(arrayWord[10]);

		if (RedColor > 255 || GreenColor > 255 || BlueColor > 255 || x0 > 1000 || x0 < 0 || y0 > 1000 || y0 < 0) {
			//if(x > 1000){
			cout << "WRONG PARAMETR" << endl;
			arrayData[0] = -999;
			return arrayData;
		}
		arrayData[0] = DRAW_ROUND_RECTANGLE; //CMD
		arrayData[1] = x0;
		arrayData[2] = y0;
		arrayData[3] = w;
		arrayData[4] = h;
		arrayData[5] = RedColor;
		arrayData[6] = GreenColor;
		arrayData[7] = BlueColor;



		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}
	

	//  FILL_ROUND_RECTANGLE 11 
	else if (arrayWord[0] == "fill" && arrayWord[1] == "round" && arrayWord[2] == "rectangle") {

	int x0, y0, w, h,rad , RedColor, GreenColor, BlueColor;

	try
	{

		x0 = stoi(arrayWord[3]);
		y0 = stoi(arrayWord[4]);
		w = stoi(arrayWord[5]);
		h = stoi(arrayWord[6]);
		rad = stoi(arrayWord[7]);
		RedColor = stoi(arrayWord[8]);
		GreenColor = stoi(arrayWord[9]);
		BlueColor = stoi(arrayWord[10]);

		if (RedColor > 255 || GreenColor > 255 || BlueColor > 255 || x0 > 1000 || x0 < 0 || y0 > 1000 || y0 < 0) {
			//if(x > 1000){
			cout << "WRONG PARAMETR" << endl;
			arrayData[0] = -999;
			return arrayData;
		}
		arrayData[0] = FILL_ROUND_RECTANGLE; //CMD
		arrayData[1] = x0;
		arrayData[2] = y0;
		arrayData[3] = w;
		arrayData[4] = h;
		arrayData[5] = RedColor;
		arrayData[6] = GreenColor;
		arrayData[7] = BlueColor;



		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}
	
	//DRAW_TEXT  12;
	else if (arrayWord[0] == "draw" &&  arrayWord[1] == "text") {

	int x0, y0,font, length, RedColor, GreenColor, BlueColor;
	string text;

	try
	{

		x0 = stoi(arrayWord[2]);
		y0 = stoi(arrayWord[3]);
		font = stoi(arrayWord[4]);
		length = stoi(arrayWord[5]);
		text = arrayWord[6];
		RedColor = stoi(arrayWord[7]);
		GreenColor = stoi(arrayWord[8]);
		BlueColor = stoi(arrayWord[9]);

		if (RedColor > 255 || GreenColor > 255 || BlueColor > 255 || x0 > 1000 || x0 < 0 || y0 > 1000 || y0 < 0) {
			//if(x > 1000){
			cout << "WRONG PARAMETR" << endl;
			arrayData[0] = -999;
			return arrayData;
		}
		arrayData[0] = DRAW_TEXT; //CMD
		arrayData[1] = x0;
		arrayData[2] = y0;
		arrayData[3] = font;
		arrayData[4] = length;
		
		arrayData[5] = RedColor;
		arrayData[6] = GreenColor;
		arrayData[7] = BlueColor;
		TEXT = text;


		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}

	
	//DRAW_IMG  13;
	else if (arrayWord[0] == "draw" && arrayWord[1] == "image") {

	int x0, y0, w, h;
	string data;
	try
	{

		x0 = stoi(arrayWord[2]);
		y0 = stoi(arrayWord[3]);
		w = stoi(arrayWord[4]);
		h = stoi(arrayWord[5]);
		data = arrayWord[6];


		if (w> 500 ||h > 500|| x0 > 1000 || x0 < 0 || y0 > 1000 || y0 < 0) {
			//if(x > 1000){
			cout << "WRONG PARAMETR" << endl;
			arrayData[0] = -999;
			return arrayData;
		}
		arrayData[0] = DRAW_IMG; //CMD
		arrayData[1] = x0;
		arrayData[2] = y0;
		arrayData[3] = w;
		arrayData[4] = h;
		NAME_IMG = data;
		//arrayData[5] = data;




		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}

	//SET ORIN  14;
	else if (arrayWord[0] == "set" && arrayWord[1] == "orin") {

	int x0, y0;

	try
	{

		x0 = stoi(arrayWord[2]);
		y0 = stoi(arrayWord[3]);

		if ( x0 > 1000 || x0 < 0 || y0 > 1000 || y0 < 0) {
	
			cout << "WRONG PARAMETR" << endl;
			arrayData[0] = -999;
			return arrayData;
		}
		arrayData[0] = SET_ORIN; //CMD
		arrayData[1] = x0;
		arrayData[2] = y0;

		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}

	//GET WIDTH  15;
	else if (arrayWord[0] == "get" && arrayWord[1] == "width") {


	try
	{

		arrayData[0] = GET_WIDTH; //CM


		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}


	//GET HEIGHT  16;
	else if (arrayWord[0] == "get" && arrayWord[1] == "height") {


	try
	{

		arrayData[0] = GET_HEIGHT; //CMD


		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}
	else if (arrayWord[0] == "get" && arrayWord[1] == "time") {


	try
	{

		arrayData[0] = GET_TIME; //CMD


		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}

	else if (arrayWord[0] == "start" && arrayWord[1] == "time") {


	try
	{

		arrayData[0] = START_TIME; //CMD


		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}
	else if (arrayWord[0] == "stop" && arrayWord[1] == "time") {


	try
	{

		arrayData[0] = STOP_TIME; //CMD


		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}
	else if (arrayWord[0] == "set" && arrayWord[1] == "presetClock" ) {


	try
	{

		arrayData[0] = SET_PRESET_DC; //CMD
		arrayData[1] = stoi(arrayWord[2]);

		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}
	
	else if (arrayWord[0] == "arduino" && arrayWord[1] == "pressBtn1") {


	try
	{

		arrayData[0] = PRESS_BTN_ONE_ARDUINO; //CMD
		//arrayData[1] = stoi(arrayWord[2]);

		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}

	else if (arrayWord[0] == "arduino" && arrayWord[1] == "pressBtn2") {


	try
	{

		arrayData[0] = PRESS_BTN_TWO_ARDUINO; //CMD
		//arrayData[1] = stoi(arrayWord[2]);

		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}
	else if (arrayWord[0] == "arduino" && arrayWord[1] == "lcd" && arrayWord[2] == "on") {


	try
	{

		arrayData[0] = LCD_ON; //CMD
		//arrayData[1] = stoi(arrayWord[2]);

		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}
	else if (arrayWord[0] == "arduino" && arrayWord[1] == "lcd" && arrayWord[2] == "off") {


	try
	{

		arrayData[0] = LCD_OFF; //CMD
		//arrayData[1] = stoi(arrayWord[2]);

		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}
	else if (arrayWord[0] == "arduino" && arrayWord[1] == "pressBtn3" ) {


	try
	{

		arrayData[0] = PRESS_BTN_THREE_ARDUINO; //CMD
		//arrayData[1] = stoi(arrayWord[2]);

		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}

	else if (arrayWord[0] == "arduino" && arrayWord[1] == "idle") {


	try
	{

		arrayData[0] = IDLE_ARDUINO; //CMD
		//arrayData[1] = stoi(arrayWord[2]);

		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}

	else if (arrayWord[0] == "arduino" && arrayWord[1] == "stop"  &&arrayWord[2] == "idle") {


	try
	{

		arrayData[0] = STOP_IDLE_ARDUINO; //CMD
		//arrayData[1] = stoi(arrayWord[2]);

		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}
	else if (arrayWord[0] == "arduino" && arrayWord[1] == "drawLCD" && arrayWord[2] == "circles") {


	try
	{

		arrayData[0] = DRAW_LCD_CIRCLES; //CMD
		//arrayData[1] = stoi(arrayWord[2]);

		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}
	else if (arrayWord[0] == "arduino" && arrayWord[1] == "drawLCD" && arrayWord[2] == "rectangles") {


	try
	{

		arrayData[0] = DRAW_LCD_RECTANGLES; //CMD
		//arrayData[1] = stoi(arrayWord[2]);

		return arrayData;
	}

	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		arrayData[0] = -999;
		return arrayData;
	}

	}

	else {

	arrayData[0] = 0;
	return arrayData;
	}

	return arrayData;
}
