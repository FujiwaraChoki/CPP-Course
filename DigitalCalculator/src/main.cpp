#include <iostream>
#include <vector>

int main(int argc, char** argv) {
    double num1 = std::stod(argv[1]);
    char op = argv[2][0];
    double num2 = std::stod(argv[3]);
    double result;

    switch(op) {
        
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout << "Invalid operator" << std::endl;
    }

    printf("%f %c %f = ", num1, op, num2);

    std::cout << result << std::endl;

    return 0;
}
