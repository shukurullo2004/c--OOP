#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

int main() {
    Point pos1(-2, 4);
    Point pos2(5, 9);

    Rectangle rec;

    if (!rec.InitMembers(pos2, pos1)) {
        cout << "rec-1: Failure of Init" << endl;
    }
    if (!rec.InitMembers(pos1, pos2)) {
        cout << "rec-2: Failure of Init" << endl;
    }

    rec.ShowRecInfo();

    return 0;
}
