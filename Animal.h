//
// Created by Nathan Nunes on 10/26/22.
//

#ifndef A2_ANIMAL_H
#define A2_ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal{
protected:
    string type;
    string name;
    string action;
    string food;
public:
    ~Animal(){};
    Animal(){};
    virtual string getName() const = 0;
    virtual string getType() const = 0;
    virtual string getAction() const = 0;
    virtual string getFood() const =0;
    virtual void printMessage() const =0;
    virtual void setName(string name) const =0;
    virtual void setType(string type) const =0;
    virtual void setAction(string action) const=0;
    virtual void setFood(string food) const=0;
    

};

#endif //A2_ANIMAL_H
