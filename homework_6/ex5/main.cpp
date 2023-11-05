#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
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
    }

    ~IntArray() {
        if (m_data) delete[] m_data;
    }

    // Friend functions to set and display the array
    friend void setArray(IntArray& arr, int* data, int len);
    friend void displayArray(const IntArray& arr);
};

void setArray(IntArray& arr, int* data, int len)
{
    if (arr.m_data && len == arr.m_len) {
        for (int i = 0; i < len; ++i) {
            arr.m_data[i] = data[i];
        }
    }
    else {
        cout << "Invalid array or length provided for setting data." << endl;
    }
}

void displayArray(const IntArray& arr)
{
    if (arr.m_data) {
        for (int i = 0; i < arr.m_len; ++i) {
            cout << arr.m_data[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "Array is empty." << endl;
    }
}

const int arSize = 20;

int main() {
    int i;
    int data[arSize];
    IntArray ar{ arSize };

   srand(static_cast<unsigned int>(time(nullptr)));
    for (i = 0; i < arSize; ++i) data[i] = rand() % 100;

    setArray(ar, data, arSize);
    displayArray(ar);

    return 0;
}
