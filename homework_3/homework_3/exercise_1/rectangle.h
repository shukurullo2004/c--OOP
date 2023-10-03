#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle() {
    // Constructor implementation
}

void Rectangle::InitMembers(const Point &ul, const Point &lr) {
    // Method implementation
}

void Rectangle::ShowRecInfo() const {
    // Method implementation
    std::cout << "LeftTop: [" << m_upLeft.GetX() << "," << m_upLeft.GetY() << ']' << std::endl;
    std::cout << "RightBottom: [" << m_lowRight.GetX() << "," << m_lowRight.GetY() << ']' << std::endl << std::endl;
}
