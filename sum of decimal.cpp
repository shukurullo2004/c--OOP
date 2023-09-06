#include <iostream>
using namespace std;
int main(){
    long int num, reversednum = 0;
    cout << "Enter number: " ; cin >> num;
    int lastnum ;
    while (num != 0){
        lastnum  = num % 10;
        reversednum += lastnum;
        num /= 10;
    }
    cout << " result: " << reversednum << endl;
    return 0;
}