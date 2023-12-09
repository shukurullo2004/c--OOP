#include <iostream>
using namespace std;

class Rectangle{
    public:
    double Width = 0;
    double Height = 0;
    Rectangle(){};
    void display(){
        cout <<  "Width: " << Width<< endl;
        cout <<  "Height: " << Height<< endl;
    }
    Rectangle& setWidth(double width){
        Width = width;
        return *this;
    }
    Rectangle &setHeight(double height){
        Height = height;
        return *this;
    }
};

int  main(){
    Rectangle rec;
    rec.display();
    rec.setHeight(10).setWidth(20).display();
    return 0;
}