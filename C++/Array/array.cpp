#include<iostream>
using namespace std;

void printarray(int arr[], int size){
    for(int i =0; i< size; i++){
        cout << arr[i] ;
    }
    cout << " Printing done" << endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    cout << " The value at index 1 is " << arr[1] << endl; // by default garbage value will be present, if nothing will be initilized in the array.

    printarray(arr, 5);
}