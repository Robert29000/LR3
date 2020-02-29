//
//  SpecialSchool.hpp
//  LR3
//
//  Created by Роберт Артур Меликян on 29/02/2020.
//  Copyright © 2020 Роберт Артур Меликян. All rights reserved.
//

#ifndef SpecialSchool_hpp
#define SpecialSchool_hpp

#include <stdio.h>
#include "School.hpp"


class SpecialSchool:public School{
    std::string specialization;
public:
    SpecialSchool(std::string name,int count,std::string specialization);
    void print();
};

#endif /* SpecialSchool_hpp */
