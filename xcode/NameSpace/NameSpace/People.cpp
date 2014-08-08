//
//  People.cpp
//  OOP
//
//  Created by jared on 14-8-8.
//  Copyright (c) 2014年 jared. All rights reserved.
//

#include "People.h"
namespace doogga {
    People::People(int age,int sex){
        this->sex =age;
        this->age=sex;
        
        
    }
    People::People(){
        this->sex = 1;
        this->age=2;
    }
    int People:: getAge(){
        return this->age ;
    }
    int People::getSex(){
        return this->sex;
    }
    void People::sayHello(){
        printf("hello cpp\n");
    }
    
}
