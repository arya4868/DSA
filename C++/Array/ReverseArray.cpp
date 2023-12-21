#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<end){
        // int temp;
        // temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};

    reverse(arr, 6);
    cout << " The reversed array is :- " << endl;
    printArray(arr,6);
}
