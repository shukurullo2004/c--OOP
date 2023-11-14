#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int birth_date;
    string born_place;
    vector<string> interests;

    // Correct the constructor to initialize members properly
    Student(int tugilgan, string joy, string ism) {
        birth_date = tugilgan;
        born_place = joy;
        name = ism;
    }

    void getinfo() {
        cout << "birth_date: " << birth_date << endl;
        cout << "name: " << name << endl;
        cout << "born_place: " << born_place << endl;
        cout << endl;
        for (string interest : interests) {
            cout << "interest: " << interest << endl;
        }
    }
};

int main() {
    Student talaba(20040225, "Meliboev Shukurullo", "Sirdaryo");

    talaba.interests.push_back("chess");
    talaba.interests.push_back("football");
    talaba.interests.push_back("hiking");
    talaba.interests.push_back("gaming");

    talaba.getinfo();

    return 0;
}
