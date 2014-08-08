//
//  main.cpp
//  Class
//
//  Created by jared on 14-8-8.
//  Copyright (c) 2014年 jared. All rights reserved.
//

#include <iostream>
#include "man.h"

int main(int argc, const char * argv[])
{

    // insert code here...
    
    man *M  =  new man();
    M->sayHello();
    std::cout << "Hello, World!\n";
    return 0;
}

