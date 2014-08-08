//
//  People.h
//  OOP
//
//  Created by jared on 14-8-8.
//  Copyright (c) 2014年 jared. All rights reserved.
//

#ifndef __OOP__People__
#define __OOP__People__

#include <iostream>
namespace doogga{
    class People{
        
    private:
        int age;
        int sex;
    public:
        People(int age,int sex);
        People();
        int getAge();
        int getSex();
        void sayHello();
    };
    
}

#endif /* defined(__OOP__People__) */
