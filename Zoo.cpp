//
// Created by Nathan Nunes on 10/20/22.
//

// This will be singleton

#include "Zoo.h"

using namespace std;

Zoo* Zoo::instance_ =NULL;

Zoo *Zoo::getInstance() {
    if(instance_ == NULL){
        instance_ = new Zoo();
    }
    return instance_;
}