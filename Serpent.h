//
// Created by Nathan Nunes on 10/26/22.
//
/**
 * Nathan Nunes & Rajat Pandey
 */

#ifndef A2_SERPENT_H
#define A2_SERPENT_H
#include "Animal.h"

class Serpent : public Animal{
    public:
        string getName() const{ return this->name; }
        string getType() const{ return this->type; }
        string getAction() const{ return this->action; }
        string getFood() const{ return this->food; }
        void setName(string name){ this->name = name; }
        void setType(string type){ this->type = type; }
        void setAction(string action){ this->action = action; }
        void setFood(string food){ this->food = food; }
        string printMessage() const{
            string a = "I am a ";
            a.append(this->type);
            a.append(" , my name is ");
            a.append(this->name);
            a.append(", I ");
            a.append(this->action);
            a.append(", and I eat ");
            a.append(this->food);
            a.append("\n");
            return a;
        }
        Serpent* clone() const{
            Serpent* cloned = new Serpent(*this);
            return cloned;
        }
};


#endif //A2_SERPENT_H
