#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    
    try {
        std::cout << "5 + 3 = " << calc.Add(5, 3) << std::endl;
        std::cout << "5 - 3 = " << calc.Sub(5, 3) << std::endl;
        std::cout << "5 * 3 = " << calc.Mul(5, 3) << std::endl;
        std::cout << "6 / 2 = " << calc.Div(6, 2) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}
