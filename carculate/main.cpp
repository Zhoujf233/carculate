//
//  main.cpp
//  carculate
//
//  Created by fengsh on 2019/8/8.
//  Copyright © 2019 fengsh. All rights reserved.
//

#include <iostream>
using namespace std;
#include "carculate.hpp"

int main(int argc, const char * argv[])
{
    Carculate carl;
    carl.input1();
    carl.c = carl.display(carl.a,carl.z,carl.b);
    for(carl.n=1;carl.n<=10;carl.n++)
    {
        carl.input2();
        carl.display(carl.c,carl.z,carl.d);
    }
    return 0;
}
