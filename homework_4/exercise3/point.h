#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    // Constructors
    Point(double ix, double iy);

    void info() const;
    double getx() const;
    double gety() const;
};

#endif // POINT_H
