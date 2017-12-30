//
//  ch1FuncBasic.cpp
//  ch1ifcond
//
//  Created by Prabhu DC on 12/29/17.
//  Copyright © 2017 Prabhu DC. All rights reserved.
//

#include "ch1FuncBasic.hpp"
#include <iostream>

int main(int args, char ** argv){
    int a = 100;
    std::cout<< "Printing value of a as seen in the main function before function execution  - "<<a<<std::endl;
    myFuncVal(a);
    std::cout<<"Printing value of a as seen in the main function after function execution of type call-by-value - "<<a<<std::endl;
    myFuncRef(&a);
    std::cout<<"Printing value of a as seen in the main function after function execution  of type call-by-value - "<<a<<std::endl;
}

void myFuncVal(int a){
    a += 100;
}

void myFuncRef(int *val){
    *val = *val + 200;
}





