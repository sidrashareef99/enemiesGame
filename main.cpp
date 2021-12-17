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
    Type1 enemy3("Tiger","slash chest",0);
    Type2 enemy4("Helicopter","bomb",5);
    Type2 enemy5("Jet","missile",4);
    Type2 enemy6("Drone","missile",2);
    Type3 enemy7("Soldier","rifle",6);
    Type3 enemy8("Robot","AK-47",20);
    Type3 enemy9("BadCop","rifle",10);


    Enemy* enm1 = &enemy1;
    Enemy* enm2 = &enemy2;
    Enemy* enm3 = &enemy3;
    Enemy* enm4 = &enemy4;
    Enemy* enm5 = &enemy5;
    Enemy* enm6 = &enemy6;
    Enemy* enm7 = &enemy7;
    Enemy* enm8 = &enemy8;
    Enemy* enm9 = &enemy9;

    Enemy* enemy_ptr  [max_enemy]= {enm1,enm2,enm3,enm4,enm5,enm6,enm7,enm8,enm9};

    num_enemy=9;

    enemy_ptr[1]->fire_weapon();
// set value of num_enemy
    int count = 10;

    while ( true && count ) {

        // every Enemy object should move_position
        int randomEnemy = rand() % num_enemy;
        int enemyAction = rand() % 2;

         for(int i =0; i < num_enemy; i++)
            {
                enemy_ptr[i]->move_position();
            }
        if(enemyAction == 0){
            enemy_ptr[randomEnemy]->fire_weapon();
        }
        else if(enemyAction == 1){
            enemy_ptr[randomEnemy]->update_status();
        }

        cout << endl;
        count++;
    }
    return 0;
}
