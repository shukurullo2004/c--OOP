#include <iostream>
#include <cmath>
using namespace std;
class Round{
    private:
    float circumference;
    float area;
    public:

    void setA(float circumference){
        this ->circumference=circumference;
        area =  3.14 *pow((circumference/2 * 3.14), 2);
        }
    friend void print(Round);
};
void print(Round a){
    cout <<"circumference :" << a.circumference << endl;
    cout << "area: " << a.area << endl;
   }
int main(){
    Round abs;
    abs.setA(3);
    print(abs);
    return 0;
}