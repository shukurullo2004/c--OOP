#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    // Constructors
    Point();
    Point(double x, double y);

    // Friend function to output Point
    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};

#endif // POINT_H
