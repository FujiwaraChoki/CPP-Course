#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Vehicle {
public:
	string brand = "Ford";
	void honk() {
		cout << "Tuut, tuut!\n";
	}
};

class Car: public Vehicle {
public:
	string model = "Mustang";
};

int main(int argc, const char *argv[]) {
	Car car;
	car.honk();
	cout << "Brand: " << car.brand << endl;
	cout << "Model: " << car.model << endl;
	cout << "End" << endl;

	return 0;
}