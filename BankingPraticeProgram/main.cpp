// Practice Banking Program

#include <iostream>


void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
	double balance = 123;
	int choice = 0;

	do {
		printf("Please choose an option:\n");
		printf("\t1. Show current balance\n");
		printf("\t2. Deposit money\n");
		printf("\t3. Withdraw money\n");
		printf("\t4. Exit\n");

		std::cin >> choice;

		std::cin.clear();
		fflush(stdin);

		switch(choice) {
			case 1:
				showBalance(balance);
				break;

			case 2:
				balance += deposit();
				showBalance(balance);
				break;

			case 3:
				withdraw(balance);
				showBalance(balance);
				break;

			case 4:
				printf("Bye bye!\n");
				break;

			default:
				printf("Invalid Choice!\n");
				break;
		}
	} while(choice != 4);


	return 0;
}

void showBalance(double balance) {
	printf("\nYour current balance is CHF %f\n\n", balance);
}

double deposit() {
	double amount = 0;

	std::cout << "How much money would you like to deposit?\n";
	std::cin >> amount;

	if(amount > 0) {
		return amount;
	} else {
		std::cout << "That's not a valid amount.\n";
	}
	return 0;
}

double withdraw(double balance) {
	double amount;
	std::cout << "Enter amount to be withdrawn:\n";
	std::cin >> amount;

	if(amount > balance) {
		std::cout << "Insufficient funds!\n";
		return 0;
	} else if(amount < 0) {
		std::cout << "That's not a valid amount.\n";
	} else {
		return amount;
	}
	return 0;
}