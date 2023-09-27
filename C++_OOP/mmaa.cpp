#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
  string Name;
  int Birth_date;
  string Born_place;
  string University;
  vector<string> Interests;

  Student(string name, string born_place, string university,
          int Birth_date = 2004) {
    Name = name;
    Birth_date = 2004;
    Born_place = born_place;
    University = university;
  }
  void GetInfo() {
    cout << "Name: " << Name << endl;
    cout << "Birth Date: " << Birth_date << endl;
    cout << "Born Place: " << Born_place << endl;
    cout << "University: " << University << endl;
    cout << "Interests:" << endl;
    for (string interest : Interests) {
      cout << interest << endl;
    }
  }
};
int main() {
  Student talaba("Shukurullo Meliboev", "Syrdarya, Uzbekistan",
                 "Inha University, South Korea");
  talaba.Interests.push_back("Machine Learning");
  talaba.Interests.push_back("Football (Liverpool)");
  talaba.Interests.push_back("Hiking");
  talaba.GetInfo();
  cout << endl;
  Student talaba2("Kiyomov Asadbek", "Urgut,Samarqand", "INHA UNIVERSITY",
                  200410);
  talaba2.Interests.push_back("DeepLearning");
  talaba2.Interests.push_back("Drifting car");
  talaba2.GetInfo();

  return 0;
}
