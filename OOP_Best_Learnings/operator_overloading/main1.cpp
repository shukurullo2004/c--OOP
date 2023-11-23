#include <iostream>
using namespace std;

class YoutTubeChannel{
    friend void operator<<(ostream& Cout, YoutTubeChannel &ch);
private:
int subcribers;
string name;
public:
YoutTubeChannel(string name,int subcribers){
    this->name = name;
    this->subcribers = subcribers;
}
};
void operator<<(ostream& Cout, YoutTubeChannel &ch){
   Cout << "name: " << ch.name<< endl;
   Cout << "subcribers: " << ch.subcribers << endl;
}
int main(){
    YoutTubeChannel yt1("Shukurulloh lifes", 100);
    cout << yt1;


    return 0;
}
// Xulosa: agar << foydalanmoqchi bolsa void qilib yuqoridagidek ishlat, 
// aks hold agar class nomi bn ishlatmoqchi bolsang :
//  friend ostream& operator<<(ostream& Cout, const YoutTubeChannel &ch);
//  ostream& operator<<(ostream& Cout, const YoutTubeChannel &ch) {
    // Cout << "name: " << ch.name << endl;
    // Cout << "subscribers: " << ch.subscribers << endl;
    // return Cout;  // Return the ostream reference


// Eng ossonni void!
