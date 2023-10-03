#include "Point.h"

Point::Point(int x, int y) : m_x(x), m_y(y) {}

bool Point::isInRange(int pos) {
    const int POSMIN = 0;
    const int POSMAX = 100;

    return (pos >= POSMIN && pos <= POSMAX);
}

bool Point::InitMembers(int xpos, int ypos) {
    if (!isInRange(xpos) || !isInRange(ypos)) {
        return false;
    }
    m_x = xpos;
    m_y = ypos;
    return true;
}

int Point::GetX() const {
    return m_x;
}

int Point::GetY() const {
    return m_y;
}

bool Point::SetX(int xpos) {
    if (!isInRange(xpos)) {
        return false;
    }
    m_x = xpos;
    return true;
}

bool Point::SetY(int ypos) {
    if (!isInRange(ypos)) {
        return false;
    }
    m_y = ypos;
    return true;
}
