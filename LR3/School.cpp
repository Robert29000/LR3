//
//  School.cpp
//  LR3
//
//  Created by Роберт Артур Меликян on 29/02/2020.
//  Copyright © 2020 Роберт Артур Меликян. All rights reserved.
//

#include "School.hpp"
#include <iostream>

School::School(std::string name,int count){
    this->name = name;
    numberOfStudents = count;
}

void School::print(){
    std::cout << name << " " << numberOfStudents;
}
