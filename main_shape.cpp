// main.cpp

#include <iostream>
#include "shape.h"

void displayMenu() {
    std::cout << "1. Circle\n";
    std::cout << "2. Ellipse\n";
    std::cout << "3. Rectangle\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    int choice;
    Shape* shape = nullptr;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int x, y, radius;
                std::cout << "Enter x, y, radius: ";
                std::cin >> x >> y >> radius;
                shape = new Circle(x, y, radius);
                break;
            }
            case 2: {
                int x, y, xradius, yradius;
                std::cout << "Enter x, y, xradius, yradius: ";
                std::cin >> x >> y >> xradius >> yradius;
                shape = new Ellipse(x, y, xradius, yradius);
                break;
            }
            case 3: {
                int x, y, x1, y1;
                std::cout << "Enter x, y, x1, y1: ";
                std::cin >> x >> y >> x1 >> y1;
                shape = new Rectangle(x, y, x1, y1);
                break;
            }
            case 4:
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
        }

        if (shape) {
            shape->draw();
            delete shape; // Deallocate memory
            shape = nullptr;
        }

    } while (choice != 4);

    return 0;
}
