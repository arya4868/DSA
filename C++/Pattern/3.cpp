#include<iostream>
using namespace std;

/*

Enter the value of n :- 4
 * 
 *  * 
 *  *  * 
 *  *  *  * 
 
*/

int main(){
    int n;
    cout<< "Enter the value of n :- ";
    cin >> n;
    int i =1;

    while(i <= n){
        int j =1;
        while (j <= i)
        {
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;

        
    }
}