#include <iostream>
using namespace std;

int getMin(int numb[], int size) { 
    int min = numb[0];
    for (int i = 1; i < size; i++) {
        if (numb[i] < min) {
            min = numb[i];
        }
    }
    return min;
}

int getMax(int numb[], int size) { 
    int max = numb[0];
    for (int i = 1; i < size; i++) {
        if (numb[i] > max) { 
            max = numb[i];
        }
    }
    return max;
}

double getAvr(int numb[], int size) { 
    double avrg = 0; 
    for (int i = 0; i < size; i++) {
        avrg += numb[i];
    }
    avrg = avrg / size; 
    return avrg;
}

int main() {
    int size;
  
    cout << "Enter size of array that you want: ";
    cin >> size;
    int numbers[size];
    
    for (int i = 0; i < size; i++) {
        cout << "Input integer number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    
    cout << "Max value is " << getMax(numbers, size) << endl;
    cout << "Min value is " << getMin(numbers, size) << endl;
    cout << "Average value is " << getAvr(numbers, size) << endl;
    
    return 0;
}
