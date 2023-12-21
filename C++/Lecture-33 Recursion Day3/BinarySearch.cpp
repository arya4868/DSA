#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int k){

  if(s>e){
    return false;
  }
  int mid = s + (e-s)/2;

  if(arr[mid] == k){
    return true;
  }
  if(arr[mid] < k){
   return  binarySearch(arr, mid+1, e, k);
  }
  else{
   return  binarySearch(arr, s, mid-1, k);
  }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int key = 3;

    bool ans = binarySearch(arr, 0,7, key);

    if(ans){
        cout << " element found"<< endl;
    }else{
        cout << " not found"<< endl;
    }



}