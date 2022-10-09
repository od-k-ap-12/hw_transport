#include <iostream>
#include "Transport.h"
#include "Plane.h"
#include "Jeep.h"
#include "Truck.h"
#include "Ship.h"
#include "Bike.h"
using namespace std;

int main() {
	Transport* transport = nullptr;
	cout << "Choose a transport:\n1. Truck\n2. Ship\n3. Jeep\n4. Plane\n5. Bike";
	int choose;
	cin >> choose;
	cin.ignore();
	switch (choose) {
	case 1:
		transport = new Truck();
		break;
	case 2:
		transport = new Ship();
		break;
	case 3:
		transport = new Jeep();
		break;
	case 4:
		transport = new Plane();
		break;
	case 5:
		transport = new Bike();
		break;
	default:
		cout << "Error";
		break;
	}
	transport->Input();
	transport->Print();
	delete transport;
}