#include <iostream>
#include <cstring> // You should include the <cstring> header for string-related functions.
using namespace std;

struct Student {
    int ID;
    char name[10];
    double height;
};

int main() {
    struct Student s; // Declare a struct variable s of type Student.
    
    // Assign values to the members of the struct.
    s.ID = 123;
    s.name = "John"; // Use strcpy to copy a string into the name field.
    s.height = 175.5;

    // Print the values of the struct members.
    cout << "ID: " << s.ID << endl;
    cout << "Name: " << s.name << endl;
    cout << "Height: " << s.height << endl;

    return 0;
}
