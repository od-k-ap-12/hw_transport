#pragma once
#include <iostream>
#include "Transport.h"
using namespace std;
class Bike : public Transport {
	char* category;
public:
	Bike();
	Bike(const char* _model, int _year, const char* _category);
	Bike(Bike& obj);
	Bike& operator=(const Bike& obj);
	void Print();
	void ShowFuelConsumption();
	void Input();
	~Bike();
};



