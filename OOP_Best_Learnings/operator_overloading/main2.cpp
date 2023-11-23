#include <iostream>
#include <vector>
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

class MyCollaction{
public:
vector<YoutTubeChannel>mychannels;
    void operator+=(YoutTubeChannel &ytchannel)
    {
        this->mychannels.push_back(ytchannel);
    }
    void operator-=(YoutTubeChannel &ytchannel)
    {
        this->mychannels.remove(ytchannel);
    }
};

ostream& operator<<(ostream& Cout, MyCollaction &ch){
    for(YoutTubeChannel ytchannel:ch.mychannels){
        Cout << ytchannel <<endl;
    }
    return Cout;
}
int main(){
    YoutTubeChannel yt1("Shukurulloh lifes", 100);
    YoutTubeChannel yt2("heaven news", 100000000);

    // cout << yt1 <<yt2;
    // operator<<(cout,yt1);
// void ni orniga ostream& va return ni qoshsak, 1 line print qilish mumkin va 


    MyCollaction mycollection;
    mycollection +=yt1;
    mycollection +=yt2;
    mycollection -=yt2;
    cout << mycollection;

    return 0;
}
