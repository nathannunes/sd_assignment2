//
// Created by Nathan Nunes on 10/26/22.
//
/**
 * Nathan Nunes & Rajat Pandey
 */

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
    //~Animal(){};
    //Animal(){};
    virtual string getName() const = 0;
    virtual string getType() const = 0;
    virtual string getAction() const = 0;
    virtual string getFood() const = 0;
    virtual string printMessage() const = 0;
    virtual void setName(string name) = 0;
    virtual void setType(string type) = 0;
    virtual void setAction(string action) = 0;
    virtual void setFood(string food) = 0;
    virtual Animal* clone() const = 0;
    

};

#endif //A2_ANIMAL_H
