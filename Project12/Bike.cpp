#include "Bike.h"
Bike::Bike() :Transport() {
	category = nullptr;
}
Bike::Bike(const char* _model, int _year, const char* _category) :Transport(_model, _year) {
	category = new char[strlen(_category) + 1];
	strcpy_s(category, strlen(_category) + 1, _category);
}

Bike::Bike(Bike& obj) :Transport(obj.model, obj.year) {
	category = new char[strlen(obj.category) + 1];
	strcpy_s(model, strlen(obj.category) + 1, obj.category);
}

Bike& Bike::operator=(const Bike& obj) {
	if (this == &obj) {
		return *this;
	}
	if (model != nullptr) {
		delete[]model;
	}
	if (category != nullptr) {
		delete[]category;
	}
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	year = obj.year;
	category = new char[strlen(obj.category) + 1];
	strcpy_s(category, strlen(obj.category) + 1, obj.category);
	return *this;
}

void Bike::Print() {
	cout << model << "" << year << " " << category << endl;
}
void Bike::ShowFuelConsumption() {
	cout << "0" << endl;
}
void Bike::Input() {
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
	cout << "Enter category -> ";
	cin.getline(buff2, 81);
	if (category != nullptr)
	{
		delete[]category;
	}
	category = new char[strlen(buff2) + 1];
	strcpy_s(category, strlen(buff2) + 1, buff2);
}
Bike::~Bike() {
	delete[]category;
}
