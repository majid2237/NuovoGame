//
// Created by Majid on 6/8/2016.
//

#ifndef NUOVOGAME_SWORD_H
#define NUOVOGAME_SWORD_H

#include"Weapon.h"


class Sword : public Weapon {
public:
    Sword(int s,int m, bool v):Weapon(s,m),virilan(v){}

    virtual int useWeapon();

private:
    bool virilan;
};


#endif //NUOVOGAME_SWORD_H
