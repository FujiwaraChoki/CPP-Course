#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
public:
	string firstName;
	string lastName;
	int age;
private:
	double salary;
};

int main(int argc, const char *argv[]) {
	// When compiling, this program will get an error,
	// since salary was declared private but we are trying to set and get it.
	Employee employee;
	employee.firstName = "Sami";
	employee.lastName = "Hindi";
	employee.age = 16;
	employee.salary = 4000;

	cout << employee.firstName << endl;
	cout << employee.lastName << endl;
	cout << employee.age << endl;
	cout << employee.salary << endl;	

	return 0;
}