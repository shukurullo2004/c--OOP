#include <iostream>
using namespace std;
#include <string>
#include <vector>

class YoutubeChannel{
    private:
    string name;
    int num;
    string OwnerName;
    vector<string> videos;
    protected:

    public:
    YoutubeChannel(string name,string OwnerName):name{name}, OwnerName{OwnerName}{};
    
    void Publishvideos(string vid){
        videos.push_back(vid);
    }
    void getInfo(){
        cout << "channel name: "<< name << endl;
        cout << "owner name: " << OwnerName << endl;
        for (size_t i = 0; i < videos.size(); i++)
        {
           cout << "videos: "<< videos[i]<<endl;
        }
         
    }
   
};
class Anotherchannel:public YoutubeChannel{
    public:
    Anotherchannel(string name, string OwnerName):YoutubeChannel(name,OwnerName){}
};

int main(){
    YoutubeChannel my_channel("Shukurullo's Adventures","Meliboev Shukurullo");
    my_channel.getInfo();
    Anotherchannel another_channel("Another channel", "Noone");
    another_channel.getInfo();

    return 0;
}