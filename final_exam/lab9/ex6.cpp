#include <iostream>
using namespace std;
class Book{
public:
string title;
string isbn;
double price;
Book(string title, string isbn, double price){
this->title = title;
this->price = price;
this->isbn = isbn;
}

void ShowBookInfo(){
    cout <<"Title: " <<title <<  endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Price: " <<price <<  endl;
}
};

class EBook : public Book{
    public:
    string format;
    string drmky;
    EBook(string title, string isbn, double price, string drmky,string format = "Kindly"):
    Book(title, isbn, price),drmky{drmky},format{format}{ };

    void ShowEBookInfo(){
    cout <<"Title: " <<title <<  endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Price: " <<price <<  endl;
    cout << "Format: " << format << endl;
    cout << "Drmky: " << drmky << endl;
}
    
};

const int MAX_BOOK =100;
class EBookLibrary{
private:
EBook*m_books[100];
int m_cnt;
public:

EBookLibrary():m_cnt{0}{};

void AddBook(EBook*book){
    m_books[m_cnt] = book;
    m_cnt++;
}

void ShowAllBooks(){
    for (size_t i = 0; i < m_cnt; i++)
    {
        m_books[i]->ShowEBookInfo();
    }
}
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