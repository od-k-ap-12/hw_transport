#include "Truck.h"

Truck::Truck() :Transport() {
	transportation = nullptr;
}

Truck::Truck(const char* _model, int _year, const char* _transportation) :Transport(_model, _year) {
	transportation = new char[strlen(_transportation) + 1];
	strcpy_s(transportation, strlen(_transportation) + 1, _transportation);
}

Truck::Truck(Truck& obj) :Transport(obj.model, obj.year) {
	transportation = new char[strlen(obj.transportation) + 1];
	strcpy_s(model, strlen(obj.transportation) + 1, obj.transportation);
}

Truck& Truck::operator=(const Truck& obj) {
	if (this == &obj) {
		return *this;
	}
	if (model != nullptr) {
		delete[]model;
	}
	if (transportation != nullptr) {
		delete[]transportation;
	}
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	year = obj.year;
	transportation = new char[strlen(obj.transportation) + 1];
	strcpy_s(transportation, strlen(obj.transportation) + 1, obj.transportation);
	return *this;
}

void Truck::Print() {
	cout << model << " " << year << " " << transportation << endl;
}

void Truck::ShowFuelConsumption() {
	cout << "33 λ\\100 κμ" << endl;
}

void Truck::Input() {
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
	char buff2[81];
	cout << "Enter transportation -> ";
	cin.getline(buff2, 81);
	if (transportation != nullptr)
	{
		delete[]transportation;
	}
	transportation = new char[strlen(buff2) + 1];
	strcpy_s(transportation, strlen(buff2) + 1, buff2);
}
Truck::~Truck() {
	delete[]transportation;
}
