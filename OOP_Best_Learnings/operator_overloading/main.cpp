#include<iostream>
using namespace std;

class Counter{
    private:
int count;
    public:
    Counter(int num):count{num}{ };
    void increment(){
        count++;
    }
    void print(){
        cout << count << endl;
    }
};
int main(){
    Counter number1(4);
    number1.increment();
    number1.print();


    return 0;
}

