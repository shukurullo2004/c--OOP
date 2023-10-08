#include "Circle.h"
#include <iostream>

// Constructor with default values
Circle::Circle() : center(Point()), radius(0.0) {}

// Constructor with a given Point and radius
Circle::Circle(const Point& c, double r) : center(c), radius(r) {}

// Constructor with separate x, y coordinates and radius
Circle::Circle(double x, double y, double r) : center(Point(x, y)), radius(r) {}

// Destructor
Circle::~Circle() {
    std::cout << "Destruction of a class instance\n";
}

// Member function to display information
void Circle::info() const {
    std::cout << "Center: " << center << ", Radius: " << radius << std::endl;
}
