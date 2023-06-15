#include<iostream>
using namespace std;

/*

Enter the value of n :- 5
1 
2 3 
3 4 5 
4 5 6 7 
5 6 7 8 9 

*/
int main()
{
    int n;
    cout<< "Enter the value of n :- ";
    cin >> n;
    int i=1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<< (j+i-1)<< " ";
            j++;
        }
        cout<< endl;
        i++;
        
    }
    
    
    return 0;
}


