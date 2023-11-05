#include <iostream>
using namespace std;

class Calculate{
public:
double a = 0;
double getValue(){
    return a;
 }
 double add(double value){
    a = a + value;
    return a;
 }
 double substract(double value){
    a = a - value;
    return a;
 }
 double multiply(double value){
    a = a * value;
    return a;
 }
 double divide(double value){
    a = a / value;
    return a;
 }
};


int main(void) {
    Calculate cc;
    int i;
    char op;
    double value;
    for (i = 0; i < 10; ++i) {
        cout << "Select math operator(+,-,*,/): ";
        cin >> op;
        cout << "Enter a real number for the math: ";
        cin >> value;

        switch (op) {
        case '+':
            cout << cc.getValue() << " + " << value;
            cout << " = " << cc.add(value) << endl;
            break;
        case '-':
            cout << cc.getValue() << " - " << value;
            cout << " = " << cc.substract(value) << endl;
            break;
        case '*':
            cout << cc.getValue() << " * " << value;
            cout << " = " << cc.multiply(value) << endl;
            break;
        case '/':
            cout << cc.getValue() << " / " << value;
            cout << " = " << cc.divide(value) << endl;
            break;
        }
    }
    return 0;
}
