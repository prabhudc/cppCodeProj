//
//  ch2FuncOpOverload.cpp
//  ch1ifcond
//
//  Created by Prabhu DC on 12/30/17.
//  Copyright © 2017 Prabhu DC. All rights reserved.
//

#include <stdio.h>
#include <iostream>

class A {
    int a;
    public :
    A(const int &a) : a(a){
//        a = ain;
    }
    
    const int & value() const{
        return a;
    }
};


int operator + (const A & lhs, const A & rhs){
    return lhs.value() + rhs.value();
};

int main(int args , char ** argv){
    A a(10);
    A b(20);
    
    std::cout<<a.value()<<std::endl;
    std::cout<<b.value()<<std::endl;
    std::cout<<"Sum from with main funciton is : "<<a.value() + b.value()<<std::endl;
    std::cout<<"Sum from with op-overload funciton is : "<<a + b<<std::endl;
}
