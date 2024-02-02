#include <iostream>
using namespace std;
class Friction{
   friend ostream&operator<<(ostream&COUT , const Friction &f);
   friend Friction operator*(const Friction &f, const Friction&f2);
   friend Friction operator*( int m, const Friction&f2);
private:
int m_numerator;
int m_denominator;
public :
Friction(int numerator= 0, int denominator = 1):m_numerator{numerator},m_denominator{denominator}{};


};

ostream&operator<<(ostream&COUT, const Friction& f){
    COUT << f.m_numerator << "/" << f.m_denominator ;
    return COUT;
}
Friction operator*(const Friction &f, const Friction&f2){
    int sum = f.m_numerator * f2.m_numerator;
    int  nem = f.m_denominator * f2.m_denominator;
    return Friction(sum, nem);

}
Friction operator*( int m, const Friction&f2){
    Friction sum = m * f2.m_numerator;
    return sum;
    }

    // Friction operator*( int m, const Friction&f2){
    // Friction sum = m * f2.m_numerator;
    // return sum;
    // }

int main(){
    Friction f1(1,3);
    cout<<f1<<endl;
    Friction f2(3,4), f3(6,7);
    cout << f1 * f2 << endl;
    cout << f2 * f3;


    return 0;
}