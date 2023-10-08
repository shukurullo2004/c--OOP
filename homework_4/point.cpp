#include "Point.h"

// Constructor with default values
Point::Point() : x(0.0), y(0.0) {}

// Constructor with given x and y coordinates
Point::Point(double x, double y) : x(x), y(y) {}

// Overload the << operator for easy Point output
std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "[" << point.x << ", " << point.y << "]";
    return os;
}
