#include <iostream>
#include <string>
#include "enemy.h"
using namespace std;

#ifndef TYPE1_H
#define TYPE1_H

class Type1: public Enemy{
private:

    string name;
    string weapon;
    int ammo{};
public:
    Type1(string name,string weapon,int ammo);
    void setName(string name);
    void setWeapon(string weapon);
    void setAmmo(int ammo);
    string getName();
    string getWeapon();
    int getAmmo();
    void move_position();
    void fire_weapon();
    void update_status();

    Type1(string name);
};

#endif
