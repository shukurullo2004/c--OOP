#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

class IntArray
{
private:
    int m_len{ 0 };
    int* m_data{ nullptr };

public:
    IntArray(int len)
        : m_len{ len }
    {
        m_data = new int[m_len];
        for(int i = 0 ; i<m_len; ++i){
            m_data[i] = 0;
        }
    }
    ~IntArray() {
        if (m_data) delete[] m_data;
    }
    friend class IntArrayHandler;
};

class IntArrayHandler:IntArray{

public:
    IntArrayHandler(int len) : IntArray(len) {};
    IntArrayHandler(int *arr1, int len): IntArray(len){
        for(int i = 0; i < len; ++i){
                m_data[i] = arr1[i];
            }
    }
    void setArray(int *data1, int arSize){
        for(int i = 0 ; i<arSize; ++i){
            m_data[i] = data1[i];
        }
       
    }
    void display(){
        
        for(int i = 0 ; i<arSize; ++i){
            cout << "[" << i << "]" << m_data[i]<< endl;
            
        }
    }
    void stat(){
    
        double avr = 0;
        int i = 0;
        int sum = 0;
        for(int i = 0 ; i<arSize; ++i){
            sum = sum +m_data[i];
            ++i;
        }
        avr = sum / i;
        cout << "elements: " << i << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << avr;
    }
};


const int arSize = 20;

int main() {
    int i;
    int data1[arSize], data2[arSize];
    IntArray ar1{ arSize }, ar2{ arSize };
    srand((unsigned int)time(NULL));
    for (i = 0; i < arSize; ++i) {
        data1[i] = rand() % 100;
        data2[i] = rand() % 100;
    }
    IntArrayHandler handler{ &ar1 };
    handler.setArray(data1, arSize);
    cout << "== ar1: displayArray() ===" << endl;
    handler.displayArray();
    cout << "====== ar1: stat() =======" << endl;
    handler.stat();
    cout << "==========================" << endl;
    handler.setIntArray(&ar2);
    handler.setArray(data2, arSize);
    cout << endl << "== ar2: displayArray() ===" << endl;
    handler.displayArray();
    cout << "====== ar2: stat() =======" << endl;
    handler.stat();
    cout << "==========================" << endl;
    return 0;
}
