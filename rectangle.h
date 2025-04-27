#pragma once
#include "point.h"
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