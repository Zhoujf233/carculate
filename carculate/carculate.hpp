//
//  carculate.hpp
//  carculate
//
//  Created by fengsh on 2019/8/8.
//  Copyright © 2019 fengsh. All rights reserved.
//

#ifndef carculate_hpp
#define carculate_hpp

#include <stdio.h>

class Carculate
{
public:
    double add(double x,double y);
    double subtract(double x,double y);
    double multiply(double x,double y);
    double divide(double x,double y);
    void input1();
    void input2();
    double display(double a,char z,double b);
    double a;
    double b;
    char z;
    double c;
    double d;
    int n;
};


#endif /* carculate_hpp */
