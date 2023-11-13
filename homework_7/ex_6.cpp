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

const int MAX_BOOKS = 100;
class EBookLibrary{
    private:
    EBook* m_books[100];
    int m_cnt;

    public:
    EBookLibrary();
    ~EBookLibrary();
    void AddBook(Ebook* book);
    void ShowEBookInfo();
};

int main() {
    EBookLibrary elib;
    elib.AddBook(new EBook{ "Book1", "1234567890", 10.99, "AAAAAA", "ePub" });
    elib.AddBook(new EBook{ "Book2", "2345678901", 20.99, "BBBBBB" });
    elib.AddBook(new EBook{ "Book3", "3456789012", 30.99, "CCCCCC", "ePub"});
    elib.AddBook(new EBook{ "Book4", "4567890123", 40.99, "DDDDDD" });
    elib.ShowAllBooks();

    return 0;
}

