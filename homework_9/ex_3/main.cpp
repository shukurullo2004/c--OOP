#include <iostream>
using namespace std;

class Friction {
    friend ostream& operator<<(ostream& COUT, const Friction& f);
    friend Friction operator*(const Friction& f1, const Friction& f2);
    friend Friction operator*(const Friction& f2, int m);
    friend Friction operator*(int m, const Friction& f2);
    friend Friction operator-(const Friction &f1 , const Friction &f2);

private:
    int m_numerator;
    int m_denominator;

public:
    Friction(int numerator = 0, int denominator = 1) : m_numerator{ numerator }, m_denominator{ denominator } {};

    // Constructor for converting an integer to a Friction object
    Friction(int wholeNumber) : m_numerator{ wholeNumber }, m_denominator{ 1 } {};
};

ostream& operator<<(ostream& COUT, const Friction& f) {
    COUT << f.m_numerator << "/" << f.m_denominator;
    return COUT;
}

Friction operator*(const Friction& f1, const Friction& f2) {
    int numerator = (f1.m_numerator * f2.m_numerator);
    int denominator = (f1.m_denominator * f2.m_denominator);
    return Friction(numerator, denominator);
}

Friction operator*(const Friction& f2, int m) {
    int numerator = (m * f2.m_numerator);
    int denominator = (f2.m_denominator);
    return Friction(numerator, denominator);
}

Friction operator*(int m, const Friction& f2) {
    int numerator = (m * f2.m_numerator);
    int denominator = (f2.m_denominator);
    return Friction(numerator, denominator);
}

Friction operator-(const Friction &f1 , const Friction &f2){
    Friction subst = f1.m
}




int main() {
    Fraction f1(1, 2), f2(3, 4);

    std::cout << f1 << "," << f2 << std::endl;
    std::cout << f1 << "*" << f2 << "=" << f1 * f2 << std::endl;
    std::cout << f1 << "+" << f2 << "=" << f1 + f2 << std::endl;
    std::cout << f1 << "-" << f2 << "=" << f1 - f2 << std::endl;
    std::cout << 2 << "-" << f2 << "=" << 2 - f2 << std::endl;
    std::cout << 2 << "+" << f1 << "=" << 2 + f1 << std::endl;

    return 0;
}