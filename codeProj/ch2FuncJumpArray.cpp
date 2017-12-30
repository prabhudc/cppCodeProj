//
//  ch2FuncJumpArray.cpp
//  ch1ifcond
// Jump arrays that simulate the behavior of menus
//  Created by Prabhu DC on 12/30/17.
//  Copyright © 2017 Prabhu DC. All rights reserved.
//

#include <stdio.h>
#include <iostream>

 char * prompt();
int jump( char *);

void fn1(){std::cout<<"fn1 has been called"<<std::endl;}
void fn2(){std::cout<<"fn2 has been called"<<std::endl;}
void fn3(){std::cout<<"fn3 has been called"<<std::endl;}
void fn4(){std::cout<<"fn4 has been called"<<std::endl;}
void fn5(){std::cout<<"fn5 has been called"<<std::endl;}
void fn6(){std::cout<<"fn6 has been called"<<std::endl;}

void (*funcs[])(void)={fn1,fn2,fn3,fn4,fn5,fn6,nullptr};



int main(int args, char **  argv){
    std::cout<<"Main program begins"<<std::endl;
    while(jump(prompt())){
    //Loop continues
    }
    std::cout<<"Main program has ended"<<std::endl;
    return 0;
}

 char * prompt(){
    static char  input[100] = "";
     std::cout<<std::endl<<"Enter the menu option of interest"<<std::endl<<std::endl;
    std::cout<<"1. for fn1()"<<std::endl;
    std::cout<<"2. for fn2()"<<std::endl;
    std::cout<<"3. for fn3()"<<std::endl;
    std::cout<<"4. for fn4()"<<std::endl;
    std::cout<<"5. for fn5()"<<std::endl;
    std::cout<<"6. for fn6()"<<std::endl;
    std::cout<<"Q. to quit"<<std::endl;
    std::cin>>input;
    std::cout<<"The entered option by the user is "<<input<<std::endl;
    return input;
}

int jump(char * str){
    int inputNum;

    if(str[0] == 'q' || str[0] == 'Q') {
        std::cout<<"Quitting gracefully!"<<std::endl;
        return 0;
    }else if(str[0] == '1' || str[0] == '2' || str[0] == '3' || str[0] == '4' || str[0] == '5' || str[0] == '6'){
        inputNum = (int)str[0] - 48;
        (*funcs[inputNum-1])();
        return 1;
    }else{
        std::cout<<"Invalid input : "<<str[0]<<" Try again " <<std::endl;
        return 1;
    }
    
    
    
}

