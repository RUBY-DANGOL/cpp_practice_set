// #include<iostream>
// void display(int a){
//     std:: cout << "a= "<< a << std :: endl;
// }
// void display (int a , int b){
//     std :: cout << "a= " << a << " and b = " << b<< std :: endl;
// }
// int main(){
//     display(5);
//     display(5,10);
//     return 0;
// }

#include<iostream>
void circle(int r){
    int c = 3.14;
    int area = c*r*r;
    std:: cout<< "area of circle= "<< area<< std :: endl;
}
void rectangle(int b , int h){
    int area = b*h;
    std:: cout<< "area of rectangle= "<< area<< std :: endl;
}
void triangle(int b, int h){
    int area = 1/2*(b*h);
    std:: cout<<"area of triangle= "<< area<< std:: endl;
}
void square(int b){
    int area = b*b;
    std:: cout<<"area of square= "<< area<< std:: endl;
}
int main()
{
    char shape;
    std::cout << "Enter the shape (s for square, t for triangle, r for rectangle, c for circle): ";
    std::cin >> shape;

    switch (shape) {
        case 's': {
            int side;
            std::cout << "Enter the side length of the square: ";
            std::cin >> side;
            square(side);
            break;
        }
        case 't': {
            int base, height;
            std::cout << "Enter the base and height of the triangle: ";
            std::cin >> base >> height;
            triangle(base, height);
            break;
        }
        case 'r': {
            int width, height;
            std::cout << "Enter the width and height of the rectangle: ";
            std::cin >> width >> height;
            rectangle(width, height);
            break;
        }
        case 'c': {
            int radius;
            std::cout << "Enter the radius of the circle: ";
            std::cin >> radius;
            circle(radius);
            break;
            }
        default:
            std::cout << "Invalid shape selected!" << std::endl;
    }

    return 0;
}

