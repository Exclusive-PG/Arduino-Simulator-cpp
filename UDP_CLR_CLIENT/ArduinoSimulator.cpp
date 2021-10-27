#include "ArduinoSimulator.h"


char* ArduinoSimulator::digitalWrite(int idDiod, int pin, Voltage voltage) {
	
	if (voltage == HIGH) {
		//led

		switch (idDiod)
		{
		case 1:
			return (char*)"D:\\PROJECTS\\C# training\\UDP_CLR_CLIENT\\Img_Arduino\\RedDiodOn.png";
			break;
		case 2:
			return (char*)"D:\\PROJECTS\\C# training\\UDP_CLR_CLIENT\\Img_Arduino\\YellowDiodOn.png";
			break;
		case 3:
			return (char*)"D:\\PROJECTS\\C# training\\UDP_CLR_CLIENT\\Img_Arduino\\GreenDiodOn.png";
			break;
		}
	}
	else if (voltage == LOW) {
		switch (idDiod)
		{
		case 1:
			return (char*)"D:\\PROJECTS\\C# training\\UDP_CLR_CLIENT\\Img_Arduino\\RedDiodOff.png";
			break;
		case 2:
			return (char*)"D:\\PROJECTS\\C# training\\UDP_CLR_CLIENT\\Img_Arduino\\RedDiodOff.png";
			break;
		case 3:
			return (char*)"D:\\PROJECTS\\C# training\\UDP_CLR_CLIENT\\Img_Arduino\\RedDiodOff.png";
			break;
		}
	}
}
//RedDiod(); //1
//
//YellowDiod(); // 2
//GreenDiod(); //3