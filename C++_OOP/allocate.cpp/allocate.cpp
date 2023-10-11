#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    void print(){
        cout << name << endl;
    }
    Student(string n = ""){
        name = n;
    }
    ~Student(){
        cout <<"Succesfully deleted constructor!" << endl;
    }
};

int main(){
    Student s1{"Shukurullo"};
    s1.print();
    Student *s2 = new Student;
    (*s2).name = "Azamat";
    s2->print();
    delete s2;
    return 0;
}