#include<iostream>
using namespace std;

// 1. quicksort function
// 2. partiton function : - pivot index, arrange the elemnet according to the pivot index.

int partiton(int arr[], int s, int e){

    int pivot = arr[s];

    int cnt = 0;

    for(int i= s+1; i<=e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }
    // place pivot element at right position
    int pivotIndex  = s + cnt;
    swap(arr[pivotIndex], arr[s]);


    // left and right wala part , left should be less than pivot and right should be greater than pivot 
    int i = s;
    int j = e;

    while(i < pivotIndex && j > pivotIndex ){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;




}

void quickSort(int arr[], int s, int e){


   

    if(s >= e){
        return;
    }
     int p = partiton(arr, s, e);

    quickSort(arr, s, p-1); // for left part
    quickSort(arr, p+1, e);
}

int main(){
    int arr[8] = {6, 6, -6, -2, -4, -6, 2, -6  };
    int n = 8;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}