#include <iostream>
using namespace std;
class Book {
public:
	string Title;
	string Author;
	float* Rates;
	int RatesCounter;

	Book(string title, string author) {
		Title = title;
		Author = author;

		RatesCounter = 2;
		Rates = new float[RatesCounter];
		Rates[0] = 5;
		Rates[1] = 4;
	}

	~Book() {
		delete[] Rates;
		Rates = nullptr;
	}
    Book(const Book& original){
        Title = original.Title;
        Author = original.Author;
        Rates = new float[RatesCounter];
        for(int i = 0; i < RatesCounter; i++){
            Rates[i] = original.Rates[i];
        }
    }
    Book& SetTitle( string ttitle){
        Title = ttitle;
        return *this;
    };
    void print() {
    cout << "Title: " << Title << endl;
    cout << "Author: " << Author << endl;
    float sum = 0;
    for (int i = 0; i < RatesCounter; i++) {
        sum += Rates[i];
    }
    if (RatesCounter > 0) {
        float average = sum / RatesCounter;
        cout << "Average Rating: " << average << endl;
    }
    else {
        cout << "No ratings available" << endl;
    }
}

    // void avrg(){
    //     return RatesCounter/(double)
    // }
};

int main() {

	Book book1("Millionaire Fastlane", "M.J. DeMarco");
	Book book2("C++ Lambda Story", "Bartek F.");
    Book book3 = &book1;
    book1.print();
    book2.print();
    book3.print();
    Book book4 = book2;
    book4.SetTitle("Shukurulloning sarguzashtlari..");
    book4.print();
	
}