#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n:-";
    cin >> n;
    int i =1;
    while(i<=n){
        int space = i-1, j =1;
        while(space >0){
            cout << " ";
            space --;
        }
        while (j <= n-i+1)
        {
           cout << "*";
           j++;
        }
        i++;
        cout << endl;
        
    }
}