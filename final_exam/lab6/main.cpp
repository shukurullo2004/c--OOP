#include <iostream>
#include <string>

class SecuString {
private:
    std::string name;
    std::string password;

public:
    // Constructor to initialize name and password
    SecuString(const std::string& names, const std::string& passwords) : name{names}, password{passwords} {};

    // Getter for name
    const std::string& GetName() const {
        return name;
    }

    // Method to check if the provided password matches the stored password
    void GetMessage(const std::string& ppassword) const {
        if (password == ppassword) {
            std::cout << "Password is correct. Name is " << name << std::endl;
        } else {
            std::cout << "Invalid password" << std::endl;
        }
    }

    // Setter for name and password
    void SetMessage(const std::string& nname, const std::string& npassword) {
        name = nname;
        password = npassword;
        std::cout << "Name and password set successfully." << std::endl;
    }

    // Method to change the password if the old password matches
    void ChangePW(const std::string& old_password, const std::string& new_password) {
        if (old_password == password) {
            password = new_password;
            std::cout << "Password changed successfully." << std::endl;
        } else {
            std::cout << "Wrong password" << std::endl;
        }
    }
};

int main() {
    // Creating an instance of the SecuString class
    SecuString msg("InhaUniv.", "password1");

    // Testing GetMessage
    std::cout << "1. "; msg.GetMessage("wrongpassword");  // Output: Invalid password
    std::cout << "2. "; msg.GetMessage("password1");      // Output: Password is correct. Name is InhaUniv.

    // Testing SetMessage
    std::cout << "3. "; msg.SetMessage("INHAUNIV.", "wrongpassword");  // Setting new name and password
    std::cout << "4. "; msg.GetMessage("password1");                   // Output: Invalid password
    std::cout << "5. "; msg.SetMessage("INHAUNIV.", "password1");      // Setting new name and password
    std::cout << "6. "; msg.GetMessage("password1");                   // Output: Password is correct. Name is INHAUNIV.

    // Testing ChangePW
    std::cout << "7. "; msg.ChangePW("password1", "newpassword");     // Changing password
    std::cout << "8. "; msg.GetMessage("newpassword");                // Output: Password is correct. Name is INHAUNIV.

    return 0;
}
