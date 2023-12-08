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

class Circle{
private:
double radius = 0;
Point center = 0;

public:
Circle():radius{0};

Circle(Point p, double r){
    Point = p;
    radius = r;

}
Circle(const Point& p, double r){
    center = p
    radius = r;

}
Circle(double x, double y, double r){
    center = (x,y);
    radius = r;
}
void info()const{ 
    cout<< "center: ";
    center.info();
    cout << "radius: "<< radius<<endl;
}
};

int main(){
    Circle c1;
    Circle c2{};
    Point p{10.5, 20.5};
    Circle c3{p, 20.0};
    Circle c4{20.5, 10.5, 10.0};

    cout << "c1.info: ";
    c1.info();
    cout << "c2.info: ";
    c2.info();
    cout << "c3.info: ";
    c3.info();
    cout << "c4.info: ";
    c4.info();

    return 0;
}