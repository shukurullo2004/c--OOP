#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    std::string gender;
    int age;
    std::string email;

public:
    Person(const std::string &name, const std::string &gender, int age, const std::string &email)
        : name(name), gender(gender), age(age), email(email) {}

    
    void introduceMyself() {
        std::cout << "My name is " << name << "." << std::endl;
        std::cout << "I am " << gender << " and " << age << " years old." << std::endl;
        std::cout << "My email address is " << email << "." << std::endl;
    }
};

int main() {
    Person ryu = {"Victor Ryu", "male", 30, "IGS2130v1@inha.ac.kr"};
    Person laura = {"Laura Lee", "female", 23, "IGS2130v2@inha.ac.kr"};

    ryu.introduceMyself();
    std::cout << std::endl;
    laura.introduceMyself();

    return 0;
}
