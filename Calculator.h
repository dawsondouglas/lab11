//
// Created by Keith Lancaster on 4/6/21.
//

#ifndef TEMPLATES_CALCULATOR_H
#define TEMPLATES_CALCULATOR_H


#include <cstdint>


class Calculator {

public:
    template <typename T, typename U, typename V> T add(U a, V b){
        return a + b;
    }  
};


#endif //TEMPLATES_CALCULATOR_H
