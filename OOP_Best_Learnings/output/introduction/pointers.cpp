#include <iostream>
using namespace std;

void getMinandMax(int numbers[], int size, int *min, int *max) {
    *min = numbers[0]; // Initialize min and max with the first element of the array
    *max = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > *max) {
            *max = numbers[i]; // Update max if a larger number is found
        }
        if (numbers[i] < *min) {
            *min = numbers[i]; // Update min if a smaller number is found
        }
    }
}

int main() {
    int numbers[] = {12, 3, 45, 6, 43, 1, 100, 34};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Welcome to Shukurullo's program" << endl;

    int kichik, katta;
    getMinandMax(numbers, size, &kichik, &katta);
    
    cout << "Your max and min Numbers: " << katta << '\n' << kichik << endl;
    
    return 0;
}
