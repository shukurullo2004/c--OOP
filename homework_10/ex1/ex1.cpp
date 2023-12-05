#include<iostream>
#include<string>

using namespace std;

int main() {
    // Declare and initialize two strings
    string str1 = "I like";
    string str2 = " string class";

    // Concatenate str1 and str2
    string str3 = str1 + str2;

    // Output the strings
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    // Concatenate str2 to str1 and check if it's equal to str3
    str1 += str2;
    if (str1 == str3)
        cout << "The two strings are identical." << endl;
    else
        cout << "The two strings are different." << endl;

    // Declare an empty string and input a string from the user
    string str4;
    cout << "Enter a string: ";
    cin >> str4;
    cout << "You entered: " << str4 << endl;

    return 0;
}
