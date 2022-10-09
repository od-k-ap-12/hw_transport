#pragma once
#include <iostream>
#include "transport.h"
using namespace std;
class Truck : public Transport {
	char* transportation;
public:

	Truck();
	Truck(const char* _model, int _year, const char* _transportation);
	Truck(Truck& obj);
	Truck& operator=(const Truck& obj);
	void Print();
	void ShowFuelConsumption();
	void Input();
	~Truck();
};



