#include <iostream>
using namespace std;

class YoutTubeChannel{
private:
int subcribers;
string name;
public:
YoutTubeChannel(string name,int subcribers){
    this->name = name;
    this->subcribers = subcribers;
}


};

int main(){
    YoutTubeChannel yt1("Shukurulloh lifes", 100);
    cout << yt1<<endl;


    return 0;
}
