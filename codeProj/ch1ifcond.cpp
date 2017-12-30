//
//  ch1ifcond.cpp
//  ch1ifcond
//
//  Created by Prabhu DC on 12/27/17.
//  Copyright © 2017 Prabhu DC. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int main(int  args, char** argv){
    
    int a = 90;
    int b = 40;
    
    int c = 0;
    
    if(a<b){
        std::cout<<"b is larger than a"<<std::endl;
    } else if(a > b){
        std::cout<<"a is larger then b"<<std::endl;
    }else {
        std::cout<<"They ought to be equal"<<std::endl;
    }
    
    std::cout<<"Evaluating ternary operator"<<std::endl;
    
    c = ( a > b ? a : b);
    
    std::cout<<"The greater value is "<<c<<std::endl;
    
    return 0;
}
