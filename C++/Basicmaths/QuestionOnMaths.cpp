#include<iostream>
using namespace std;

// Is prime
bool isPrime(int n){

    if(n<=1){
        return false;
    }

    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

// GCD

int gcd(int x, int y){
    if(x == 0){
        return x;
    }
    if(y == 0){
        return y;
    }
    while(x != y){
        if(x>y){
            x = x-y;
        }else{
            y = y-x;
        }
      
    }
      return x;

}

int main(){
    int x,y;
    cin >> x >> y;

    if(isPrime(x)){
        cout << " 'Yes'  the given no is prime number" << endl;
    }else{
        cout << " The given no is not a prime number" << endl;
    }

    cout << " The gcd of the given number is :- " << gcd(x,y) << endl;



}