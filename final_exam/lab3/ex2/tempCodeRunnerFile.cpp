#include <iostream>
using namespace std;

void display(int num){
    cout << num << endl;
}
void display(string num){
    cout << num << endl;
}
void display(double num){
    cout << num << endl;
}
int  main(){
    display(89);
    display("a");
    display(13.123);
    
    return 0;
}