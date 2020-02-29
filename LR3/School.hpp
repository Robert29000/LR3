//
//  School.hpp
//  LR3
//
//  Created by Роберт Артур Меликян on 29/02/2020.
//  Copyright © 2020 Роберт Артур Меликян. All rights reserved.
//

#ifndef School_hpp
#define School_hpp

#include <stdio.h>
#include <string>

class School{
    
    std::string name;
protected:
    int numberOfStudents;
public:
    School(std::string name,int count);
    virtual void print();
};

#endif /* School_hpp */
