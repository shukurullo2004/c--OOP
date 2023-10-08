#include <iostream>
#include "Circle.h"

int main() {
    Circle c1;
    Circle c2{};
    Point p{10.5, 20.99};
    Circle c3{p, 20.0};
    Circle c4{20.5, 10.5, 10.0};

    std::cout << "c1.info: ";
    c1.info();

    std::cout << "c2.info: ";
    c2.info();

    std::cout << "c3.info: ";
    c3.info();

    std::cout << "c4.info: ";
    c4.info();

    std::cout << "\nArea of c3: " << c3.area() << std::endl;

    const Point& cent = c3.center();
    std::cout << "Center of c3: (" << cent.getx() << ", " << cent.gety() << ")" << std::endl;

    std::cout << "Radius of c3: " << c3.radius() << std::endl;

    std::cout << "IsInside: " << c4.isInside(Point{25.0, 8.0}) << std::endl << std::endl;

    return 0;
}
