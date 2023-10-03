#ifndef LAB5_POINT_H
#define LAB5_POINT_H

const int POSMIN = 0;
const int POSMAX = 100;

class Point {
    int m_x; // x-pos: range 0~100
    int m_y; // y-pos: range 0~100

public:
    static bool isInRange(int pos);

    bool InitMembers(int xpos, int ypos);

    bool SetX(int xpos);

    bool SetY(int ypos);

    int GetX() const;

    int GetY() const;
};

#endif // LAB5_POINT_H
