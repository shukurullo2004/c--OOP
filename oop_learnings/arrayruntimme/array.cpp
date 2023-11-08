#include <iostream>
using namespace std;
int getmax(int* a, int size){
    int max = a[0];
    for(int i = 0; i < size; i ++){
        if(max > a[i]){
            max = a[i];
        }
    }
    return max;
}
int getmin(int* a, int size){
    int min = a[0];
    for(int i = 0; i < size; i ++){
        if(min < a[i]){
            min = a[i];
        }
    }
    return min;
}

double getavr(int* a, int size){
    double avr = 0;
    for(int i = 0; i < size; i ++){
        avr += a[i];
    }
    avr = avr/sizeof(size);
    return avr;
}
int main(){
    int max = 0;
    int min = 0;
    double avr = 0;
    int size ;
    cout << "Enter size of array: " ;
    cin >> size;
    int *array = new int[size];
    for(int i = 0; i < size; i ++){
        cin >> array[i];
    }
    max = getmax(array,size);
    min = getmin(array,size);
    avr = getavr(array,size);
    cout <<"max: " << max << endl;
    cout <<"min: "<< min << endl;
    cout <<"avr: "<< avr << endl;

    delete []array;

    return 0;
}