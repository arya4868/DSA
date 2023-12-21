#include<iostream>
using namespace std;

// int getSum(int arr[], int n){
//     if(n == 0){
//         return 0;
//     }
//     if(n == 1){
//         return arr[0];
//     }
//     int sum = arr[0] + getSum(arr+1, n-1);
//     return sum;
// }

// int main(){
//     int arr[] = {3,2,5,1,6};
//     int n = 5;
//     int ans = getSum(arr, n);

//     cout << "the sum is :- "<< ans << endl;
// }

int getSum(int arr[], int size){
    int sum = 0;
    if(size == 0){
        return 0;
    }
    if(size == 1){
        sum = arr[0];
        return sum;
    }

    sum = arr[0] + getSum(arr+1, size-1);
    return sum;

}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 5;

    int ans  = getSum(arr, size);
    cout << " the sum of the array element is :- " << ans << endl;
}