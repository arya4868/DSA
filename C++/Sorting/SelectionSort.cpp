#include<iostream>
using namespace std;

void selectionsort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                
                minIndex = j;

            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main(){
    int arr[] = {2,7,3,9,1,6};

    selectionsort(arr, 6);

    for(int i=0; i < 6; i++){
        cout << arr[i] << " " ;
    }
}