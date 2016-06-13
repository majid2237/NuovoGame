//
// Created by Majid on 6/8/2016.
//

#ifndef NUOVOGAME_GAMECARACHTER_H
#define NUOVOGAME_GAMECARACHTER_H


#include "Weapon.h"

class GameCarachter {
private:
    int PosX;
    int PosY;
    int HitPoints;
    Weapon* weapon;

public:
    GameCarachter():PosX(0),PosY(0),HitPoints(10),weapon(nullptr){}
    GameCarachter(int x,int y, int hp,Weapon* w):PosX(x),PosY(y),HitPoints(hp),weapon(w){}
    virtual ~GameCarachter();

    GameCarachter&operator =(GameCarachter& right);

    virtual void move (int x, int y);
    virtual void fight(GameCarachter& enemy);

    int getPosX() const {
        return PosX;
    }

    void setPosX(int PosX) {
        GameCarachter::PosX = PosX;
    }

    int getPosY() const {
        return PosY;
    }

    void setPosY(int PosY) {
        GameCarachter::PosY = PosY;
    }

    int getHitPoints() const {
        return HitPoints;
    }

    void setHitPoints(int HitPoints) {
        GameCarachter::HitPoints = HitPoints;
    }

};


#endif //NUOVOGAME_GAMECARACHTER_H
