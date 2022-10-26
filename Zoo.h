//
// Created by Nathan Nunes on 10/20/22.
//

#ifndef A2_ZOO_H
#define A2_ZOO_H

// This class will be singleton

class Zoo {
public:
    static Zoo* getInstance();

private:
    Zoo(){};
    ~Zoo(){};
    static Zoo* instance_;
};


#endif //A2_ZOO_H
