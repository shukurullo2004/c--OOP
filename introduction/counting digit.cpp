#include <iostream>
using namespace std;

int main(){
    int number;
    int counter = 0;
    cout << "Enter a number: ";
    cin >> number;

    if(number > 0){
        while(number>0){
            number = number / 10;
            counter++;
        }
        cout << "The number of digits is: " << counter << endl;
        }

    else if(number == 0){
        cout << "The number of digits is: 1" << endl;
    }
    else 
        cout <<"Please enter valid number!" << endl;

    return 0;
}