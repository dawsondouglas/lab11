//
// Created by Keith Lancaster on 4/6/21.
//

#ifndef TEMPLATES_CALCULATOR_H
#define TEMPLATES_CALCULATOR_H


#include <cstdint>

class Calculator {

public:
    int add(int a, int b);
    float add(float a, float b);
    int add(uint8_t, short b);
    float add(int a, short b);
};


#endif //TEMPLATES_CALCULATOR_H
