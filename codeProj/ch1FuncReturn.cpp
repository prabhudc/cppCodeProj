//
//  ch1FuncReturn.cpp
//  ch1ifcond
//
//  Created by Prabhu DC on 12/29/17.
//  Copyright © 2017 Prabhu DC. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

 const std::string & myFunc(){
    static std::string str = "Prabhu DC";
    return str;
}


int main(int args, char ** argv){
    
    std::cout<<"My name is "<<myFunc()<<std::endl;
    
    return 0;
}
