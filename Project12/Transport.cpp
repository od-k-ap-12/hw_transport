#include "Transport.h"
#include <iostream>
using namespace std;
Transport::Transport() {
	model = nullptr;
	year = 0;
}
Transport::Transport(const char* _model, int _year) {
	model = new char[strlen(_model) + 1];
	strcpy_s(model, strlen(_model) + 1, _model);
	year = _year;
}

Transport::Transport(Transport& obj)
{
	char buff[81];
	cout << "Enter model -> ";
	cin.getline(buff, 81);
	if (model != nullptr)
	{
		delete[]model;
	}
	model = new char[strlen(buff) + 1];
	strcpy_s(model, strlen(buff) + 1, buff);

	cout << "Enter year -> ";
	cin >> year;
	cin.ignore();
}

Transport& Transport::operator=(const Transport& obj)
{
	if (this == &obj) {
		return *this;
	}
	if (model != nullptr) {
		delete[]model;
	}
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	year = obj.year;
	return *this;
}

void Transport::Print()
{
	cout << model << " " << year << endl;
}

void Transport::ShowFuelConsumption()
{
	cout << "Undefined";
}

void Transport::Input()
{
	char buff[81];
	cout << "Enter model -> ";
	cin.getline(buff, 81);
	if (model != nullptr)
	{
		delete[]model;
	}
	model = new char[strlen(buff) + 1];
	strcpy_s(model, strlen(buff) + 1, buff);

	cout << "Enter year -> ";
	cin >> year;
	cin.ignore();
}

Transport::~Transport()
{
	delete[]model;
}
