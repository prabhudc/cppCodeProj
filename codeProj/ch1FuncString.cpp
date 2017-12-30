//
//  ch1FuncString.cpp
//  ch1ifcond
//
//  Created by Prabhu DC on 12/29/17.
//  Copyright © 2017 Prabhu DC. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

void funcStrRef( std::string  & fstr){
    fstr = "Infant Prabhu DC";
}



int main(int  args, char ** argv){
    std::string str = "Prabhu DC";
    std::cout << "The name is : "<< str << std::endl;
    funcStrRef(str);
    std::cout << "The name after function call : " << str << std::endl;
    
}


