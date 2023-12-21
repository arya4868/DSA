#include<iostream>
using namespace std;

inline int getmax(int& a, int& b){

    return (a>b) ? a : b;
    
}

int main(){
    int x  = 2;
    int y =4;
    int ans =0;

    ans = getmax(x,y);

    x = x+5;
    y = y+1;

    int ans2 = getmax(x,y);

     cout << " the ans is:- " << ans << "   " << ans2 << endl;
}