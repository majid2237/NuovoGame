//
// Created by Majid on 6/8/2016.
//

#include "Sword.h"

int Sword::useWeapon(){
    int damage = 1;
    if(this->getMagic())
        damage *=2;
    if(virilan)
        damage *=2;
    return damage;

}
