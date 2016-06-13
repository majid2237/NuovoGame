//
// Created by Majid on 6/8/2016.
//

#ifndef NUOVOGAME_DICE_H
#define NUOVOGAME_DICE_H


class Dice {
public:
    Dice(int f=6):faces(f){}
    void init();
    int throwdice();

private:
    static bool initalizied;
    int faces;

};


#endif //NUOVOGAME_DICE_H
