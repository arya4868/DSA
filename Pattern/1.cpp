#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "enter the value of n";
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j <= n){
            cout << (n-j+1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/*

n = 7

7 6 5 4 3 2 1 
7 6 5 4 3 2 1 
7 6 5 4 3 2 1 
7 6 5 4 3 2 1 
7 6 5 4 3 2 1 
7 6 5 4 3 2 1 
7 6 5 4 3 2 1

*/
