//
//  ch2FuncRecursive.cpp
//  ch1ifcond
//
//  Created by Prabhu DC on 12/30/17.
//  Copyright © 2017 Prabhu DC. All rights reserved.
//

#include <stdio.h>
#include <iostream>

long int factorial (unsigned int n){
    if (n == 1){
        return n;
    }
    
    return factorial(n - 1) * n;
}


int main(int args, char ** argv){
    std::cout<<"Out of the factorial calculation is : "<<factorial(7)<<std::endl;
    
}
