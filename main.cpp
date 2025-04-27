#include <iostream>
#include"rectangle.h"
int main(){
    point p1(10, 20);
    point p2(3, 25);
    rectangle rect(p1, p2);
    rect.displayALLPoints();
}