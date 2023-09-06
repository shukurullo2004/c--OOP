#include <iostream>
using namespace std;

int factorial(int num){
    if (num == 1 || num ==0)
        return 1;
    else
        return num * factorial(num-1);}
int main(){
    // int number;
    // int factorialNumber = 1;
    // int counter = 0;
    // cout << "enter number: "; cin >> number;
    // while(counter != number){
    //     ++counter;
    //     factorialNumber *= counter;
    //     cout << counter << endl;
    // }
    // cout << "result is " << factorialNumber<<endl;
    int a = factorial(3);
    cout << a;

    return 0;
}