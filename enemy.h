#include <iostream>
#include <string>
using namespace std;


#ifndef ENEMY_H
#define ENEMY_H

class Enemy{
private:
    int x_position;
    int y_position;
    string name;
    double width;
    double height;
    int status;
public:
    //Setters
    void setX_position(int x_position);
    void setY_position(int y_position);
    void setName(string name);
    void setWidth(double width);
    void setHeight(double height);
    void setStatus(int status);

    //Getters
    int getX_position();
    int getY_position();
    string getName();
    double getWidth();
    double getHeight();
    int getStatus();

    //Methods
    virtual void move_position()=0;
    virtual void fire_weapon()=0;
    virtual void update_status()=0;
};
#endif
