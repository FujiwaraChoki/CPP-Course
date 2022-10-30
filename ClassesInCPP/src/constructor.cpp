#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Person class
class Person {
public:
	// Class Variables
	string firstName;
	string lastName;
	int age;
	// Constructor
	Person(string firstName, string lastName) {
		cout << "A Person was created\n";
		this->firstName = firstName;
		this->lastName = lastName;
	}

	int getAge() {
		return this->age;
	}

	void setAge(int newAge) {
		this->age = newAge;
	}
};

int main() {

	Person person = Person("Sami", "Hindi");
	person.setAge(16);
	cout << "First Name: " << person.firstName << endl;
	cout << "Age: " << person.getAge() << endl;

	return 0;
}