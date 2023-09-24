#include <iostream>
using namespace std;
enum Weekdays{
   Monday=2,Tuesday=1,Wednesday=5, Thursday=3,Friday=4,Saturday=8,Sunday=7,
};
int main(){
    int number;
    Weekdays kunlar;
    kunlar = (Weekdays) number;
    cin >>number;
    switch(kunlar)
    {
    case 5:
        cout <<"monday" <<endl;
        break;
    case 1:
        cout <<"tuesday" <<endl;
        break;
    case 2:
        cout <<"wednesday" <<endl;
        break;
    case 3:
        cout <<"thursday" <<endl;
        break;
    default:
        break;
    }
    return 0;
}