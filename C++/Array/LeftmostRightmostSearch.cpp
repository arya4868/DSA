#include <iostream>
using namespace std;

int leftmost(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int ans = -1;

    while(start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid-1;
        }
        if(arr[mid] < key){
            start = mid+1;
        }
        if(arr[mid] > key){
            end = mid-1;
        }
        
    }
    return ans;
}

int rightmost(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int ans = -1;

    while(start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid+1;
        }
        if(arr[mid] < key){
            start = mid+1;
        }
        if(arr[mid] > key){
            end = mid-1;
        }
        
    }
    return ans;
}



int main(){
    int arr[] = {1,2,3,3,3,3,3,3,3,4};

    int left  = leftmost(arr, 10, 3);
    int right = rightmost(arr, 10,3);

    cout << " the left index is :- " << left << endl;
    cout << " the right index is :- " << right << endl;

    int ans = right-left +1;
    cout<< " Total no of occorance :- " << ans << endl;

}