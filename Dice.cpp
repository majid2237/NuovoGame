//
// Created by Majid on 6/8/2016.
//

#include "Dice.h"
#include <cstdlib>
#include <time.h>

bool Dice::initalizied= false;

void Dice::init() {
    if(!initalizied)
    std::srand(time(0));
    initalizied= true;
}

int Dice::throwdice() {
    int result = std::rand()%faces+1;
    return result;
}