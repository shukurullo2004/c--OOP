#include <iostream>
using namespace std;

int searchArray(string array[], string needproduct, int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] == needproduct)
            return i;
    }
    return -1;
}

int main() {
    cout << "Welcome to my program: " << endl;
    string menu[] = {"olma", "banan", "nok", "behi"};
    int size = sizeof(menu) / sizeof(menu[0]);

    cout << "What product do you need? " << endl;
    string product;
    cin >> product;

    int answer = searchArray(menu, product, size);
    if (answer != -1)
        cout << "Your product is at index " << answer << endl;
    else
        cout << "We cannot find it" << endl;

    return 0;
}
