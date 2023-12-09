
#include <iostream>
using namespace std;
#include <string>

class SecuString{
    public:
    string name;
    string password;
    SecuString(string names, string passwords):name{names}, password{passwords}{};

    void GetMessage(string ppassword){
        if(password == ppassword){
            cout <<"Password is correct. Name is "<< name << endl;
        }
        else{
            cout << "Invalid password "<< endl;
        }
    }

    void SetMessage(string nname, string npassword ){
        name = nname;
        password = npassword;
        }

    void ChangePW(string old_password, string new_password){
        if(old_password == password){
            password = new_password;
        }
        else{
            cout << "wrong password" << endl;
        }
    }
};
int main() {
    SecuString msg("InhaUniv.", "password1");

    // Testing GetMessage
    std::cout << "1. " << msg.GetMessage("wrongpassword") << std::endl;
    std::cout << "2. " << msg.GetMessage("password1") << std::endl;

    // Testing SetMessage
    std::cout << "3. " << msg.SetMessage("INHAUNIV.", "wrongpassword") << std::endl;
    std::cout << "4. " << msg.GetMessage("password1") << std::endl;
    std::cout << "5. " << msg.SetMessage("INHAUNIV.", "password1") << std::endl;
    std::cout << "6. " << msg.GetMessage("password1") << std::endl;

    // Testing ChangePW
    std::cout << "7. " << msg.ChangePW("password1", "newpassword") << std::endl;
    std::cout << "8. " << msg.GetMessage("newpassword") << std::endl;

    return 0;
}