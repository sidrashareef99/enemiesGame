#include <iostream>
#include <string>
#include "enemy.h"
using namespace std;

#ifndef TYPE2_H
#define TYPE2_H

class Type2: public Enemy{

private:

    string name;
    string weapon;
    int ammo;
public:
    Type2(string name,string weapon,int ammo);
    void setName(string name);
    void setWeapon(string weapon);
    void setAmmo(int ammo);
    string getName();
    string getWeapon();
    int getAmmo();
    void move_position();
    void fire_weapon();
    void update_status();

    Type2(string name);
};

#endif