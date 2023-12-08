#include <iostream>
using namespace std;

class Number {
    private:
double num1;

public:
double setValue(double n1){
    num1 = n1;
    return num1;
}
double getValue(){
    return num1;
}
double add(double n1){
    num1 = num1 +n1;
    return num1;
}
double sub(double n1){
    num1 = num1 - n1;
    return num1;
}

double mul(double n1){
    num1 = num1 * n1;
    return num1;
}
double div(double n1){
    num1 = num1/n1;
    return num1;
}

};









int main() {
    Number n1, n2;

    n1.setValue(0.0);
    std::cout << "n1: " << n1.getValue() << std::endl;
    std::cout << "n1 += 10.5: " << n1.add(10.5) << std::endl;
    std::cout << "n1 -= 1.5: " << n1.sub(1.5) << std::endl;
    std::cout << "n1 *= 3.0: " << n1.mul(3.0) << std::endl;
    std::cout << "n1 /= 9.0: " << n1.div(9.0) << std::endl;

    n2.setValue(n1.getValue());
    std::cout << "n2 = n1: " << n2.getValue() << std::endl;

    return 0;
}