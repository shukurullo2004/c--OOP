#include <iostream>

class Number {
private:
    double value;

public:
    // Default constructor
    Number() : value(0.0) {}

    // Constructor with an initial value
    Number(double val) : value(val) {}

    // Get the value
    double getValue() const {
        return value;
    }

    // Operator overload for +=
    void operator+=(double num) {
        value += num;
    }

    // Set value to a new value
    void setValue(double newVal) {
        value = newVal;
    }

    // Operator overload for -=
    void operator-=(double num) {
        value -= num;
    }

    // Operator overload for *=
    void operator*=(double num) {
        value *= num;
    }

    // Operator overload for /=
    void operator/=(double num) {
        value /= num;
    }

    // Member function for adding a number
    double add(double num) {
        value += num;
        return value;
    }

    // Member function for subtracting a number
    double sub(double num) {
        value -= num;
        return value;
    }

    // Member function for multiplying by a number
    double mul(double num) {
        value *= num;
        return value;
    }

    // Member function for dividing by a number
    double div(double num) {
        value /= num;
        return value;
    }
};

int main() {
    Number n1(10.5);
    Number n2;

    n1 += 10.5;
    std::cout << "n1 += 10.5: " << n1.getValue() << std::endl;
    
    n1.setValue(0.0);
    n1 -= 1.5;
    std::cout << "n1 -= 1.5: " << n1.getValue() << std::endl;
    
    n1 *= 3.0;
    std::cout << "n1 *= 3.0: " << n1.getValue() << std::endl;
    
    n1.setValue(9.0);
    std::cout << "n1 = 9.0: " << n1.getValue() << std::endl;

    n1 -= 1.5;
    std::cout << "n1 -= 1.5: " << n1.getValue() << std::endl;

    n1 *= 3.0;
    std::cout << "n1 *= 3.0: " << n1.getValue() << std::endl;

    n2 = n1;
    std::cout << "n2 = n1: " << n2.getValue() << std::endl;

    n1 /= 9.0;
    std::cout << "n1 /= 9.0: " << n1.getValue() << std::endl;

    return 0;
}
