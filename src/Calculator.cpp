#include "Calculator.h"
#include <stdexcept> 
double Calculator::calculate(double num1, double num2, Operation op) { 
    switch (op) { 
        case Operation::ADD:
            return num1 + num2;
            break;
        case Operation::SUBTRACT:
            return num1 - num2;
            break;
        case Operation::MULTIPLY:
            return num1 * num2;
            break;
        case Operation::DIVIDE:
            if (num2 != 0) {
                return num1 / num2;
            } else { 
                throw std::invalid_argument("The divisor cannot be 0"); 
            }
            break;
        default:
            throw std::invalid_argument("Invalid operator"); 
    }
}