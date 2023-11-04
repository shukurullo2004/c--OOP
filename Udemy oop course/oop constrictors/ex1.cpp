#include <iostream>

class Number {
public:
    int value;

    Number(int val) : value(val) {}
};

void modifyNumber(Number n) {
    n.value += 10;
}

int main() {
    Number num(5);
    std::cout << "Original value: " << num.value << std::endl; // Output: 5

    // Pass 'num' by value to the function
    modifyNumber(num);

    std::cout << "Modified value: " << num.value << std::endl; // Output: 5 (not modified)
    
    return 0;
}
