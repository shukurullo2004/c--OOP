#include<iostream>
#include <cstring>
using namespace std;
class InhaString{
friend ostream& operator<<(ostream& cout, const InhaString& word);
friend InhaString operator+(const InhaString & word1, const InhaString & word2);
// friend InhaString& operator+=(const InhaString& other);
private:
char* m_msg;
int m_len;
public:
// def const for sum
InhaString():m_msg{nullptr}, m_len{0}{};
//  with constructor it will be inhastriing type
InhaString(const char* word){
m_len = strlen(word);
m_msg  = new char[m_len +1];
strcpy(m_msg, word);
}

// copy const for + op 
InhaString(const InhaString& other){
    m_len = other.m_len;
    m_msg = new char[m_len +1];
    strcpy(m_msg, other.m_msg);
}
InhaString& operator=(const InhaString& other) {
    if (this != &other) {
        delete[] m_msg;
        m_len = other.m_len;
        m_msg = new char[m_len + 1];
        strcpy(m_msg, other.m_msg);
    }
    return *this;
}
InhaString& operator+=(const InhaString& other) {
    // Calculate the new length
    int newLen = m_len + other.m_len;

    // Create a new buffer
    char* newMsg = new char[newLen + 1];

    // Copy the existing content to the new buffer
    strcpy(newMsg, m_msg);

    // Concatenate the content of the other string
    strcat(newMsg, other.m_msg);

    // Delete the existing buffer
    delete[] m_msg;

    // Update the length and pointer
    m_len = newLen;
    m_msg = newMsg;

    // Return a reference to the modified object
    return *this;
}

// Add this inside your InhaString class definition
bool operator==(const InhaString& other) const {
    return strcmp(m_msg, other.m_msg) == 0;
}

~InhaString(){
    delete[] m_msg;
};
};
// with that we  can print it
ostream& operator<<(ostream& cout, const InhaString& word){
    cout << word.m_msg;
    return cout;
}

InhaString operator+(const InhaString &word1, const InhaString &word2){
       InhaString sum;
       sum.m_len = word1.m_len + word2.m_len;
       sum.m_msg = new char[sum.m_len + 1];
       strcpy(sum.m_msg, word1.m_msg);
       strcat(sum.m_msg, word2.m_msg);

        return sum;
}







int main() {

    InhaString str1 = "I like";
    InhaString str2 = " string class";   
    InhaString str3 = str1 +str2; 
    
 
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    str1 += str2;
    cout << str1 << endl;
    if (str1 == str3)
         cout << "The two strings are identical." << endl;
     else
         cout << "The two strings are different." << endl;
    string str4;
    cout << "Enter a string: ";
    cin >> str4;
    cout << "You entered: " << str4 << endl;

    return 0;
}

    
    
    