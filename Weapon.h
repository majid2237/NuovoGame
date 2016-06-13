//
// Created by Majid on 6/8/2016.
//

#ifndef NUOVOGAME_WEAPON_H
#define NUOVOGAME_WEAPON_H


class Weapon {

public:
    Weapon();
    Weapon(int s,bool m):strenght(s),magic(m){}

    virtual int useWeapon ();

    bool getMagic() const {
        return magic;
    }

    void setMagic(bool magic) {
        Weapon::magic = magic;
    }

    int getStrenght() const {
        return strenght;
    }

    void setStrenght(int strenght) {
        Weapon::strenght = strenght;
    }

private:
    int strenght;
    bool magic;

};


#endif //NUOVOGAME_WEAPON_H
