#include <iostream>
#include <cmath>
using namespace std;
class Round{
    // friend void print(Round);
    //friend class
    friend class Homework;
    private:
    float circumference;
    float area;
    public:

    void setA(float circumference){
        this ->circumference=circumference;
        area =  3.14 *pow((circumference/2 * 3.14), 2);
        }
    
};

class Homework{
    public:
void print(Round a){
    cout <<"circumference :" << a.circumference << endl;
    cout << "area: " << a.area << endl;
   }

};
int main(){
    Round myRound;
    myRound.setA(3);
    Homework h;
    h.print(myRound);
    return 0;
}