#include <iostream>
using namespace std;
class Triangle{
private:
double base;
double height;
public:
Triangle(double b, double h){
    base = b;
    height = h;
}
double getBase(){
    return base;
}
double getHeight(){
    return height;
}
double area(){
    return height*base * 0.5;
}
};

int main(){
    Triangle t1(10.5, 4.5);
    Triangle t2(7.0, 3.0);

    std::cout << "Triangle 1 {10.5, 4.5}" << std::endl;
    std::cout << "base: " << t1.getBase() << std::endl;
    std::cout << "height: " << t1.getHeight() << std::endl;
    std::cout << "area: " << t1.area() << std::endl << std::endl;

    std::cout << "Triangle 2 {7.0, 3.0}" << std::endl;
    std::cout << "base: " << t2.getBase() << std::endl;
    std::cout << "height: " << t2.getHeight() << std::endl;
    std::cout << "area: " << t2.area() << std::endl << std::endl;
    return 0;
}