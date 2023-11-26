#include <iostream>
using namespace std;

class Friction {
    friend ostream& operator<<(ostream& COUT, const Friction& f);
    friend Friction operator*(const Friction& f1, const Friction& f2);
    friend Friction operator*(const Friction& f2, int m);
    friend Friction operator*(int m, const Friction& f2);

private:
    int m_numerator;
    int m_denominator;

public:
    Friction(int numerator = 0, int denominator = 1) : m_numerator{ numerator }, m_denominator{ denominator } {cancel();};
    void cancel(){
        int gcd;
        if(m_denominator > m_numerator){
            gcd = m_numerator;
            while(m_denominator % gcd == 0 && m_numerator % gcd == 0){
                    m_denominator /= gcd;
                    m_numerator /= gcd;
                    gcd++;
            }
              
        }
        else{
            gcd = m_denominator;
            while(m_denominator % gcd == 0 && m_numerator % gcd == 0){
                    m_denominator /= gcd;
                    m_numerator /= gcd;
                    gcd++;
            }
        }
    
}
};

ostream& operator<<(ostream& COUT, const Friction& f) {
    COUT << f.m_numerator << "/" << f.m_denominator;
    // these for checking purpose qaysi biri first working ekanini determine uchun
    // cout <<"\n"<<" << operator" << endl;
    return COUT;
}

Friction operator*(const Friction& f1, const Friction& f2) {
    int numerator = (f1.m_numerator * f2.m_numerator);
    int denominator = (f1.m_denominator * f2.m_denominator);
    // cout <<"C" << endl;
    return Friction(numerator, denominator);
}

Friction operator*(const Friction& f2, int m) {
    int numerator = (m * f2.m_numerator);
    int denominator = (f2.m_denominator);
    // cout <<"B" << endl;
    return Friction(numerator, denominator);
}

Friction operator*(int m, const Friction& f2) {
    int numerator = (m * f2.m_numerator);
    int denominator = (f2.m_denominator);
    // cout <<"A" << endl;
    return Friction(numerator, denominator);
}

int main() {
    Friction f1{ 1, 2 }, f2{ 3, 4 };
    cout << f1 << ", " << f2 << endl;
    cout << f1 * f2 << endl;
    cout << f1 * 2 << endl;
    cout << 3 * f2 << endl;
    cout << 2 * f1 * f2 * 3 << endl;

    return 0;
}
