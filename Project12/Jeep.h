#pragma once
#include <iostream>
#include "Transport.h"
using namespace std;
class Jeep : public Transport {
	char* tuning;
public:
	Jeep();
	Jeep(const char* _model, int _year, const char* _tuning);
	Jeep(Jeep& obj);
	Jeep& operator=(const Jeep& obj);
	void Print();
	void ShowFuelConsumption();
	void Input();
	~Jeep();
};



