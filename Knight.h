//
// Created by Majid on 6/8/2016.
//


#include "GameCarachter.h"
#include <string>

#ifndef NUOVOGAME_KNIGHT_H
#define NUOVOGAME_KNIGHT_H


class Knight : public GameCarachter {
private:
    std::string name;
    int dexterity;
public:
    Knight(std::string n,int x,int y, int hp, Weapon* w,int d): GameCarachter(x,y,hp,w),name(n),dexterity(d){}

    virtual void move(int x,int y);
    virtual void fight(GameCarachter& enemy);
};


#endif //NUOVOGAME_KNIGHT_H
