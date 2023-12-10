#include <iostream>
using namespace std;

class Fruit{
public:
    string name;
    string color;
    Fruit(string color,string name):color{color},name{name}{};
    Fruit(){};

    string getName(){
    return name;
    }
    string getColor(){
        return color;
    }
};

class Apple:public Fruit{
    public:
    Apple(string color = "red", string name = "Apple"):Fruit{color, name}{
}

};

class Banana:public Fruit{
public:
Banana(string color = "yellow",string name = "banana"):Fruit{color,name}{};
};


class RedBanana:public Banana{
    public:
    RedBanana(string color = "red", string name = "redBanana"):Banana(color, name){};
    
    
};




int main() {
    Apple apple{"Apple"};
    Banana banana;
    RedBanana c;
    std::cout << "My " << apple.getName() << " is " << apple.getColor() << ".\n";
    std::cout << "My " << banana.getName() << " is " << banana.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

    return 0;
}