#include <iostream>
using namespace std;
class Friction{
    friend ostream&operator<<(ostream&COUT , const Friction &f);
    friend Friction operator*(Friction &f1 ,Friction &f2);
    friend Friction operator*(Friction &f2, int m);
    friend Friction operator*(int m, Friction &f2);
    // friend Friction operator*(int m, Friction &f1,Friction &f2, int n);
private:
int m_numerator;
int m_denominator;
public :
Friction(int numerator= 0, int denominator = 1):m_numerator{numerator},m_denominator{denominator}{};
};
ostream&operator<<(ostream&COUT ,const Friction &f){
    COUT <<f.m_numerator <<"/" << f.m_denominator;
    return COUT;
}
Friction operator*( Friction &f1, Friction &f2){
    int numerator = (f1.m_numerator * f2.m_numerator);
    int denominator = (f1.m_denominator *f2.m_denominator);
    return Friction(numerator,denominator);
}
Friction operator*(Friction &f2, int m){
    int numerator = (m * f2.m_numerator);
    int denominator = (f2.m_denominator);
    return Friction(numerator,denominator);
}
Friction operator*(int m, Friction &f2){
    int numerator = (m * f2.m_numerator);
    int denominator = (f2.m_denominator);
    return Friction(numerator,denominator);
}
// Friction operator*(int m, Friction &f1,Friction &f2, int n){
//     int numerator = (m * f2.m_numerator * f1.m_numerator * n);
//     int denominator = (f2.m_denominator * f1.m_denominator);
//     return Friction(numerator,denominator);
// }

int main(){
    Friction f1{1,2}, f2{3,4};
    cout << f1 << ", " << f2 << endl;
    cout << f1 * f2 << endl;
    cout << f1 * 2 << endl;
    cout << 3 * f2 << endl;
    // cout << 2 * (f1 * f2) * 3 << endl;


return 0;
}
