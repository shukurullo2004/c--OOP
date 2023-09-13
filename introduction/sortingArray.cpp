#include <iostream>
using namespace std;

void sortArray(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap array[j] and array[j+1]
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    cout << "Welcome to my program" << endl;
    int array[] = {5, 7, 9, 4, 2, 1, 0, 34, 13, 3};
    int size = sizeof(array) / sizeof(array[0]);

    sortArray(array, size);

    cout << "Your answer is : ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
