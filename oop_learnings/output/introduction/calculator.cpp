#include <iostream>
using namespace std;
int main(){
    float num1, num2;
    char operation;
    cout << "<--------------Shukurullo's Calculator\n-------------->"<<endl;
    cout << "Enter first number and operation second number: ";
    cin >> num1 >> operation >> num2;

    switch (operation){
        case '-':
            cout << num1<< '-' << num2 << "=" << num1 - num2 << endl; break;
        case '+':
            cout << num1<< '+' << num2 << "=" << num1 + num2 << endl; break;
        case '*':
            cout << num1<< '*' << num2 << "=" << num1 * num2 << endl; break;
        case '/':
            cout << num1<< '/' << num2 << "=" << num1 / num2 << endl; break;
        case '%':
            bool isNum1Int, isNum2Int;
             isNum1Int = ((int)num1 == num1);
             isNum2Int = ((int)num2 == num2);
             if (isNum1Int && isNum2Int){
                cout << num1 << "%"<< num2 << '=' << (int)num1 % (int)num2 << endl;
                break;
                }
            else{
                    cout << "jinnimisan bu errorku: cannot use % operator with float numbers" << endl;
                    break;
             }
    
        default:
            cout << "togri amal kirit error: operation is not valid" << endl;
            break;
    }
    return 0;
}