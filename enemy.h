#include <iostream>
#include <string>
using namespace std;


#ifndef ENEMY_H
#define ENEMY_H

class Enemy{
private:
    int x_position;
    int y_position;
    double width;
    double height;
    string status;
public:
    //Setters
    void setX_position(int x_position);
    void setY_position(int y_position);
    void setWidth(double width);
    void setHeight(double height);
    void setStatus(string status);

    //Getters
    int getX_position();
    int getY_position();
    double getWidth();
    double getHeight();
    string getStatus();

    //Methods
    virtual void move_position()=0;
    virtual void fire_weapon()=0;
    virtual void update_status()=0;
};
#endif
