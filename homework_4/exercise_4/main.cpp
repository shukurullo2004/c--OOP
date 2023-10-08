

#include <iostream>
#include "secustring.h"

int main() {
    secustring msg("InhaUniv.", "password1");

    std::cout << "==GetMessage==" << std::endl;
    std::cout << "1. " << msg.Getmessage("wrongpassword") << std::endl;
    std::cout << "2. " << msg.Getmessage("password1") << std::endl;

    std::cout << "==SetMessage==" << std::endl;
    std::cout << "3. " << msg.Setmessage("INHAUNIV.", "wrongpassword") << std::endl;
    std::cout << "4. " << msg.Getmessage("password1") << std::endl;
    std::cout << "5. " << msg.Setmessage("INHAUNIV.", "password1") << std::endl;
    std::cout << "6. " << msg.Getmessage("password1") << std::endl;

    std::cout << "==ChangePW==" << std::endl;
    msg.ChangePW("password1", "newpassword");
    std::cout << "7. " << msg.Getmessage("newpassword") << std::endl;

    return 0;
}