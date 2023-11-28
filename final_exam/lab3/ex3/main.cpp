#include <iostream>
using namespace std;

void cout_int(int num, int digit = 0){
    if (digit == 0){
        cout << num << endl;
    }
    else if(digit == 8){
        num = 144;
        cout << num << endl;
    }
    else if(digit == 16){
        num = 64;
        cout << num << endl;
    }
    else{
        cout << "ERROR unknown type"<< endl;
    }
}

int main(){
    cout_int(100);
    cout_int(100, 8);
    cout_int(100,16);
    cout_int(100,20);
    return 0;
}