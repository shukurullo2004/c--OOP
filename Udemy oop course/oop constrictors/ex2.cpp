#include <iostream>

class Array {
public:
    int* data;
    int size;

    Array(int s) : size(s) {
        data = new int[size];
    }

    // Copy constructor for deep copying
    Array(const Array& other) : size(other.size), data(new int[other.size]) {
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }

    ~Array() {
        delete[] data;
    }
};

int main() {
    Array arr1(3);
    arr1.data[0] = 1;
    arr1.data[1] = 2;
    arr1.data[2] = 3;

    // Create a new array as a copy of arr1 (deep copy)
    Array arr2 = arr1;

    // Modify arr1 to show the independence of arr2
    arr1.data[0] = 10;

    std::cout << "arr1: " << arr1.data[0] << ", " << arr1.data[1] << std::endl; // Output: 10, 2
    std::cout << "arr2: " << arr2.data[0] << ", " << arr2.data[1] << std::endl; // Output: 1, 2

    return 0;
}
