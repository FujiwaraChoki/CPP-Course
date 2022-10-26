#include <iostream>
#include <vector>

// CHF to USD, EUR, GBP, CAD, AUD, JPY, CNY

double getAmount();
std::string getCurrency();
void printResult(std::string curreny, double result);

int main() {
    float chf;
    float usd = (1/1.01);
    float eur = (1/1.08);
    float gbp = (1/1.17);
    float cad = (1/1.47);
    float aud = (1/1.61);
    float jpy = (1/148.87);
    float cny = (1/7.04);

    std::string currency = getCurrency();
    double amount = getAmount();
    if(currency == "USD") {
        printResult(currency, amount / usd);
    } else if(currency == "EUR") {
        printResult(currency, amount / eur);
    } else if(currency == "GBP") {
        printResult(currency, amount / gbp);
    } else if(currency == "CAD") {
        printResult(currency, amount / cad);
    } else if(currency == "AUD") {
        printResult(currency, amount / aud);
    } else if(currency == "JPY") {
        printResult(currency, amount / jpy);
    } else if(currency == "CNY") {
        printResult(currency, amount / cny);
    } else {
        std::cout << "Invalid currency" << std::endl;
    }

    return 0;
}

std::string getCurrency() {
    std::cout << "Enter a currency (USD, EUR, GBP, CAD, AUD, JPY, CNY): ";
    std::string currency;
    std::cin >> currency;
    if(currency != "USD" && currency != "EUR" && currency != "GBP" && currency != "CAD" && currency != "AUD" && currency != "JPY" && currency != "CNY") {
        std::cout << "Invalid currency. Try again.\n";
        return getCurrency();
    }
    return currency;
}

double getAmount() {
    std::cout << "Enter an amount in CHF: ";
    double amount;
    std::cin >> amount;
    if(amount < 0) {
        std::cout << "Amount must be positive. Try again.\n";
        return getAmount();
    }
    return amount;
}

void printResult(std::string curreny, double result) {
    std::cout << "Result: " << result << " " << curreny << std::endl;
}