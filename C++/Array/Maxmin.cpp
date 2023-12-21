#include <iostream>
using namespace std;

void MaxMin(int arr[], int n){

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << max << " " << min;
}

int main(){
    
    

    int arr[1000];
    cout << " Enter the element";

    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    MaxMin(arr, 5);

}