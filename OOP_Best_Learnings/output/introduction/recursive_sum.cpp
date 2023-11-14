#include <iostream>
using std::cout;
using std::endl;
using std::cin;

template<typename Sh>
Sh recursive_sum(Sh n){
    if(n == 0)
        return 0;
    else
        return n + recursive_sum(n-1);
}

int main(){
    float n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of numbers from 1 to " << n << " is " << recursive_sum(n) << endl;
    cout << "data type of recursive_sum(n) is " << typeid(recursive_sum(n)).name() << endl; // "i" means "int
    return 0;
}