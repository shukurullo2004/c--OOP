#include <iostream>
using namespace std;

class Student{
    private:
        string ism;
        int id;
        string *qiziqish;
    public:
        Student(string name, int iid, string *interest){
            ism = name;
            id = iid;
            *qiziqish = new string[];
        }

};