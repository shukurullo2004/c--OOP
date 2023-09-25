#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int birth_date;
    string born_place;
    string university;
    vector<string> interests;
};

int main() {
    Student talaba;
    talaba.name = "Shukurullo Meliboev";
    talaba.birth_date = 2004;
    talaba.born_place = "Syrdarya, Uzbekistan";
    talaba.university = "Inha University, South Korea";
    talaba.interests = {"Machine Learning", "Football (Liverpool)", "Hiking"};

    cout << "Name: " << talaba.name << endl;
    cout << "Birth Date: " << talaba.birth_date << endl;
    cout << "Born Place: " << talaba.born_place << endl;
    cout << "University: " << talaba.university << endl;

    cout << "Interests:" << endl;
    for (string interest : talaba.interests) {
        cout << interest << endl;
    }

    return 0;
}
