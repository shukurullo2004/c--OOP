#include <iostream>
using namespace std;
void display(int number){
    cout << "integer number: " << number<<endl;
}
void display(string word){
    cout << "string type: " << word<<endl;
}
void display(char character){
    cout << "character type: " <<character<<endl;
}
void display(double chara){
    cout << "double type: " <<chara<<endl;
}
int main(){
display('A');
display(1234);
display("my world");
display(123.4);
    return 0;
}