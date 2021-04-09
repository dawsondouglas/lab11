#include <iostream>
#include "Calculator.h"


int main() {
    auto* calc = new Calculator;
    int output = calc->add(1,3);
    std::cout << output << std::endl;
    return 0;
}
