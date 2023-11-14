#include <iostream>
using namespace std;
#include <string>
#include <vector>

class YoutubeChannel{
    private:
    string name;
    int num;
    vector<string> videos;
    protected:
    string OwnerName;
    int quality;
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
    void CheckAnalytics(){
        if(quality < 5){
            cout << OwnerName << "has bad quality" << endl;
            }
        else
            cout << OwnerName << "has high-quality" << endl;
    }
   
};
class CookingCHannel:public YoutubeChannel{
    public:
    CookingCHannel(string name, string OwnerName):YoutubeChannel(name,OwnerName){}

    void practice(){
        quality++;
        cout << OwnerName << " is cooking so sweet  cooks and ceks " <<endl;
    }
};
class SingingCHannel:public YoutubeChannel{
    public:
    SingingCHannel(string name, string OwnerName):YoutubeChannel(name,OwnerName){}
    
    void practice(){
        quality++;
        cout << OwnerName << " is singing very amazing" << endl;
    }
};


int main() {
    CookingCHannel another_channel("Amy's cooking channel", "Amy");
    another_channel.practice();
    another_channel.practice();

    SingingCHannel my_channel("Shukurullo's Nasheeds","Meliboev Shukurullo");
    my_channel.practice();
    my_channel.practice();
    my_channel.practice();
    my_channel.practice();
    my_channel.practice();
    // my_channel.CheckAnalytics();
    // another_channel.CheckAnalytics();

    YoutubeChannel *ytch1 = &another_channel;
    YoutubeChannel *ytch2 = &my_channel;
    ytch1->CheckAnalytics();
    ytch2->CheckAnalytics();
    return 0;
}