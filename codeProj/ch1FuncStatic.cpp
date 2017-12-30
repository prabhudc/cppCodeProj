//
//  ch1FuncStatic.cpp
//  ch1ifcond
//
//  Created by Prabhu DC on 12/29/17.
//  Copyright © 2017 Prabhu DC. All rights reserved.
//

#include <stdio.h>
#include <iostream>
void func(){
    static int a = 100;
    static int i = 1;
    std::cout<<"This is the number "<<i++<<" invocation of a and its value is "<<a<<std::endl;
    a+=100;
}


int main(int args, char ** argv){
    func();
    func();
    func();
    
}
