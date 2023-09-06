#include <iostream>

using namespace std;

int main(){
    int number, reversedNumber = 0;
    cout <<"Enter a number you want to get reversed of it: "; cin>>number;
    while(number != 0){
        reversedNumber *= 10;
        int lastdigit = number % 10;
        reversedNumber += lastdigit;
        number /= 10;
    }

    cout << "Your reversed number: " << reversedNumber <<  endl;
    return 0;

}