#include<iostream>
using namespace std;

void getpivot(int arr[], int n){
    int start =0;
    int end = n-1;

    while(start < end){
        int mid = start + (end-start)/2;

        if(arr[mid] >= arr[start]){
            start = mid+1;
        }else{
            end = mid;
        }
    }
    cout << " Pivot element is :- " << start <<endl;
}

int main(){
    int arr[] = {6,7,8,9,1,2,3,4,5};

    getpivot(arr, 9);
}