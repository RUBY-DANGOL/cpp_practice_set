#include <iostream>
#include "rectangle.h"
rectangle::rectangle(){
    point1 = nullptr;
    point2 = nullptr;
}
rectangle::rectangle(point &p1, point &p2){
    point1 = new point(p1);
    point2 = new point(p2);
}
rectangle :: ~rectangle(){
    std:: cout<<"deleting points"<< std::endl;
    delete point1;
    delete point2;
}
void rectangle::displayALLPoints(){
    std:: cout<< point1->x<<","<<point1->y<<std::endl;
    std:: cout<< point2->x<<","<<point1->y<<std::endl;
    std:: cout<< point2->x<<","<<point2->y<<std::endl;
    std:: cout<< point1->x<<","<<point2->y<<std::endl;
}