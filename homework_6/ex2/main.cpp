#include <iostream>
using namespace std;

class Calculate {
public:
    double a = 0;
    char lastOp = '\0'; // Store the last operation.
    double lastValue = 0; // Store the last value.

    double getValue() {
        return a;
    }

    double add(double value) {
        a = a + value;
        setLastOperation('+', value);
        return a;
    }

    double subtract(double value) {
        a = a - value;
        setLastOperation('-', value);
        return a;
    }

    double multiply(double value) {
        a = a * value;
        setLastOperation('*', value);
        return a;
    }

    double divide(double value) {
        a = a / value;
        setLastOperation('/', value);
        return a;
    }

    void setLastOperation(char op, double value) {
        lastOp = op;
        lastValue = value;
    }

    bool lastOperation(char& op, double& value) {
        if (lastOp == '\0') {
            return false;
        }
        op = lastOp;
        value = lastValue;
        return true;
    }

    void undo() {
        if (lastOp == '+') {
            a -= lastValue;
        } else if (lastOp == '-') {
            a += lastValue;
        } else if (lastOp == '*') {
            a /= lastValue;
        } else if (lastOp == '/') {
            a *= lastValue;
        }
        lastOp = '\0'; // Clear the last operation after undoing.
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
            cout << " = " << cc.subtract(value) << endl;
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

    cout << endl << endl;

    for (i = 0; i < 10; ++i) {
        char lastOp;
        double lastValue;
        bool flag = cc.lastOperation(lastOp, lastValue);

        cout << "Stored the last math operation: ";
        if (!flag) {
            cout << "None" << endl;
        } else {
            cout << lastOp << ", " << lastValue << endl;
            cc.undo();
            cout << "Undo the last math operation..." << endl;
            cout << "Value inside the class object: " << cc.getValue() << endl;
        }
    }

    cout << "Value inside the class object: " << cc.getValue() << endl;

    return 0;
}
