#include <iostream>
#include "enemy.h"
#include "type1.h"
#include "type2.h"
#include "type3.h"

using namespace std;


int main()
{
    const int max_enemy = 20;

    int num_enemy;
// create Enemy objects, place in array
    Type1 enemy1("Pitbull","bite neck",0);
    Type1 enemy2("Lion","slash face",0);
    Type2 enemy3("Helicopter","bomb",5);
    Type2 enemy4("Jet","missile",4);
    Type3 enemy5("Soldier","rifle",6);
    Type3 enemy6("Robot","AK-47",20);




    Enemy* enm1 = &enemy1;
    Enemy* enm2 = &enemy2;
    Enemy* enm3 = &enemy3;
    Enemy* enm4 = &enemy4;
    Enemy* enm5 = &enemy5;
    Enemy* enm6 = &enemy6;


    Enemy* enemy_ptr  [max_enemy]= {enm1,enm2,enm3,enm4,enm5,enm6};

    num_enemy=6;


// set value of num_enemy
    int count = 4;

    while ( count ) {

        // every Enemy object should move_position
        int randomEnemy = rand() % num_enemy;

         for(int i =0; i < num_enemy; i++){

             enemy_ptr[i]->move_position();
         }

         cout<< endl;

         enemy_ptr[randomEnemy]->fire_weapon();
         cout<<endl;

         enemy_ptr[randomEnemy]->update_status();
         cout<<endl;
         count--;

    }
    return 0;
}
