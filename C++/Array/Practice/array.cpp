#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n){
    for(int i=1; i<n; i++){
        swap(arr[i], arr[i-1]);
        i++;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int pivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return mid;
}

int main(){
    int arr[] = {7,8,9, 10,11,2};

    // swapAlternate(arr, 9);
    // printArray(arr, 9);
    int pivotIndex = pivot(arr, 6);

    cout << " the pivot element is " << arr[pivotIndex] << endl;




}