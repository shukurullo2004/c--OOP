#include <iostream>
using namespace std;

class Calculate{
    public:
    double num = 0;

    double getValue(){
        return num;
    }
    double add(double num1){
        num = num + num1;
        return num;
    }
    double subtract(double num1){
        num = num - num1;
        return num;
    }
    double multiply(double num1){
        num = num *num1;
        return num;
    }
    double divide(double num1){
        num = num / num1;
        return num;
    }
};



int main(void) {
    Calculate cc;
    int i;
    char op;
    double value;

    for (i = 0; i < 10; ++i) {
        std::cout << "Select math operator(+,-,*,/): ";
        std::cin >> op;
        std::cout << "Enter a real number for the math: ";
        std::cin >> value;

        switch (op) {
            case '+':
                std::cout << cc.getValue() << " + " << value << " = " << cc.add(value) << std::endl;
                break;
            case '-':
                std::cout << cc.getValue() << " - " << value << " = " << cc.subtract(value) << std::endl;
                break;
            case '*':
                std::cout << cc.getValue() << " * " << value << " = " << cc.multiply(value) << std::endl;
                break;
            case '/':
                std::cout << cc.getValue() << " / " << value << " = " << cc.divide(value) << std::endl;
                break;
            default:
                std::cout << "Invalid operator." << std::endl;
        }
    }

    return 0;
}