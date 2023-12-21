#include<iostream>
using namespace std;

// bool keyFound(int arr[], int size, int key){
//     if(size == 0){
//         return false;
//     }
//     if(arr[0] == key){
//         return true;
//     }
//     else{
//         return keyFound(arr+1, size-1, key);
//     }
// }






bool keyFound(int arr[], int size, int key){
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        return keyFound(arr+1, size-1, key);
    }
}

int main(){
    int arr[] = {3,4,6,8,9};
    int size = 5;
    int key = 8;

    bool ans = keyFound(arr, size, key);

    if(ans){
        cout << " key is found "<< endl;
    }else{
        cout << " Key is not found" << endl;
    }
}