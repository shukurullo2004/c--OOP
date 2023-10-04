#include <iostream>
using namespace std;

class point{
    private:
    double x;
    double y;
    public:
    point(double ix, double iy){
        x = ix;
        y = iy;
    };
    void info(void){

       cout << "(x,y) = " << "("<< x << "," << y << ")" << endl;
    };
    double getx(void){
        return x;
    }
    double gety(void){
        return y;
    }

    void get(double &ox, double &oy){
        ox = x;
        oy = y;
    }
};

int main(){
    double x, y;
    point p{10.5,20.99};
    p.info();
    x = p.getx();
    y = p.gety();
    p.get(x,y);
    cout << "(" << x << ", " << y << ")" << endl;

}