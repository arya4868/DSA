#include<iostream>
using namespace std;

bool isEven(int a ){
    if(a % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int x ;
    cout << " Enter the number X :- ";
    cin >> x;

    bool ans = isEven(x);
    if(ans == true){
        cout << " The given no is even ";
    }else{
        cout << " The given no is odd";
    }
}