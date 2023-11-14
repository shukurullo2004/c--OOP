#include <iostream>
using namespace std;
int main(){
    int counter =100;
    while(counter < 501){
        if (counter % 5 == 0 && counter % 3 == 0)
            cout << counter << " is divisible by 5 and 3" << endl;
        counter++;
        // cout << "Allohu Akbar" << endl;
    }



    return 0;
}
