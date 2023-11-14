#include <iostream>
using namespace std;

int main(){
    long int number;
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

    else{
        number = number * -1;
        while(number>0){
        number = number / 10;
        counter++;
    }
    cout << "The number of digits is: " << counter << endl;
    }

    return 0;
}