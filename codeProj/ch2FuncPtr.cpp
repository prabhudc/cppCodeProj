//
//  ch2FuncPtr.cpp
//  ch1ifcond
//
//  Created by Prabhu DC on 12/30/17.
//  Copyright © 2017 Prabhu DC. All rights reserved.
//

#include <stdio.h>
#include <iostream>

void func(){
    std::cout<<"Function has been called"<<std::endl;
}

int main(int args, char ** argv){
    void (*fp)() = & func;
    std::cout<<"Main function has started"<<std::endl;
    (*fp)();
    return 0;
}
