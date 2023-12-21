#include<iostream>
using namespace std;

// bool isSorted(int arr[], int size){
//     if(size == 0 || size == 1){
//         return true;
//     }
//     if(arr[0] > arr[1]){
//         return false;
//     }else{
//         bool remainingPart = isSorted(arr+1, size-1);
//         return remainingPart;
//     }
// }

// int main(){
//     int arr[] = {2,0,6,8,9};
//     int size = 5;

//     bool ans = isSorted(arr, size);

//     if(ans){
//         cout << " Sorted array "<< endl;
//     }else{
//         cout << " Unsorted array "<< endl;
//     }
// }

bool isSorted(int arr[], int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    return isSorted(arr+1, size-1);
}

int main(){
    int arr[] = {0,4,5,6,8};
    int size = 5;

    bool ans  = isSorted(arr, size);

    if(ans){
        cout << " array sorted "<< endl;

    }else{
        cout << " not sorted "<< endl;
    }
}