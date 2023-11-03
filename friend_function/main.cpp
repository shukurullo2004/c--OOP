#include <iostream>
using namespace std;
class Myobject{
    friend void double_x(Myobject &object);
    private:
    int x;
    void multi(){
        x *= 2;
    }
    public:
    void print(){
        cout << "X: " << x << endl;
    }
   
};

int main(){
    Myobject mening(7);
    mening.print();
    mening.double_x();
    mening.print();

}