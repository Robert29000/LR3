//
//  main.cpp
//  LR3
//
//  Created by Роберт Артур Меликян on 29/02/2020.
//  Copyright © 2020 Роберт Артур Меликян. All rights reserved.
//

#include <iostream>
#include "School.hpp"
#include "SpecialSchool.hpp"

int main(int argc, const char * argv[]) {
    School* school;
    School* specialSchool;
    std::string name,spec;
    int count;
    std::cin >> name >> count;
    School ch(name,count);
    std::cin >> name >> count >> spec;
    SpecialSchool sch(name,count,spec);
    school = &ch;
    school->print();
    std::cout << std::endl;
    specialSchool = &sch;
    specialSchool->print(); //Без virtual print был бы взят из School т.к. тип объекта тогда бы                 определялся типом ссылки
    return 0;
}
