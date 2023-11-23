#include<iostream>
using namespace std;

class Counter{
    friend Counter operator+(Counter c1, Counter c2);
    friend Counter operator*(int m, Counter c);
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
    // }

 
};

// operator + outside of class;
Counter operator+(Counter c1, Counter c2){
    Counter sum = c1.count+c2.count;
    return sum;
 }
 // Multiplication operator
Counter operator*(int m, Counter c){
    Counter sum {m * c.count};
    return sum;
}
int main(){
    Counter number1(3);
    number1.increment();
    number1.print();
    // Addition
    Counter number2(6);
    number2.print();
    Counter number3 = number1 + number2;
    number3.print();
    // Multiplication
    
    Counter number4(5);
    Counter number5 = 20 * number4 ;
    number5.print();
    return 0;
}

