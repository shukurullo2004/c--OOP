
#ifndef Secustring
#define Secustring

#include <string> // Include the necessary header for std::string

class secustring {
private:
    std::string name;
    std::string password;

public:
    secustring(std::string word, std::string Password);
    std::string Getmessage(std::string input_password);
    bool Setmessage(std::string new_string, std::string input_password);
    void ChangePW(std::string old_password, std::string new_password); 
    ~secustring();
};

#endif
