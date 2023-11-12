#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

class IntArray
{
    friend class IntArrayHandler;

private:
    int m_len{ 0 };
    int* m_data{ nullptr };

public:
    IntArray(int len)
        : m_len{ len }
    {
        m_data = new int[m_len];

        for (size_t i = 0; i < m_len; i++)
        {
            m_data[i] = 0;
        }
    }

    void setArray(int array[], int size)
    {
        for (size_t i = 0; i < size; i++)
        {
            m_data[i] = array[i];
        }
    }

    void displayArray()
    {
        for (size_t i = 0; i < m_len; i++)
        {
            cout << "[" << i << "]" << setw(2) << m_data[i] << endl;
        }
    }

    void stat()
    {
        for (size_t i = 0; i < m_len; i++)
        {
            m_data[i] = 0;
        }
    }

    ~IntArray()
    {
        if (m_data) delete[] m_data;
    }
};

class IntArrayHandler : public IntArray
{
public:
    // IntArrayHandler(int size) : IntArray(size) {}

    // void setIntArray(int array[])
    // {
    //     setArray(array, m_len);
    // }
    IntArrayHandler(IntArray *arr) : IntArray(arr->m_len)
    {
        setArray(arr->m_data, m_len);
    }
    void setIntArray(IntArray *arr)
    {
        setArray(arr->m_data, m_len);
    }
};

const int arSize = 20;

int main()
{
    int i;
    int data1[arSize], data2[arSize];
    IntArray ar1{ arSize }, ar2{ arSize };
    srand((unsigned int)time(NULL));

    for (i = 0; i < arSize; ++i)
    {
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
    
    cout << "== ar2: displayArray() ===" << endl;
    handler.displayArray();
    cout << "====== ar2: stat() =======" << endl;
    handler.stat();
    cout << "==========================" << endl;

    return 0;
}
