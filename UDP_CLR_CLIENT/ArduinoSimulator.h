#pragma once
 class ArduinoSimulator
{

public:

	 enum modes
	 {
		 INPUT,
		 OUTPUT
	 }; 


	 enum Voltage
	 {
		 LOW,
		 HIGH
	 };
	 void pinMode(int pin, modes Modes);


	 void digitalRead(int Elem);


	 char* digitalWrite(int idDiod,int pin, Voltage Voltage);

	
};

