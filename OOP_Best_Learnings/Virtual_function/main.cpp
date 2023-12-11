#include <iostream>
using namespace std;

class Instrument{
    public:
    // virtual sozi shu funksiyani 2-darajali qb qoyadi,
    // yani classlar tenglanganda 2 klassda ham bir xil funksiya bolsa, virtual sozi yo'qi 1-darajali va virtual funksiya esa 2-darajali bo'ladi;
    virtual void play(){ 
        cout << "Instrument is playing ..." << endl;
    }
};

class Piano : public Instrument{
    public:
    void play(){
        cout << "Piano is playing ..." << endl;
    }
};

class Guitar : public Instrument{
    public:
    void play(){
        cout << "Guitar is playing ..." << endl;
    }
};

//  1. classni  nomlarini(main fun dagi ) o'zaro tenglash mumkin. * va & bn va faqat reference ni ozi bn ham ishlatsa bdi;

int main(){
    Instrument *first;
    Piano second;
    first = &second;
    first->play();


    return 0;

}

// 2. 1-classning nomini 2-classning o'ziga tenglash mumkin * va new so'zlari bn va class"()" qoyilish kk ;
// int main(){
//     // pasda piano chiqadi;
//     Instrument *bir = new Piano();
//     bir->play();

//     // // pasda guitar chiqadi;
//     // Instrument*ikki = new Guitar();
//     // ikki->play();
//     // bu mumkin emas, child class parents classni ola olmaydi for more info check OOP course  i-class
//     // Piano*ikki = new Guitar();
//     // ikki->play();


// // hamma class ichidagi classlarni  bir *array ga olsa boladi va print qilsa boladi;
//     // Instrument *instrument[2] = {bir, ikki};
//     //     for (size_t i = 0; i < 2; i++)
//     //     {
//     //         instrument[i]->play();
//     //     }
        

//     return 0;
// }
// // Abstract class bolishi uchun kamida 1 ta pure  virual function  bo'lishi kk, yani "virtual funksiya() = 0"; va unda body{} qismi bo'lmaydi; 