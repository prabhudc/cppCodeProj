//
//  ch1WhileLoop.cpp
//  ch1ifcond
//
//  Created by Prabhu DC on 12/27/17.
//  Copyright © 2017 Prabhu DC. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int main(int args, char ** argv){
    int i = 100;
    std::cout<<std::endl<<"################## Evaluating while ####################"<<std::endl;
    while(i<10){
        std::cout<<i++<<std::endl;
    }
    std::cout<<std::endl<<"################## Evaluating do-while #################"<<std::endl;
    i = 100;
    do{
        std::cout<<i++<<std::endl;
    }while(i<10);
    
    
    return 0;
}
