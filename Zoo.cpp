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

int Zoo::totalTigers = 0;
int Zoo::totalKangaroo=0;
int Zoo::totalLemur=0;
int Zoo::totalSerpant=0;
int Zoo::totalWolves=0;

void Zoo::incrementWolves() {
    totalWolves++;
}void Zoo::incrementSerpent() {
    totalSerpant++;
}void Zoo::incrementLemur() {
    totalLemur++;
}void Zoo::incrementKangaroo() {
    totalLemur++;
}
void Zoo::incrementTigers() {
    totalTigers++;
}

