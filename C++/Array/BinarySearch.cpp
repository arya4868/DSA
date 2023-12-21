#include<iostream>
using namespace std;

void foundkey(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            cout<<" index is :- "<< mid <<endl;
            break;
        }
        if(arr[mid]>key){
            end = mid-1;
        }
        if(arr[mid] < key){
            start = mid+1;
        }
    }
}

int main(){
    int arr[9] = {1,2,3,4,5,6,7,8,9};

    foundkey(arr, 9,2);
}