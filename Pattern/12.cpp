#include<iostream>
using namespace std;

/*
Enter the value of n:- 4
D 
C D 
B C D 
A B C D 
*/

int main()
{
   int n;
   cout<< "Enter the value of n:- ";
   cin >> n;
   int  i =1;
   char ch = 'A' + (n-1) ;
   while (i<=n)
   {
    int j = 1;
   
    while (j<=i)
    {
        char ch1 = (ch + j -1);
        cout << ch1 << " ";
        j++;
       

    }
    i++;
    ch--;
    cout << endl;

    
    
   }
   
    return 0;
}
