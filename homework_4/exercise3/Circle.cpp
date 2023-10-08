#include "Circle.h"
#include <cmath>

// ... Other constructors and destructor ...

double Circle::calculateArea() const {
    return M_PI * radius * radius;
}


class Circle {
private:
    Point center;
    double radius;

public:
    // ... Constructors, Destructor, and other functions ...

    double getRadius() const {
        return radius;
    }

    const Point& getCenter() cosnst {
        return center;
    }
};


// Check if a point is inside the circle
bool Circle::isInside(const Point& point) const {
    double dx = point.getx() - center.getx();
    double dy = point.gety() - center.gety();
    return sqrt(dx * dx + dy * dy) <= radius;
}

// ... Other member functions ...
