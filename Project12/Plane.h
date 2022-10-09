#pragma once
#include <iostream>
#include "Transport.h"
using namespace std;
class Plane :public Transport {
	char* country;
public:
	Plane();
	Plane(const char* _model, int _year, const char* _country);
	Plane(Plane& obj);
	Plane& operator=(const Plane& obj);
	void Print();
	void ShowFuelConsumption();
	void Input();
	~Plane();
};
