#ifndef POINT_H
#define POINT_H

class Point {
private:
    int m_x;
    int m_y;
    bool isInRange(int pos);

public:
    Point(int x = 0, int y = 0);
    bool InitMembers(int xpos, int ypos);
    bool SetX(int xpos);
    bool SetY(int ypos);
    int GetX() const;
    int GetY() const;
};

#endif // POINT_H
