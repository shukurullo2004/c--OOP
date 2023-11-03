#include <iostream>
using namespace std;

int *apply_all(int* array1, int size1, int* array2, int size2, int& size) {
    size = size1 * size2;
    int *result = new int[size]; 
    int position = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            result[position] = array1[i] * array2[j];
            position++;
        }
    }
    return result;
}

void print(int *result, int size) {
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int size1 = 5;
    int size2 = 3;
    int size = 0; // Initialize size to 0.
    int array2[] = {10, 20, 30};
    int *result = nullptr; // Initialize result to nullptr.

    result = apply_all(array1, size1, array2, size2, size);
    print(result, size);

    delete[] result; // Deallocate the dynamically allocated memory.

    return 0;
}
