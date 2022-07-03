#include <iostream>
#include "enemy.h"
#include "type1.h"

using namespace std;

static string enemyWeapon;
static int enemyAmmo;


 Type1::Type1(string name,string weapon, int ammo) {
    setName(name);
    setWeapon(weapon);
    setAmmo(ammo);

    setStatus(rand() % 2 + 1);

    // set x position to random int from 0 to 800
    setX_position(rand() % 801);

    // set y position to 500
    setY_position(500);
}

void Type1::setWeapon(string weapon) {
    enemyWeapon = weapon;
}
string Type1::getWeapon() {
    return enemyWeapon;
}
void Type1::setAmmo(int ammo) {
    enemyAmmo = ammo;
}
int Type1::getAmmo() {
    return enemyAmmo;
}

void Type1::move_position() {

         //get current x position
    int positionX = getX_position();
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
             setX_position(positionX + 3);
             cout << "The " << getName()  << " moved 3 spaces to the right (" << getX_position() << "," << getY_position() <<")  " ;
         }
         else{

             setX_position(positionX - 3);
             cout << "The " << getName()  << " moved 3 spaces to the left(" << getX_position() << "," << getY_position() <<")  " ;


         }
     }

     else{
         positionX =0;
     }

}

void Type1::fire_weapon() {


    int attack = rand() % 3;

    if(attack == 0){
        cout<<getName()<<" fire weapon: slash neck";
    }
    else if(attack == 1){
        cout<<getName()<<" fire weapon: bite leg ";
    }
    else if(attack == 2){
        cout<<getName()<<" fire weapon: bite chest ";
    }


}

void Type1::update_status() {
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

