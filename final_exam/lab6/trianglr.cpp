#include <iostream>
using namespace std;

class Triangle{
    public:
    double base;
    double height;
    Triangle(double base, double height):base{base},height{height}{ };
    double getBase(){
        return base;
    }
    double getHeight(){
        return height;
    }

    double area(){
        return (base * height/2);
    }
};





int main() {
    // Creating instances of the Triangle class
    Triangle t1(10.5, 4.5);
    Triangle t2(7.0, 3.0);

    // Printing information for Triangle t1
    std::cout << "Triangle t1 {10.5, 4.5}" << std::endl;
    std::cout << "Base: " << t1.getBase() << std::endl;
    std::cout << "Height: " << t1.getHeight() << std::endl;
    std::cout << "Area: " << t1.area() << std::endl << std::endl;

    // Printing information for Triangle t2
    std::cout << "Triangle t2 {7.0, 3.0}" << std::endl;
    std::cout << "Base: " << t2.getBase() << std::endl;
    std::cout << "Height: " << t2.getHeight() << std::endl;
    std::cout << "Area: " << t2.area() << std::endl << std::endl;

    return 0;
}