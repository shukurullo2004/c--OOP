#include <iostream>
using namespace std;

class YoutTubeChannel{
    // friend ostream& operator<<(ostream& Cout, YoutTubeChannel &ch);
public:
int subcribers;
string name;
public:
YoutTubeChannel(string name,int subcribers){
    this->name = name;
    this->subcribers = subcribers;
}
};
ostream& operator<<(ostream& Cout, YoutTubeChannel &ch){
   Cout << "name: " << ch.name<< endl;
   Cout << "subcribers: " << ch.subcribers << endl;
   return Cout;
}
int main(){
    YoutTubeChannel yt1("Shukurulloh lifes", 100);
    YoutTubeChannel yt2("heaven news", 100000000);
    cout << yt1 <<yt2;
    operator<<(cout,yt1);

// void ni orniga ostream& va return ni qoshsak, 1 line print qilish mumkin va 

    return 0;
}
