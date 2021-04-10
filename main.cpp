#include <iostream>
#include "Calculator.h"


int main() {
    auto* calc = new Calculator;
    int output = calc->add<int>(1,3);
    std::cout << output << std::endl;
    short numB = 1234;
    float output2 = calc->add<float>(7, numB);
    std::cout << output2 << std::endl;
    float output3 = calc->add<float>(1.5f,3.7f);
    std::cout << output3 << std::endl;
    uint8_t numA = 123;
    int output4 = calc->add<int>(numA, numB);
    std::cout << output4 << std::endl;
    return 0;
}
