#include <iostream>
using namespace std;
// array declare va getmax,getmin declarationlarni ko'rib eslab qol
int getMax(int* array,int size){
    int max = array[0];
    for(int i = 0; i < size; i ++){
        if(max < array[i]){
            max = array[i] ;
        }
    }
    return max;
}

int getMin(int* array,int size){
    int min = array[0];
    for(int i = 0; i < size; i ++){
        if(min > array[i]){
            min = array[i] ;
        }
    }
    return min;
}
int main(){
    int num;
    int digit;
    cout << "Enter number size : " << endl;
    cin >> num;
     int *array = new int[num];
    for(int i = 0 ; i < num ; i++){        
            cout << "Enter number "<<i+1<<": " << endl;
            cin >> array[i];
    }
    cout << "Max: " << getMin(array, num) << endl;
    cout << "Min: " << getMax(array, num);
    delete[]array;
    return 0;
}