#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {
public:
	void animalSound() {
		cout << "The animal is making a sound!\n";
	}
};

class Cow: public Animal {
public:
	void animalSound() {
		cout << "The cow is saying: Moooooo!\n";
	}
};

class Dog: public Animal {
public:
	void animalSound() {
		cout << "The dog is saying: Wuff wuff!\n";
	}
};

int main(int argc, const char *argv[]) {
	Animal animal;
	Cow cow;
	Dog dog;
	
	animal.animalSound();
	cow.animalSound();
	dog.animalSound();

	cout << "Done" << endl;

	return 0;
}