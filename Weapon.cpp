//
// Created by Majid on 6/8/2016.
//

#include "Weapon.h"

Weapon::Weapon() {
    strenght=10;
    magic= false;
}

int Weapon::useWeapon(){
    int damage=1;
    if(magic)
        damage *=2;
    return magic;

}
