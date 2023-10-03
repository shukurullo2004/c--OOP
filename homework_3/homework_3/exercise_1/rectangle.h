#ifndef LAB5_RECTANGLE_H
#define LAB5_RECTANGLE_H

#include "Point.h"

class Rectangle {
public:
    Point m_upLeft;
    Point m_lowRight;

    bool InitMembers(const Point& ul, const Point& lr);
    void ShowRecInfo() const;
};

#endif // LAB5_RECTANGLE_H
