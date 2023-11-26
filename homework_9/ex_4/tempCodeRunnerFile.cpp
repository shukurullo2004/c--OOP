#include <iostream>
using namespace std;

class Friction {
    friend Friction operator-(Friction & f1);

    //  ex#3 codes following
    friend ostream& operator<<(ostream& COUT, const Friction& f);
    friend Friction operator*(const Friction& f1, const Friction& f2);
    friend Friction operator*(const Friction& f2, int m);
    friend Friction operator*(int m, const Friction& f2);
    friend Friction operator+(const Friction &f1, const Friction &f2);
    friend Friction operator-(const Friction &f1, const Friction &f2);
    friend Friction operator-(int m, const Friction &f2);
    friend Friction operator+(int m, const Friction &f2);
private:
    int m_numerator;
    int m_denominator;

public:
    Friction(int numerator = 0, int denominator = 1) : m_numerator{ numerator }, m_denominator{ denominator } {cancel();};
 void cancel() {
    int gcd;
    if(m_denominator > 0 && m_numerator>0){
        if (m_denominator > m_numerator) {
            gcd = m_numerator;
            do {
                if (m_denominator % gcd == 0 && m_numerator % gcd == 0) {
                    m_denominator /= gcd;
                    m_numerator /= gcd;
                }
                gcd++;
            } while (gcd <= m_denominator);
        } else {
            gcd = m_denominator;
            do {
                if (m_denominator % gcd == 0 && m_numerator % gcd == 0) {
                    m_denominator /= gcd;
                    m_numerator /= gcd;
                }
                gcd++;
            } while (gcd <= m_numerator);
        }
    }
    else{
        if (m_denominator < m_numerator) {
            gcd = m_denominator;
            do {
                if (m_denominator % gcd == 0 && m_numerator % gcd == 0) {
                    m_denominator /= gcd;
                    m_numerator /= gcd;
                }
                gcd++;
            } while (gcd <= m_numerator);
        } else {
            gcd = m_numerator * (-1);
            do {
                if (m_denominator % gcd == 0 && m_numerator % gcd == 0) {
                    m_denominator /= gcd;
                    m_numerator /= gcd;
                }
                gcd++;
            } while (gcd <= m_denominator);
        }
    }

}
// agar std::cout << -(-f1) << std::endl; shuni print qilmoqchi bo'lsangiz  pastadigicha kod bolishi va class ichida turishi kk

   Friction operator-()const{
    return(-m_numerator);
}
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

Friction operator+(const Friction &f1, const Friction &f2){
    int denominator = f1.m_denominator * f2.m_denominator;
    int add = (denominator / f1.m_denominator) * f1.m_numerator + (denominator / f2.m_denominator) * f2.m_numerator;
    return Friction(add,denominator);
}

Friction operator-(const Friction &f1, const Friction &f2){
    int denominator = f1.m_denominator * f2.m_denominator;
    int numer = (denominator / f1.m_denominator) * f1.m_numerator-(denominator / f2.m_denominator) * f2.m_numerator;
    if(denominator  < 0 && numer > 0 ){
        denominator= denominator * (-1);
        numer = numer * (-1);
    }
    if(denominator  < 0 && numer < 0 ){
        denominator= denominator * (-1);
        numer = numer * (-1);
    }
    return Friction(numer,denominator);
}

Friction operator-(int m, const Friction &f2){
    int denominator = 1 * f2.m_denominator;
    int subs = denominator * m - f2.m_numerator;
    if(denominator  < 0 ){
        denominator= denominator * (-1);
        subs = subs * (-1);
    }
    if(denominator  < 0 && subs < 0 ){
        denominator= denominator * (-1);
        subs = subs * (-1);
    }
    return Friction(subs,denominator);
}

Friction operator+(int m, const Friction &f2){
    int denominator = 1 * f2.m_denominator;
    int add = denominator * m + f2.m_numerator;
    return Friction(add,denominator);
}
// Ex:3 coding above
Friction operator-(Friction & f1){
    Friction m_numerator = f1.m_numerator * (-1);
    return m_numerator;
}
// agar class nomi bn operator ochilsa return bo'ladi agar void bn ochilsa bo'lmaydi,
//  point shundaki faqatgina operator bo'lganligi uchun return bo'lyapti aks holda constructor sifatida bo'lmasligi kk edi

int main() {
    Friction f1(1, 2), f2(3, 4);

    std::cout << f1 << "," << f2 << std::endl;
    std::cout << -f1 << "," << -f2 << std::endl;
    std::cout << -(-f1) << std::endl;

    return 0;
}