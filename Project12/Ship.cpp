#include "Ship.h"
Ship::Ship() :Transport() {
	shipping = nullptr;
}

Ship::Ship(const char* _model, int _year, const char* _shipping) :Transport(_model, _year) {
	shipping = new char[strlen(_shipping) + 1];
	strcpy_s(shipping, strlen(_shipping) + 1, _shipping);
}

Ship::Ship(Ship& obj) :Transport(obj.model, obj.year) {
	shipping = new char[strlen(obj.shipping) + 1];
	strcpy_s(model, strlen(obj.shipping) + 1, obj.shipping);
}

Ship& Ship::operator=(const Ship& obj) {
	if (this == &obj) {
		return *this;
	}
	if (model != nullptr) {
		delete[]model;
	}
	if (shipping != nullptr) {
		delete[]shipping;
	}
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	year = obj.year;
	shipping = new char[strlen(obj.shipping) + 1];
	strcpy_s(shipping, strlen(obj.shipping) + 1, obj.shipping);
	return *this;
}

void Ship::Print() {
	cout << model << "" << year << " " << shipping << endl;
}
void Ship::ShowFuelConsumption() {
	cout << "40 тонн\\сутки" << endl;
}
void Ship::Input() {
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
	cout << "Enter shipping -> ";
	cin.getline(buff2, 81);
	if (shipping != nullptr)
	{
		delete[]shipping;
	}
	shipping = new char[strlen(buff2) + 1];
	strcpy_s(shipping, strlen(buff2) + 1, buff2);
}
Ship::~Ship() {
	delete[]shipping;
}
