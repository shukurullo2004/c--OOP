#include <iostream>
using namespace std;
class A{
    private:
    int x,y,z;
    public:
    void set(int x, int y, int z)
    {
        this -> x = x;
        this -> y = y;
        this -> z = z;
    }
    void print(){

        cout << "X value is: " <<x<< endl;
        cout << "Y value is: " <<y<< endl;
        cout << "Z value is: " <<z<< endl;
    }
    // chaining member function;
    A&setX(int x){
       this ->x = x;
        return *this;
    }
    A(const A& ox){
        x = ox.x;
    }
};


int main(){
    
    obje.set(12,23,34);
    obje.setX(44);
    obje.print();
    return 0;
}