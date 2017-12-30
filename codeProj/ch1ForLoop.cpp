//
//  ch1ForLoop.cpp
//  ch1ifcond
//
//  Created by Prabhu DC on 12/27/17.
//  Copyright © 2017 Prabhu DC. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int main(int args, char** argv){
    int a[] = {1,2,3,4,5,6,7,8,9};
    std::cout<<std::endl<<"################## Standard for-loop ####################"<<std::endl;
    for(int i = 0; i< 10; i++){
        std::cout<<a[i]<<std::endl;
    }
    
    std::cout<<std::endl<<"################## Range for-loop ####################"<<std::endl;
    for(int j : a)
        std::cout<<j<<std::endl;
    
    
    char mystr[] = "Infant Prabhu DC";
    
    std::cout<<std::endl<<"################## Standard for-loop(string) ####################"<<std::endl;
    for(char* ptr = mystr; *ptr; ptr++){
        std::cout<<*ptr;
    }
    std::cout<<std::endl;
    std::cout<<std::endl<<"################## Range for-loop(string) ####################"<<std::endl;
    for( char mychar : mystr){
        std::cout<<mychar;
    }
    std::cout<<std::endl;
    
    return 0;
}
