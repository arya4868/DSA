#include<iostream>
using namespace std;

int main (){
    int num = 3;
    cout << endl;

    switch (num)
    {
    case 1:
        cout << " the number is 1";
        break;
    
    case 2 : 
        cout << " the number is 2";
    
    default:
     cout << " the number is not defined";
        break;
    }
}