//
// Created by Majid on 6/8/2016.
//

#include "Bow.h"

int Bow::useWeapon() {
    int damage=0;
    if(arrows)
        damage=1;
    if(this->getMagic())
        damage *=2;
    return damage;
}
