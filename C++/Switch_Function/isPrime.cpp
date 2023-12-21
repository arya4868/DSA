#include<iostream>
using namespace std;

bool isPrimenumber(int x){
    for(int i =2; i < x-1; i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << " Enter the value of n :- ";
    cin >> n;

    bool ans =  isPrimenumber(n);
    if(ans == true){
            cout <<  " Yes, the given number is prime number ";
    }else{
        cout << " No, the given number is not a prime number";
    }
}