//
// Created by Majid on 6/8/2016.
//

#ifndef NUOVOGAME_BOW_H
#define NUOVOGAME_BOW_H


#include "Weapon.h"

class Bow : public Weapon {
public:
    Bow(){
        arrows=10;
        Weapon(10, false);
    }
    Bow(int s, bool m, int a):Weapon(s,m),arrows(a){}

    virtual int useWeapon();
private:
    int arrows;

};


#endif //NUOVOGAME_BOW_H
