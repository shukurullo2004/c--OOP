bool Rectangle::InitMembers(const Point& ul, const Point& lr) {
    if ((ul.GetX() > lr.GetX()) || (ul.GetY() > lr.GetY()))
        return false;
    m_upLeft = ul;
    m_lowRight = lr;
    return true;
}
