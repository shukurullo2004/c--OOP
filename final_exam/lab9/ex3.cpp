#include <iostream>
using namespace std;

class Fruit{
public:
    string name;
    string color;
};
class Apple:public Fruit{
    public:
Apple(string color):Fruit{color}{
    name = "Apple";
}
string getName(){
    return name;
}

string getColor(){
    return color;
}


};

class Banana:public Apple{
    public:
Banana():Apple(name){
    name = "banana";
   color = "yellow";    
    }
};





int main() {
    Apple apple{"Apple"};
    Banana banana;
    std::cout << "My " << apple.getName() << " is " << apple.getColor() << ".\n";
    std::cout << "My " << banana.getName() << " is " << banana.getColor() << ".\n";

    return 0;
}