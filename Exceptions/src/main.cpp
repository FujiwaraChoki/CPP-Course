#include <iostream>
#include <vector>

int main() {
    // CPP Exceptions (try, catch)
    int age;
    std::cout << "How old are you?\n";
    std::cin >> age;
    try {
        if(age >= 18) {
            std::cout << "Permission granted. Please go ahead!\n";
        } else {
            throw(age);
        }
    } catch(int num) {
        int yearsToGo = 18 - num;
        std::cout << "Sadly, you are not old enough. Please wait " << yearsToGo << " year, until you're 18.\n";
    }

    return 0;
}
