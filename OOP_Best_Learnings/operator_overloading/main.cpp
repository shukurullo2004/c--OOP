#include<iostream>
using namespace std;

class Counter{
    friend Counter operator+(Counter c1, Counter c2);
    private:
int count;
    public:
    Counter(int num):count{num}{ };
    void increment(){
        count++;
    }
    void print(){
        cout <<"Num: "<<count << endl;
    }
    // inside of class operator+;

    // Counter operator+(Counter const& counter){
    //     Counter sum = (count+counter.count);
    //     return sum;
    // }s
 
};

// operator + ouyside of class;
Counter operator+(Counter c1, Counter c2){
    Counter sum = c1.count+c2.count;
    return sum;
 }
int main(){
    Counter number1(3);
    number1.increment();
    number1.print();
    Counter number2(6);
    number2.print();
    Counter number3 = number1 + number2;
    number3.print();
    return 0;
}

