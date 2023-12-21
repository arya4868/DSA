#include<iostream>
using namespace std;

// Tail recursion
void getCount(int n){
    if(n==0){
        return;
    }
    cout << n << endl;
    getCount(n-1);
}

// Head recursion

void getCnt(int n){
    if(n==0){
        return;
    }
    getCnt(n-1);
    cout << n << endl;
}

int main(){
    int n;
    cin >> n;

     getCount(n);
     cout << endl;
     getCnt(n);
}