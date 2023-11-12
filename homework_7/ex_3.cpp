#include <iostream>
using namespace std;
class Fruit{
public:
string name;
string color;

Fruit(){ };
Fruit(string name){
    this->name = name;
}

string getName(){
    return name;
}

string getColor(){
    return color;
}

friend class Apple;
friend class Banana;
};

class Apple : public Fruit{
    public:
    Apple(string color):Fruit(color){
    this->color = color;
    name = "Apple";    
    }
    
};
class Banana : public Fruit{
    public:
    Banana(){
    this->color = "yellow";
    this->name = "Banana";
    }
    
};

int main(){
    Apple a{"red"};
    Banana b;

    cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    cout << "My " << b.getName() << " is " << b.getColor() << ".\n";

    return 0;    return 0;
}
