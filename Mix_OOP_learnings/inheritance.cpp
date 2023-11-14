#include <iostream>
#include <vector>
using namespace std;
class Youtubechannel{
    private:
    
    int subscriberscount = 0;
    string name;
    vector <string>PublishedVideos;
    protected:
    string ownername;
    public:
     Youtubechannel(string Ownername, string ism){
        ownername = Ownername;
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

class cookingYTchannel:public Youtubechannel{
public:
    cookingYTchannel(string ownerName,string ism): Youtubechannel(ownerName, ism){
    }
    void practice(){
        cout << ownername << "and  that is channel about food" << endl;
    }
    
};
int main(){
   

    cookingYTchannel cookingchannel("Shukurullo mashiissin imshig", " meliboev Shukurullo");
    cookingYTchannel cookingchannel2("John mashiissin imshig", " meliboev Shukurullo");
  
    // cookingchannel.subscribers();
    // cookingchannel.subscribers();
    // cookingchannel.subscribers();
    // cookingchannel.unsubscribers();
    // cookingchannel.publishvideo("osh");
 
    cookingchannel.practice();   // cookingchannel.publishvideo("makaron palov");
    cookingchannel.getInfo();

    cookingchannel2.practice();
    cookingchannel2.getInfo();

    return 0;
}
