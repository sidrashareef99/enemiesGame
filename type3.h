#include <iostream>
#include <string>
#include "enemy.h"
using namespace std;

#ifndef TYPE3_H
#define TYPE3_H

class Type3: public Enemy{
private:
    string weapon;
    int ammo;
public:
    Type3(string name,string weapon,int ammo);
    void setWeapon(string weapon);
    void setAmmo(int ammo);
    string getWeapon();
    int getAmmo();
    void move_position();
    void fire_weapon();
    void update_status();

};

#endif