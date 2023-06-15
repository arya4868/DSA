#include<iostream>
using namespace std;

/*

Enter the value of n :- 3
1 2 3 
4 5 6 
7 8 9 

*/

int main(){
    int n;
    cout << "Enter the value of n :- ";
    cin >> n;
    int i =1;
    int count = 1;


    while (i <= n)
    {
        int j = 1;
        while (j<=n)
        {
            cout << count << " ";
            j++;
            count++;
        }
        cout << endl;
        i++;
        

        
    }
    
}