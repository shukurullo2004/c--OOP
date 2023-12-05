#include <iostream>
using namespace std;

class Person{
    private:
    string name;
    string email;
    int age;
    string gender;
    public:
    Person(string name, string gender, string email, int age):name{name},gender{gender},email{email},age{age}{};

    void introduceMyself(){
        cout << "My name is :" << name << endl;
        cout << "i am "<< gender << " and i am " << age << " years old" << endl;
        cout << "My email address is " << email << endl;
    }
};

int main(){
    Person Ryu{"Victor Ryu", "male" , "1234GCI@inha.ac.kr", 55};
    Ryu.introduceMyself();
    return 0;
}