#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int factorial(int n);

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
return 0;
}

int factorial(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n-1);

}