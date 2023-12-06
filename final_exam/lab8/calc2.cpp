#include <iostream>
using namespace std;
#include <vector>

class Calculate{
    public:
    double num = 0;
    vector<char> operat;
    vector<double> values;
    char op;
    double value;
    double getValue(){
        return num;
    }
    double add(double num1){
        num = num + num1;
        lastOperation('+', num1)
        return num;
    }
    double subtract(double num1){
        num = num - num1;
        lastOperation('-', num1)
        return num;
    }
    double multiply(double num1){
        num = num *num1;
        lastOperation('*', num1)
        return num;
    }
    double divide(double num1){
        num = num / num1;
        lastOperation('/', num1)
        return num;
    }
    void lastOperation(char op, double value){
        operat = op;
        values = value;
    }
    void undo(){

    }

};



int main() {
    Calculate cc;
    int i;
    char op;
    double value;
    bool flag;

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

    for (i = 0; i < 10; ++i) {
        std::cout << "Stored the last math operation: ";
        flag = cc.lastOperation(op, value);

        if (!flag)
            std::cout << "None" << std::endl;
        else
            std::cout << op << "," << value << std::endl;

        if (flag) {
            cc.undo();
            std::cout << "Undo the last math operation..." << std::endl;
            std::cout << "Value inside the class object: " << cc.getValue() << std::endl;
        }
    }

    std::cout << "Value inside the class object: " << cc.getValue() << std::endl;


    return 0;
}