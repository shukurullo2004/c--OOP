#include <iostream>
#include <iomanip>

using namespace std;

class Time{
    public:
    int hour;
    int min;
    int sec;
    Time(int soat, int minut, int secund):hour{soat},min{minut},sec{secund}{};
    

    void printTime()const{
        if(hour >= 12){
            cout << setfill('0') << setw(2)<< hour -12 <<":"<< setfill('0') << setw(2)<<min <<":"<< setfill('0') << setw(2)<<sec <<":"<<"PM" << endl;
        }
        else{
            cout << setfill('0') << setw(2)<< hour <<":"<< setfill('0') << setw(2)<<min <<":"<< setfill('0') << setw(2)<<sec <<":"<<"AM" << endl;
        }
        
    }
    void printTime(){
        cout << setfill('0') << setw(2)<< hour<<":"<< setfill('0') << setw(2)<<min <<":"<< setfill('0') << setw(2)<<sec <<endl;
    }
};






int main() {
    const Time t0(7, 3, 5);
    Time t1(13, 45, 9);
    const Time t2(t1);

    std::cout << "t0: ";
    t0.printTime();

    std::cout << "t1: ";
    t1.printTime();

    std::cout << "t2: ";
    t2.printTime();

    return 0;
}