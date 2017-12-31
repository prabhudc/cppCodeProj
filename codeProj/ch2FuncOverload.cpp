//
//  ch2FuncOverload.cpp
//  ch1ifcond
//
//  Created by Prabhu DC on 12/30/17.
//  Copyright © 2017 Prabhu DC. All rights reserved.
//

#include <stdio.h>
#include <iostream>

void volume(double r){
    std::cout<<"Volume of the cube is : "<<r*r*r<<std::endl;
    return;
}

void volume (double r, double h){
    double _pi = 3.14;
    std::cout<<"Volume of the cylinder is : "<<(float)_pi*r*r*h<<std::endl;
}

void volume(double a,double b, double c){
        std::cout<<"Volume of the cuboid is : "<<a*b*c<<std::endl;
}

int main(int args, char ** argv){
    
    double r, h, a, b, c;
    
    std::cout<<"Main program begins"<<std::endl;
    //Cube
    r = 10;
    volume(r);
    
    //Cylinder
    r = 10;
    h = 12;
    volume(r,h);
    
    //cuboid
    a = 10;
    b = 20;
    c = 30;
    volume( a, b,  c);
    return 0;
}

