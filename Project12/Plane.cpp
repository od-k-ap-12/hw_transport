#include "Plane.h"
#include "Transport.h"
Plane::Plane() :Transport() {
	country = nullptr;
}

Plane::Plane(const char* _model, int _year, const char* _country) :Transport(_model, _year) {
	country = new char[strlen(_country) + 1];
	strcpy_s(country, strlen(_country) + 1, _country);
}

Plane::Plane(Plane& obj) :Transport(obj.model, obj.year) {
	country = new char[strlen(obj.country) + 1];
	strcpy_s(model, strlen(obj.country) + 1, obj.country);
}

Plane& Plane::operator=(const Plane& obj) {
	if (this == &obj) {
		return *this;
	}
	if (model != nullptr) {
		delete[]model;
	}
	if (country != nullptr) {
		delete[]country;
	}
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	year = obj.year;
	country = new char[strlen(obj.country) + 1];
	strcpy_s(country, strlen(obj.country) + 1, obj.country);
	return *this;
}

void Plane::Print() {
	cout << model << "" << year << " " << country << endl;
}
void Plane::ShowFuelConsumption() {
	cout << "150 кг\\час" << endl;
}
void Plane::Input() {
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
	cout << "Enter country -> ";
	cin.getline(buff2, 81);
	if (country != nullptr)
	{
		delete[]country;
	}
	country = new char[strlen(buff2) + 1];
	strcpy_s(country, strlen(buff2) + 1, buff2);
}
Plane::~Plane() {
	delete[]country;
}