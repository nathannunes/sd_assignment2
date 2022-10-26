//
// Created by Nathan Nunes on 10/20/22.
//



#include "Zoo.h"
#include <iostream>

using namespace std;

// get the instance
Zoo* Zoo::instance_ = NULL;
Zoo* Zoo::getInstance() {
    if (instance_ == NULL) {
        instance_ = new Zoo();
    }
    return(instance_);
}