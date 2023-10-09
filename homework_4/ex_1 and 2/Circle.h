#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

class Circle {
private:
    Point center;
    double radius;

public:
    
    Circle();
    Circle(const Point& c, double r);
    Circle(double x, double y, double r);

  
    ~Circle();

    void info() const;
};

#endif 


