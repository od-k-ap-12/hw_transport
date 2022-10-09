#pragma once
#include <iostream>
#include "Transport.h"
using namespace std;
class Ship : public Transport {
	char* shipping;
public:
	Ship();
	Ship(const char* _model, int _year, const char* _shipping);
	Ship(Ship& obj);
	Ship& operator=(const Ship& obj);
	void Print();
	void ShowFuelConsumption();
	void Input();
	~Ship();
};


