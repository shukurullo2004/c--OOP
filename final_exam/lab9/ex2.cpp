#include<iostream>
using namespace std;

class Test{
public:
int id;
int data;
static int num;

Test(int data):data{data},id{num++}{};

int getData(){
    return data;
}

int getID(){
    return id;
}
static int NumOfObjects(){
    return num;
}
};
int Test:: num{0};


int main() {
    std::cout << "#ofobjects: " << Test::NumOfObjects() << std::endl;

    Test t1{10}, t2{20}, t3{30}, t4{40};

    std::cout << "[t1] data: " << t1.getData() << ", id: " << t1.getID() << std::endl;
    std::cout << "[t2] data: " << t2.getData() << ", id: " << t2.getID() << std::endl;
    std::cout << "[t3] data: " << t3.getData() << ", id: " << t3.getID() << std::endl;
    std::cout << "[t4] data: " << t4.getData() << ", id: " << t4.getID() << std::endl;

    std::cout << "#ofobjects: " << Test::NumOfObjects()<< std::endl;

    return 0;
}