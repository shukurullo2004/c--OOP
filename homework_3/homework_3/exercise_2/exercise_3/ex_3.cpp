bool Rectangle::IsInside(const Point& p) const {
    // Check if the given point is inside the rectangle
    return (p.GetX() >= m_upLeft.GetX() && p.GetX() <= m_lowRight.GetX() &&
            p.GetY() >= m_upLeft.GetY() && p.GetY() <= m_lowRight.GetY());
}
