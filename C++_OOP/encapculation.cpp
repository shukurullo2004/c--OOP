#include <iostream>
#include <vector>
using namespace std;
class Youtubechannel{
    private:
    string ownername;
    int subscriberscount = 0;
    string name;
    vector <string>PublishedVideos;
    public:
     Youtubechannel(string Ownername, int Subscriberscount, string ism){
        ownername = Ownername;
        subscriberscount = Subscriberscount;
        name = ism;
     }
    void getInfo(){
        cout <<ownername << endl;
        cout <<name << endl;
        cout << subscriberscount<<endl;
        for(string video:PublishedVideos){
            cout << video<<endl;
        }
    }
    void subscribers(){
        subscriberscount ++;
    }
    void unsubscribers(){
        if(subscriberscount > 0)
        subscriberscount --;
    }
    void publishvideo(string video){
        PublishedVideos.push_back(video);
    }

};
int main(){
    Youtubechannel mychannel("about life", 12, "Shukurullo Meliboev");
    mychannel.subscribers();
    mychannel.subscribers();
    mychannel.publishvideo("sevgi va o'lim");
    mychannel.publishvideo("Hayot va Dunyo");
    mychannel.getInfo();
    return 0;
}
