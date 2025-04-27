#pragma once
#include <iostream>
class point {
    public:
    double x;
    double y;
    point(double x, double y){
        this->x=x;
        this -> y=y;
    }
};
class rectangle{
    private:
    point *point1;
    point *point2;
    public:
    rectangle();
    rectangle(point& p1, point& p2);
    ~rectangle();
    void displayALLPoints();
};
rectangle::rectangle(){
    
}