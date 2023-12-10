#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

class IntArray
{
    friend class IntArrayHandler;
private:
    int m_len{0};
    int *m_data{nullptr};

public:
    IntArray(int len) : m_len{len}
    {
        m_data = new int[m_len];
        for (size_t i = 0; i < m_len; i++)
        {
            m_data[i] = 0;
        }
        
    }
    IntArray(){};

    // void setArray(int data[], int arSize){
    //     for(int i = 0; i < arSize; i ++){
    //         m_data[i] = data[i];
    //     }
    // }
    // void displayArray(){
    //     for(int i = 0; i < m_len; i ++){
    //         cout << "[" << setw(1)  << i <<setw(1) << "]" <<m_data[i]<<endl;
    //     }
    // }

    ~IntArray()
    {
        if (m_data)
            delete[] m_data;
    }
};

class IntArrayHandler{
    private:
    IntArray* kim;
    public:
    IntArrayHandler(IntArray* a):kim{a}{};

    void setArray(int data[], int arSize){
        for(int i = 0; i < arSize; i ++){
            kim->m_data[i] = data[i];
        }
    }
    void displayArray(){
        for(int i = 0; i < kim->m_len; i ++){
            cout << "[" << setw(1)  << i <<setw(1) << "]" <<kim->m_data[i]<<endl;
        }
    }
    void setIntArray(IntArray *a){
        kim->m_len = a->m_len;
        for (size_t i = 0; i < kim->m_len; i++)
        {
            kim->m_data[i] = a->m_data[i];
        }
        
    }

};

const int arSize = 20;

int main() {
    int i;
    int data1[arSize], data2[arSize];

    srand(static_cast<unsigned int>(time(NULL)));

    for (i = 0; i < arSize; ++i) {
        data1[i] = rand() % 100;
        data2[i] = rand() % 100;
    }

    IntArray ar1(arSize), ar2(arSize);
    IntArrayHandler handler(&ar1);

    handler.setArray(data1, arSize);

    std::cout << "==ar1:displayArray()===" << std::endl;
    handler.displayArray();

    // std::cout << "======ar1:stat()=======" << std::endl;
    // handler.stat();

    // std::cout << "==========================" << std::endl;

    handler.setIntArray(&ar2);
    handler.setArray(data2, arSize);

    std::cout << std::endl << "==ar2:displayArray()===" << std::endl;
    handler.displayArray();

    std::cout << "======ar2:stat()=======" << std::endl;
    // handler.stat();

    // std::cout << "==========================" << std::endl;

    return 0;
}