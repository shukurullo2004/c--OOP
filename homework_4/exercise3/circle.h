#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

class Circle {
private:
    Point center; // Member variable for center
    double radius; // Member variable for radius

public:
    // Constructors
    Circle();
    Circle(const Point& c, double r);
    Circle(double x, double y, double r);

    // Destructor
    ~Circle();

    // Member functions
    double calculateArea() const; // Renamed the area function
    const Point& getCenter() const; // Renamed the center function
    double getRadius() const; // Renamed the radius function
    bool isInside(const Point& point) const; // Renamed the IsInside function

    // Display information
    void info() const;
};

#endif // CIRCLE_H
