#include <iostream>

using namespace std;

void inputArray(int* arr, int size) {
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int searchIndex(int* arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Element found, return the index
        }
    }
    return -1; // Element not found
}

int main() {
    int size, elements, index;

    cout << "Enter size of the array: ";
    cin >> size;

    int* buf = new int[size]; // Allocate memory for the array

    inputArray(buf, size);

    cout << "Enter element to search: ";
    cin >> elements;
    index = searchIndex(buf, size, elements);

    if (index == -1) {
        cout << elements << " does not exist in the array." << endl;
    } else {
        cout << elements << " is found in the array at index " << index << "." << endl;
    }

    delete[] buf; // Deallocate the memory

    return 0;
}
