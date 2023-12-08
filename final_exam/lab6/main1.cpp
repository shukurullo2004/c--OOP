#include <iostream>
using namespace std;

class Point{
    private:
    double a;
    double b;
    public:
    Point(double x, double y):a{x},b{y}{};
    void info(){
        cout <<"(x,y)="<<a<<","<<b<< endl;
    }
    void get(double &x, double &y){
        x = a;
        y = b;
        cout << x << "," << y <<endl; 
    }
};

int main(){
    double x,y;
    Point p{10.5, 20.99};
    p.info();
    x = 0;
    y = 0;
    p.get(x,y);
    return 0;
}