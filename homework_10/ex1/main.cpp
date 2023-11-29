#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class InhaString{
    friend ostream& operator <<(ostream & COUT,const InhaString& word);
    friend InhaString operator+(const InhaString &str1,const InhaString &str2);
    friend InhaString operator+=(const InhaString &str1,const InhaString &str2);


private:
    char*m_msg;
    int m_len;
    public:
// note these constructor code on cheet sheet
InhaString(const char word){ 
    m_len = strlen(word);
    m_msg = new char[m_len+1];
    strcpy(m_msg, word);
}
// copy constructor
InhaString(const char & other){
    m_len = other.m_len;
    m_msg = new char[m_len+1];
    strcpy(m_msg, other.m_msg);
}


};

InhaString operator+=(const InhaString &str1,const InhaString &str2){
    InhaString temp;
    temp.m_len = str1.m_len + str2.m_len;
    temp.m_msg = new char[temp.m_len + 1];
    strcpy(temp, str1.m_msg);
    strcpy(temp, str2.m_msg);
    delete[]str1.m_len;
    delete[]str2.m_msg;
    str1.m_len = temp.m_len;
    str1.m_msg = new char[str1.m_len +1];
    strcpy(str1.m_len, temp.m_len);
    strcpy(str1.m_msg, temp.m_msg);
    str2.m_len = temp.m_len;
    str2.m_msg = new char[str2.m_len +1];
    strcpy(str1.m_len, temp.m_len);
    strcpy(str1.m_msg, temp.m_msg);
    return ;
}

//  write on cheet sheet
InhaString operator+(const InhaString &str1,const InhaString &str2){
    InhaString result;
    result.m_len = str1.m_len + str2.m_len;
    result.m_msg = new char[result.m_len + 1];
    strcpy(result.m_msg, str1.m_msg);
    strcpy(result.m_msg, str2.m_msg);
    return result;
}

ostream& operator <<(ostream & COUT,const InhaString& word ){
    COUT << word ;
    return COUT;
}

int main() {
    InhaString str1 = "I like";
    InhaString str2 = " string class";
    InhaString str3 = str1 + str2;

    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    // str1 += str2;

    // if (str1 == str3)
    //     cout << "The two strings are identical." << endl;
    // else
    //     cout << "The two strings are different." << endl;

    // InhaString str4;
    // cout << "Enter a string: ";
    // cin >> str4;
    // cout << "You entered: " << str4 << endl;

    return 0;
}
