#include <iostream>
#include "enemy.h"
#include "type2.h"

using namespace std;


static string enemyWeapon;
static int enemyAmmo;


Type2::Type2(string name,string weapon,int ammo) {
    setName(name);
    setWeapon(weapon);
    setAmmo(ammo);

    int enemyStatus;
    int r;
    r = rand() % 2;

    if (r == 0){
        enemyStatus = 4;
    }
    else {
        enemyStatus=5;
    }

    setStatus(enemyStatus);

    if (name=="Jet"||name=="Helicopter"){
        setY_position(100);
    }
    else if (name =="Drone"){
        setY_position(300);
    }

    // set x position to random int from 0 to 800
    setX_position(rand() % 801);

}

void Type2::setWeapon(string weapon) {
    enemyWeapon = weapon;
}
string Type2::getWeapon() {
    return enemyWeapon;
}
void Type2::setAmmo(int ammo) {
    enemyAmmo = ammo;
}
int Type2::getAmmo() {
    return enemyAmmo;
}

void Type2::move_position() {

    //get current x position
    int positionX = getX_position();
    int low = 15;
    int high = 30;
    int move = rand() % ( high - low + 1 ) + low;
    if(getStatus() != 0){
        //get direction  0 = left 1 = right
        int direction = rand() % 2;
        //can move in x direction by 3 spaces
        if(positionX >= 798){
            direction = 0;
        }
        if(positionX <= 2){
            direction = 1;
        }

        if(direction == 1){
            setX_position(positionX + move);
            cout << "The " << getName()  << " moved "<< move<<"  spaces to the right (" << getX_position() << "," << getY_position() <<")  " ;
        }
        else{

            setX_position(positionX - move);
            cout << "The " << getName()  << " moved "<< move<< " spaces to the left (" << getX_position() << "," << getY_position() <<")  ";


        }
    }

    else
        positionX =0;
}
void Type2::fire_weapon(){
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
void Type2::update_status(){
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