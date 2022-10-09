#pragma once
#include <iostream>
using namespace std;
class Transport
{
protected:
	char* model;
	int year;
public:
	Transport();
	Transport(const char* _model, int _year);
	Transport(Transport& obj);
	Transport& operator=(const Transport& obj);
	virtual void Print();
	virtual void ShowFuelConsumption();
	virtual void Input();
	virtual ~Transport();
};


