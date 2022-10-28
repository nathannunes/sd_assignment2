//
// Created by Nathan Nunes on 10/26/22.
//

#ifndef A2_KANGAROO_H
#define A2_KANGAROO_H


#include "Animal.h"

class Kangaroo : public Animal{
    public:
        string getName ()const{ return this->name; }
        string getType() const{ return this->type; }
        string getAction() const{ return this->action; }
        string getFood() const{ return this->food; }
        void setName(string name){ this->name = name; }
        void setType(string type){ this->type = type; }
        void setAction(string action){ this->action = action; }
        void setFood(string food){ this->food = food; }
        void printMessage() const{
            cout<<"I am a "<<this->type<<" , my name is "<<this->name<<", I "<<this->action<<", and I eat "<<this->food<<endl;            
        }
        Kangaroo* clone() const{
            Kangaroo* cloned = new Kangaroo(*this);
            return cloned;
        }
};


#endif //A2_KANGAROO_H
