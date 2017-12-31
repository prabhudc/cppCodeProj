//
//  ch2Variadic.cpp
//  ch1ifcond
//
//  Created by Prabhu DC on 12/30/17.
//  Copyright © 2017 Prabhu DC. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstdarg>

int average(const int count, ...){
    va_list ap;
    int total = 0;
    int result = 0;
//    int i = 0;
    va_start(ap, count);
    for( int i = 0; i< count ; i++){
        total += va_arg(ap, int);
    }
    
    if(count > 0){
        result =  total/count;
    }else{
        result =  0;
    }
    
    va_end(ap);
    return result;
    
}


int main(int args, char ** argv){
    std::cout<<"The average of five numbers is : "<<average(5,12,31,31,44,2)<<std::endl;
    
}
