#include <iostream>
#include <string> // Include the string header to use strings
using namespace std;

int main() {
    string foods[5]; // Use string array to store food names
    int size = sizeof(foods) / sizeof(foods[0]);
    string temp;
    
    for (int i = 0; i < size; i++) {
        cout << "Enter the food that you like (q to quit program): " << endl;
        getline(cin, temp);

        if (temp == "q") {
            break;
        } else {
            foods[i] = temp;
        }
    }

    cout << "Your favorite foods:" << endl;
    for (int i = 0; i < size; i++) {
        if (!foods[i].empty()) { // Check if the element is not empty before printing
            cout << foods[i] << endl;
        }
    }

    return 0;
}
