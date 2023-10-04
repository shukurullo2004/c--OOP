#include <iostream>
#include <vector>
using namespace std;
class Student{
public:
    string name;
    int birth_date;
    string born_place;
    vector<string>interests;

};
int main(){
Student talaba;
    talaba.name = "Shukurullo";
    talaba.birth_date = 20040225;
    talaba.born_place = "Syrdaryo, Uzbekistan";
    talaba.interests = {"chess","football", "hiking","gaming"};
    cout << "name: "  << talaba.name << endl;
    cout << "birth_date: "  << talaba.birth_date << endl;
    cout << "born_place: "  << talaba.born_place << endl;
    cout << endl;
    for(string interest:talaba.interests){
        cout << "interest: "  << interest << endl;
    }
    
    return 0;
}
