//
//  carculate.cpp
//  carculate
//
//  Created by fengsh on 2019/8/8.
//  Copyright © 2019 fengsh. All rights reserved.
//

#include "carculate.hpp"
#include<iostream>
using namespace std;

double Carculate::add(double x,double y)
{
    return (x+y);
}

double Carculate::subtract(double x,double y)
{
    return (x-y);
}

double Carculate::multiply(double x,double y)
{
    return (x*y);
}

double Carculate::divide(double x,double y)
{
    return (x/y);
}

void Carculate::input1()
{
    cout <<"please input:";
    cin >>a>>z>>b;
}

void Carculate::input2()
{
    cin >>z>>d;
}

double Carculate::display(double a,char z,double b)
{
    if(z == '+')
    {
        c = add(a,b);
        cout<<"="<<c<<endl;}
    else if(z == '-')
    {
        c = subtract(a,b);
        cout<<"="<<c<<endl;}
    else if(z == '*')
    {
        c = multiply(a,b);
        cout<<"="<<c<<endl;}
    else
    {
        c = divide(a,b);
        cout<<"="<<c<<endl;}
    return c;
}
