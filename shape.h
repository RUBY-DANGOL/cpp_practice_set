// shape.h

#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape {
protected:
    int x, y;
public:
    Shape() : x(0), y(0) {}
    Shape(int x, int y) : x(x), y(y) {}
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
protected:
    int radius;
public:
    Circle() : Shape(), radius(0) {}
    Circle(int x, int y, int radius) : Shape(x, y), radius(radius) {}

    void draw() override {
        std::cout << "Drawing Circle at (" << x << ", " << y << ") with radius " << radius << std::endl;
        // Add actual drawing logic here if using graphics
    }
};

class Ellipse : public Shape {
protected:
    int xradius, yradius;
public:
    Ellipse() : Shape(), xradius(0), yradius(0) {}
    Ellipse(int x, int y, int xradius, int yradius) : Shape(x, y), xradius(xradius), yradius(yradius) {}

    void draw() override {
        std::cout << "Drawing Ellipse at (" << x << ", " << y << ") with xradius " << xradius << " and yradius " << yradius << std::endl;
        // Add actual drawing logic here if using graphics
    }
};

class Rectangle : public Shape {
protected:
    int x1, y1;
public:
    Rectangle() : Shape(), x1(0), y1(0) {}
    Rectangle(int x, int y, int x1, int y1) : Shape(x, y), x1(x1), y1(y1) {}

    void draw() override {
        std::cout << "Drawing Rectangle from (" << x << ", " << y << ") to (" << x1 << ", " << y1 << ")" << std::endl;
        // Add actual drawing logic here if using graphics
    }
};

#endif // SHAPE_H
