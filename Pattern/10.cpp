#include<iostream>
using namespace std;

/*
Enter the value of n:- 3
A B C 
B C D 
C D E 
*/

int main()
{
   int n;
   cout<< "Enter the value of n:- ";
   cin >> n;
   int  i =1;
   char ch = 'A' ;
   while (i<=n)
   {
    int j = 1;
   
    while (j<=n)
    {
        char ch1 = (ch + j -1);
        cout << ch1 << " ";
        j++;
       

    }
    i++;
    ch++;
    cout << endl;

    
    
   }
   
    return 0;
}
