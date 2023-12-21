#include<iostream>
using namespace std;

void digitToWords(int n, string arr[], int size){
    if(n == 0){
        return;
    }
    int digit = n%10;
    n = n/10;

    string ans = arr[digit];
    

    digitToWords(n, arr, size);
    cout << ans << " ";
}

int main(){
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cout << " enter the value of n :-";
    cin >> n;

    digitToWords(n, arr, 10);


}