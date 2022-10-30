#include <iostream>
#include <vector>

class Person {
public:
    std::string firstName;
    std::string lastName;
    int age;

    std::string getFullName(std::string firstName, std::string lastName); 
};

std::string Person::getFullName(std::string firstName, std::string lastName) {
    return firstName + " " + lastName;
}

int main() {
    Person person;
    person.firstName = "Sami";
    person.lastName = "Hindi";
    person.age = 16;

    std::cout << "Your full name is " << person.getFullName(person.firstName, person.lastName) << std::endl;

    return 0;
}
