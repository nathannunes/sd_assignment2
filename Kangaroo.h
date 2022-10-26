//
// Created by Nathan Nunes on 10/26/22.
//

#ifndef A2_KANGAROO_H
#define A2_KANGAROO_H


#include "Animal.h"

class Kangaroo : Animal{
    public:
        string getName(){ return this->name; }
        string getType(){ return this->type; }
        string getAction(){ return this->action; }
        string getFood(){ return this->food; }
        void setName(string name){ this->name = name; }
        void setType(string type){ this->type = type; }
        void setAction(string action){ this->action = action; }
        void setFood(string food){ this->food = food; }
        void printMessage() {
            cout<<"I am a "<<this->type<<" , my name is "<<this->name<<", I "<<this->action<<", and I eat "<<this->food<<endl;            
        }
};


#endif //A2_KANGAROO_H
