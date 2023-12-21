#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n :-";
    cin >> n;
    int i =1;

    while(i <= n){
        int j =1, k =1, l = 1;
        while(j <= n-i+1){
            cout << j ;
            j++;
        }
        while (k <= i-1)
        {
          cout << "*";
          k++;
        }
        while(l <= n-i+1){
            cout << (n-l+1);
            l++;
            

        }
        
        i++;
        cout << endl;
    }

}