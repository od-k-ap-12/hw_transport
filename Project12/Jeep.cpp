#include "Jeep.h"
Jeep::Jeep() :Transport() {
	tuning = nullptr;
}

Jeep::Jeep(const char* _model, int _year, const char* _tuning) :Transport(_model, _year) {
	tuning = new char[strlen(_tuning) + 1];
	strcpy_s(tuning, strlen(_tuning) + 1, _tuning);
}

Jeep::Jeep(Jeep& obj) :Transport(obj.model, obj.year) {
	tuning = new char[strlen(obj.tuning) + 1];
	strcpy_s(model, strlen(obj.tuning) + 1, obj.tuning);
}

Jeep& Jeep::operator=(const Jeep& obj) {
	if (this == &obj) {
		return *this;
	}
	if (model != nullptr) {
		delete[]model;
	}
	if (tuning != nullptr) {
		delete[]tuning;
	}
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	year = obj.year;
	tuning = new char[strlen(obj.tuning) + 1];
	strcpy_s(tuning, strlen(obj.tuning) + 1, obj.tuning);
	return *this;
}

void Jeep::Print() {
	cout << model << "" << year << " " << tuning << endl;
}
void Jeep::ShowFuelConsumption() {
	cout << "15 λ\\100 κμ" << endl;
}
void Jeep::Input() {
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
	cout << "Enter tuning -> ";
	cin.getline(buff2, 81);
	if (tuning != nullptr)
	{
		delete[]tuning;
	}
	tuning = new char[strlen(buff2) + 1];
	strcpy_s(tuning, strlen(buff2) + 1, buff2);
}
Jeep::~Jeep() {
	delete[]tuning;
}
