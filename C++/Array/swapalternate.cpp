#include<iostream>
using namespace std;

void alternateSwap(int arr[], int n){
    for(int i=0; i<n; i = i+2){
        if(i+1 <n){
        swap(arr[i], arr[i+1]);
        }
       
    }
    for(int i=0;i <n; i++){
        cout<< arr[i] << " "<<endl;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};

    alternateSwap(arr, 5);
}