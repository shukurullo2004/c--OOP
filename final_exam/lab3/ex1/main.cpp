#include <iostream>
using namespace std;

int main(){

int score = 0;
while(score != -1){
    cout << "Enter your exam score :";
cin >> score;
if(score > 59  && score<= 70)
    cout << " You got D grade" << endl;
 else if(score >70 && score <= 80)
    cout <<"Yout got C grade" << endl;

 else if (score > 80 && score <= 90)
    cout << "You got B" << endl;
else  if (score >90 && score <= 100)
 cout << "Congrulation you got A+" << endl;
else if (score != -1){
cout << "Please enter properly 60-100 score " << endl;
}
cout << "Entered -1 : end of program" <<endl;
}
    return 0;
}