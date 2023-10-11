#include <iostream>
using namespace std;
class Rectangle{
private:
    double length;
    double height;

public:
    Rectangle(double l = 0, double h = 0){
        length = l;
        height = h;
 }
    void display(){
        cout <<"Length: " << length << endl;
        cout <<"Height: " << height << endl;
 }
    Rectangle& setlength(double l1){
        length = l1;
        return *this;
    }
    Rectangle& setheigth(double h1){
        height = h1;
        return *this;
    }
};
int main(){

    Rectangle rect;
    rect.display();
    rect.setheigth(12.3).setlength(23.2).display();
    return 0;
}