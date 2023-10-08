
#include "secustring.h"
#include <iostream>

secustring::secustring(std::string word, std::string Password) {
    name = word;
    password = Password;
}

std::string secustring::Getmessage(std::string input_password) {
    if (input_password == password) {
        return name;
    } else {
        return "No real stored message. Invalid Password...";
    }
}

bool secustring::Setmessage(std::string new_string, std::string input_password) {
    if (input_password == password) {
        name = new_string;
        return true;
    } else {
        return false;
    }
}

void secustring::ChangePW(std::string old_password, std::string new_password) {
    if (old_password == password) {
        password = new_password;
        std::cout << "Password changed successfully." << std::endl;
    } else {
        std::cout << "Invalid old password. Password not changed." << std::endl;
    }
}

secustring::~secustring() {
    // Destructor implementation (if needed)
}

