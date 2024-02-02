#include <iostream>
using namespace std;
class Friction{
   friend ostream&operator<<(ostream&COUT , const Friction f);
private:
int m_numerator;
int m_denominator;
public :
Friction(int numerator= 0, int denominator = 1):m_numerator{numerator},m_denominator{denominator}{};


};
ostream&operator<<(ostream&COUT ,const Friction f){
    COUT <<f.m_numerator <<"/" << f.m_denominator;
    return COUT;
}


int main(){

    Friction f1{1,2}, f2{3,4};
    cout << f1 << ", " << f2 << endl;
    
return 0;
}
