//
// Created by Nathan Nunes on 10/26/22.
//

#ifndef A2_ANIMAL_H
#define A2_ANIMAL_H

#include <iostream>

using namespace std;

class Animal{
public:
    virtual ~Animal(){};
    virtual string getName() const = 0;
    virtual string getType() const = 0;
    virtual string getAction() const = 0;
    virtual string getFood() const =0;

};

#endif //A2_ANIMAL_H
