#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

class Circle {
private:
    Point center;
    double radius;

public:
    // Constructors
    Circle();
    Circle(const Point& c, double r);
    Circle(double x, double y, double r);

    // Destructor
    ~Circle();

    // Member function to display information
    void info() const;
};

#endif // CIRCLE_


