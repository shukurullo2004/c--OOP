#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
class IntArray{
    friend void setArray(const int datas[], int arSize,IntArray &ar);
    friend void displayArray(IntArray& ar);

    private:
    int m_len;
    int *m_data{nullptr};

    public:
    IntArray(int len){
        m_len = len;
        m_data = new int[m_len]; 
    }
   
    ~IntArray() {
        delete[] m_data;
    }
};

void setArray(const int datas[], int arSize, IntArray &ar){
        for(int i = 0 ; i < arSize; i ++){
            ar.m_data[i] = datas[i];
        }
    }

void displayArray(IntArray& ar){
    
        for(int i = 0 ; i < ar.m_len; i ++){
            cout <<"["<< setw(1) << i << setw(1) << "]" << ar.m_data[i] << endl;
        }
    }

const int arSize = 20;

int main() {
    int i;
    int data[arSize];
    IntArray ar(arSize);

    // Seed for random numbers
    srand(static_cast<unsigned int>(time(NULL)));

    // Fill data array with random values
    for (i = 0; i < arSize; ++i) {
        data[i] = rand() % 100;
    }

    // Set and display the array using IntArray class
    setArray(data,arSize,ar);
    std::cout << "Array values: "<< endl;
    displayArray(ar);
    return 0;
    }