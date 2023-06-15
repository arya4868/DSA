#include<iostream>
using namespace std;

void dummy(int x){
    x ++;
    cout << x << endl;
}

int main(){
    int n = 14;

    cout << n << endl;
    dummy(n);
    cout << n << endl;
}