#include<iostream>
using namespace std;

void dummy(int x){
    x ++;
    cout << x << endl;
}

int main(){
    int n = 14;

    cout << n << endl;
    dummy(n); // -- 15  in function a copy of n is created but the original n remains same 
    cout << n << endl; // -- 14  original n valye is still 14
}