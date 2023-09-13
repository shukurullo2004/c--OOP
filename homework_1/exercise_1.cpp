#include <iostream>
using namespace std;

int main() {
    int score;

    do {
        cout << "Enter your exam score (-1 to exit): ";
        cin >> score;

        if (score == -1) {
            cout << "End of program" << endl;
            break;
        }

          if(score > 90){
        cout << "Congrulations your score is A" << endl;
        }
        else if(score > 80 && score <= 90){
            cout << "your grade is B" << endl;
        }
        else if(score > 70 && score <= 80){
            cout << "your grade is C" << endl;
        }
        else if(score > 60 && score <= 70){
            cout << "your grade is D" << endl;
        }
        else
            cout << "sorry, your grade is F " << endl;
        }
    while (true);

    return 0;
}
