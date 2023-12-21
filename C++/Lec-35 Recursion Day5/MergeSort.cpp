#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){

    int mid = s + (e-s)/2;

    // 1. copy the element in two different array
    // 2. merge the two different sorted array in sorted way

    int len1 = mid -s +1;
    int len2 = e - mid;

    int arr1[len1];
    int arr2[len2];

    // copy element in arr1
    int mainIndexStart = s;
    for(int i = 0; i<len1; i++){
        arr1[i] = arr[mainIndexStart++];
    }
    for(int i = 0; i<len2; i++){
        arr2[i] = arr[mainIndexStart++];
    }

    // merge the sorted array
    int index1 = 0;
    int index2 = 0;
    int mainIndex = s;

    while(index1 < len1 && index2 < len2){
        if(arr1[index1] < arr2[index2]){
            arr[mainIndex++] = arr1[index1++];
        }else{
            arr[mainIndex++]  = arr2[index2++];
        }
    }
    while(index1 < len1){
        arr[mainIndex++] = arr1[index1++];
    }
    while(index2 < len2){           
        arr[mainIndex++] = arr2[index2++];
    }

}

void mergeSort(int arr[], int s, int e){
    int mid = s + (e-s)/2;

    // base case
    if(s >= e){
        return;
    }
    mergeSort(arr, s, mid); // left part ko sort  kro 
    mergeSort(arr, mid+1, e); // right part ko sort  kro 


    // merging of the array element 

    merge(arr, s, e);



}

int main(){
    int arr[17] = {3,4,2,1,6, 8,3,6,90,23,4,5,6,7,8,9,1};
    int n = 17;

    mergeSort(arr, 0, n-1);

    // print array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}