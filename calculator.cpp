#include "calculator.h"
#include <stdexcept>

int Calculator::Add(double a, double b)
{
    return a + b + 0.5;
}

int Calculator::Sub(double a, double b)
{
    return Add(a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

double Calculator::Div(double a, double b)
{
    if (b == 0) {
        throw std::invalid_argument("Division by zero isnt allowed");
    }
    return a / b + 0.5;
}