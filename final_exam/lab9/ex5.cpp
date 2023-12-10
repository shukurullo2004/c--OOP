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






int main() {
    // Creating a Book object
    Book book("Modern C++ Programming Cookbook", "1800208987", 49.99);

    // Displaying book information
    cout << "Book Information: " << endl;
    book.ShowBookInfo();
    cout << endl;

    // Creating an EBook object
    EBook ebook("Modern C++ Programming Cookbook (ebook)", "1800208987", 34.99, "dkb34x!@*~");

    // Displaying eBook information
    cout << "EBook Information:" << endl;
    ebook.ShowEBookInfo();

    return 0;
}