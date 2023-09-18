#include <iostream>
using namespace std;

template <typename T, typename U>
auto max(T num1, U num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    cout << max(2.3, 1) << endl;
    return 0;
}
