#include "Rectangle.h"
#include <iostream>
#include <string>
    Rectangle::Rectangle(double l, double w, std::string c){
        length = l;
        width = w;
        color = c;
    }
    void Rectangle:: print(){
       std::cout << "length: "<< length << std::endl;
       std::cout << "width: "<< width << std::endl;
       std::cout << "color: "<< color << std::endl;
    }
    double Rectangle:: peremeter(){
        return 2 * (length + width);
    }
    Rectangle& Rectangle::setW(double newwidth){
        width = newwidth;
        return *this;
    }
     Rectangle& Rectangle:: setColor(std:: string colour){
        color = colour;
        return *this;
    }