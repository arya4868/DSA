#include<iostream>
using namespace std;

/*
Enter the value of n:- 5
A B C D E 
A B C D E 
A B C D E 
A B C D E 
A B C D E 
*/

int main()
{
   int n;
   cout<< "Enter the value of n:- ";
   cin >> n;
   int  i =1;
   while (i<=n)
   {
    int j = 1;
    char ch = 'A' ;
    while (j<=n)
    {
        char ch1 = (ch + j -1) ;
        cout << ch1 << " ";
        j++;

    }
    cout << endl;

    i++;
    
   }
   
    return 0;
}
