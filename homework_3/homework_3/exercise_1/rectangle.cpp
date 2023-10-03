#include "Rectangle.h"

bool Rectangle::InitMembers(const Point& ul, const Point& lr) {
    if ((ul.GetX() > lr.GetX()) || (ul.GetY() > lr.GetY())) {
        return false;
    }
    m_upLeft = ul;
    m_lowRight = lr;
    return true;
}

void Rectangle::ShowRecInfo() const {
    cout << "LeftTop: [" << m_upLeft.GetX() << "," << m_upLeft.GetY() << ']' << endl;
    cout << "RightBottom: [" << m_lowRight.GetX() << "," << m_lowRight.GetY() << ']' << endl << endl;
}
