#include <iostream>
#include "enemy.h"
#include "type3.h"

using namespace std;

static string enemyWeapon;
static int enemyAmmo;


Type3::Type3(string name,string weapon,int ammo) {
    setName(name);
    setWeapon(weapon);
    setAmmo(ammo);

    int enemyStatus;
    int r;
    r = rand() % 2;

    if (r == 0){
        enemyStatus = 7;
    }
    else {
        enemyStatus=8;
    }
    // set x position to random int from 0 to 800
    setX_position(rand() % 801);

    // set y position to 500
    setY_position(500);
}


void Type3::setWeapon(string weapon) {
    enemyWeapon = weapon;
}
string Type3::getWeapon() {
    return enemyWeapon;
}
void Type3::setAmmo(int ammo) {
    enemyAmmo = ammo;
}
int Type3::getAmmo() {
    return enemyAmmo;
}

void Type3::move_position() {

    //get current x position
    int positionX = getX_position();
    if(getStatus() != 0){
        //get direction  0 = left 1 = right
        int direction = rand() % 2;
        //can move in x direction by 6 spaces
        if(positionX >= 794){
            direction = 0;
        }
        if(positionX <= 5){
            direction = 1;
        }

        if(direction == 1){
            setX_position(positionX + 6);
            cout << "The " << getName()  << " moved 6 spaces to the right (" << getX_position() << "," << getY_position() <<")  " ;
        }
        else{

            setX_position(positionX - 6);
            cout << "The " << getName()  << " moved 6 spaces to the left(" << getX_position() << "," << getY_position() <<")  " ;

        }
    }

    else
        positionX =0;
}
void Type3::fire_weapon(){
    int ammo = getAmmo();
    if (ammo==0){
        cout<<"No Ammo!";
    }
    else{
        int remainingAmmo = ammo-1;
        setAmmo(remainingAmmo);
        cout<<getName()<<" fire weapon: "<<getWeapon()<<"("<<remainingAmmo<<" left)";
    }
}
void Type3::update_status(){
    int stat = getStatus();
    if (stat==0){
        cout<<getName()<<" DEAD!";
    }
    else if (stat==1){
        int newStatus = stat-1;
        setStatus(newStatus);
        cout<<getName()<<" update status: ARGHH"<<" status points: "<<newStatus;
    }
    else{
        int newStatus = stat-1;
        setStatus(newStatus);
        cout<<getName()<<" update status: HIT!"<<" status points: "<<newStatus;
    }
}