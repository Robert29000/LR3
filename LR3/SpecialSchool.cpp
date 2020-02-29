//
//  SpecialSchool.cpp
//  LR3
//
//  Created by Роберт Артур Меликян on 29/02/2020.
//  Copyright © 2020 Роберт Артур Меликян. All rights reserved.
//

#include "SpecialSchool.hpp"
#include <iostream>

SpecialSchool::SpecialSchool(std::string name,int count,std::string specialization):School(name,count){
    this->specialization = specialization;
}

void SpecialSchool::print(){
    School::print();
    std::cout << " " << specialization;
}
