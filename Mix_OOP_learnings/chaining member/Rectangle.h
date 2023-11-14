#ifndef RECTANGLE
#define RECTANGLE
#include <string>
class Rectangle{
    private:
    double length;
    double width;
    std::string color;
    public:
        Rectangle(double l, double w, std::string c);
        void print();
        double peremeter();
        Rectangle& setW(double newwidth);
        Rectangle& setColor(std:: string colour);
        };

#endif