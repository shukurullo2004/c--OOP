#include <iostream>
#include <string>
using namespace std;







class InhaString{
private:
    char*m_msg;
    int m_len;
    public:
// note these code on cheet sheet
InhaString(const char word){ 
    m_len = strlen(word);
    m_msg = new char[m_len+1];
    strcpy(m_msg, word);
}

ostream& operator <<(ostream & COUT,const InhaString& word ){
    COUT << word ;
    return COUT;
}

InhaString operator+(const InhaString &str1,const InhaString &str2){
    return InhaString(str1 + str2);
}
InhaString operator+=(const InhaString & str1, const InhaString &str2){
   InhaString str1 +=str2;
    return str1;
}
};

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
