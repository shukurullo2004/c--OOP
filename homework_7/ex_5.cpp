#include <iostream>
using namespace std;
#include <string>

class Book{
public:

    string title;
    string ISBN;
    double price;

    Book(string title, string ISBN, double price){
        this ->title = title;
        this ->ISBN = ISBN;
        this ->price = price;   
    }

    void ShowBookInfo(){
        cout << "Title: " << title << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Price(USD): " << price << endl;

    }
};

class EBook:public Book{
public:
    string DRMKey;
    string format;

    EBook(string title , string ISBN, double price, string DRMKey, string format = "Kindle"): 
    Book(title, ISBN, price),DRMKey{DRMKey}, format{format} { };

    void ShowEBookInfo(){
        ShowBookInfo();
        cout << "DRMKey: " << DRMKey << endl;
        cout << "format: " << format << endl;
     }
};




int main() {
    Book book("Modern C++ Programming Cookbook", "1800208987", 49.99);
    book.ShowBookInfo();
    cout << endl;

    EBook ebook("Modern C++ Programming Cookbook(ebook)", "1800208987", 34.99, "dkb34x!@*~");
    ebook.ShowEBookInfo();

    return 0;
}
