#include <iostream>
using namespace std;

class Point {
private:
    double x;
    double y;

public:
    // Constructor
    Point(double initialX, double initialY) : x(initialX), y(initialY) {}

    // Member function to display the position
    void info() {
        cout << "(" << x << "," << y << ")" << endl;
    }

    // Interface function to get x position
    double getx() {
        return x;
    }

    // Interface function to get y position
    double gety() {
        return y;
    }

    // Interface function to get both x and y positions
    void get(double& outX, double& outY) {
        outX = x;
        outY = y;
    }
};

int main(void) {
    double x, y;
    Point p{10.5, 20.99};
    p.info();
    x = p.getx();
    y = p.gety();
    cout << "(" << x << ", " << y << ")" << endl;

    return 0;
}
