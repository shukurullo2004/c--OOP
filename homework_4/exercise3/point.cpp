#include "point.h"
#include <iostream>

Point::Point(double ix, double iy) : x(ix), y(iy) {}

void Point::info() const {
    std::cout << "(x, y) = (" << x << ", " << y << ")" << std::endl;
}

double Point::getx() const {
    return x;
}

double Point::gety() const {
    return y;
}
