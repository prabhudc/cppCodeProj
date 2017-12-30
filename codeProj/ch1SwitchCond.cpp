//
//  ch1SwitchCond.cpp
//  ch1ifcond
//
//  Created by Prabhu DC on 12/27/17.
//  Copyright © 2017 Prabhu DC. All rights reserved.
//

#include <iostream>

int main( int args, char ** argv){
    int z = 100;
    
    switch (z) {
        case 1:
            std::cout<<"input is 1"<<std::endl;
            break;
        case 2:
            std::cout<<"input is 2"<<std::endl;
            break;
        case 3:
            std::cout<<"input is 3"<<std::endl;
            break;
        default:
            std::cout<<"input is an unknown value"<<std::endl;
            break;
    }
}
