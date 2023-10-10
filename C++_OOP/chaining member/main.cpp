#include <iostream>
class Rectangle{
    private:
    double length;
    double width;
    std::string color;
    public:
    Rectangle(double l, double w, std::string c){
        length = l;
        width = w;
        color = c;
    }
    void print(){
       std::cout << "length: "<< length << std::endl;
       std::cout << "width: "<< width << std::endl;
       std::cout << "color: "<< color << std::endl;
    }
    double peremeter(){
        return 2 * (length + width);
    }
    Rectangle& setW(double newwidth){
        width = newwidth;
        return *this;
    }
     Rectangle& setColor(std:: string colour){
        color = colour;
        return *this;
    }
};

int main(){
    Rectangle r1(6.5,5.5, "red");
     std :: cout << r1.peremeter() << std::endl;
    r1.print();
    r1.setW(8.5).setColor("blue");
    std :: cout << r1.peremeter() << std::endl;
    r1.print();

    return 0;
}
