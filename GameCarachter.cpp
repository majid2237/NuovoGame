//
// Created by Majid on 6/8/2016.
//

#include "GameCarachter.h"
#include "Dice.h"

void GameCarachter::move(int x, int y) {
    PosX +=x;
    PosY +=y;
}
void GameCarachter::fight(GameCarachter &enemy) {
    int damage =1;
    if(weapon != nullptr)
        damage = weapon->useWeapon();
    Dice Dice1;
    if(Dice1.throwdice() <= 2)
        damage=0;

    int newHitPoints = enemy.getHitPoints() - damage;
    enemy.setHitPoints(newHitPoints);
}
GameCarachter::~GameCarachter() {
    delete weapon;
}

GameCarachter& GameCarachter::operator=(GameCarachter &right) {
    if(this!=right){
        PosX=right.PosX;
        PosY=right.PosY;
        HitPoints=right.HitPoints;
        if(weapon != nullptr)
            delete weapon;
        if(right.weapon != nullptr)
            weapon = new Weapon((*right.weapon));
        else
            weapon = nullptr;


    }


}