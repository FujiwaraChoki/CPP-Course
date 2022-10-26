#include <iostream>
#include <vector>
#include <sstream>

// Global Variable Declaration
bool isLoggedIn = false;

// Method declarations
void printMenu();
void printUsers(std::vector<std::string> users);
std::string login(std::vector<std::string> users);
std::vector<std::string> signup(std::vector<std::string> users);
std::vector<std::string> split (const std::string &s, char delim);

int main() {
    int choice;
    std::vector<std::string> users;
    std::string loggedInAs;

    do {
        if(isLoggedIn) {
            std::cout << "You're currently logged in as the following User:\n";
            std::cout << "Username = " << split(loggedInAs, ':')[0] << "\n";
            std::cout << "Password = " << split(loggedInAs, ':')[1] << "\n";
        }
        printMenu();
        std::cin >> choice;

        switch(choice) {
            case 1:
                printUsers(users);
                break;
            case 2:
                loggedInAs = login(users);
                break;
            case 3:
                users = signup(users);
                break;
            case 4:
                break;
            default:
                std::cout << "Please choose a valid option!";
        }
    } while(choice != 4);

    return 0;
}

void printMenu() {
    std::cout << "\n**** User Management System ****\n";
    std::cout << "Please choose an option:\n";
    std::cout << "1. Show all users\n";
    std::cout << "2. Login\n";
    std::cout << "3. Sign up\n";
    std::cout << "4. Exit\n\n";
}

void printUsers(std::vector<std::string> users) {
    for(std::string user : users) {
        std::string username = split(user, ':')[0];
        std::string password = split(user, ':')[1];
        std::cout << "Username = " << username << "\n";
        std::cout << "Password = " << password << "\n\n";
    }
}

std::string login(std::vector<std::string> users) {
    std::string usernameInput;
    std::string passwordInput;
    std::vector<std::string> usernames;
    std::vector<std::string> passwords;

    std::cout << "Username > ";
    std::cin >> usernameInput;

    std::cout << "Password > ";
    std::cin >> passwordInput;

    for(std::string user : users) {
        std::string username = split(user, ':')[0];
        std::string password = split(user, ':')[1];
        if(username == usernameInput && password == passwordInput) {
            isLoggedIn = true;
            return user;
        }
    }
    std::cout << "Credentials are invalid, or may not even exist.\n\n";
    return "";
}

std::vector<std::string> signup(std::vector<std::string> users) {
    std::vector<std::string> newUsers = users;
    std::string username;
    std::string password;
    std::string user;

    // Prompt User to input their new account creds
    std::cout << "Enter your new Username: ";
    std::cin >> username;

    std::cout << "Enter your new Password: ";
    std::cin >> password;

    user = username + ":" + password;

    newUsers.push_back(user);

    return newUsers;
}

std::vector<std::string> split (const std::string &s, char delim) {
    std::vector<std::string> result;
    std::stringstream ss (s);
    std::string item;

    while (std::getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}