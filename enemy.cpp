#include "enemy.h"
#include <string>
#include <utility>

int x;
int y;
double w;
double h;
int s;
string n;

void Enemy::setX_position(int x_position) {
    x= x_position;
}
void Enemy::setY_position(int y_position) {
    y= y_position;
}
void Enemy::setName(string name) {
    n= name;
}
void Enemy::setWidth(double width) {
    w=width;
}
void Enemy::setHeight(double height) {
    h=height;
}
void Enemy::setStatus(int status) {
    s=status;
}

int Enemy::getX_position() {
    return x;
}
int Enemy::getY_position() {
    return y;
}
string Enemy::getName() {
    return n;
}
double Enemy::getWidth(){
    return w;
}
double Enemy::getHeight(){
    return h;
}
int Enemy::getStatus(){
    return s;
}