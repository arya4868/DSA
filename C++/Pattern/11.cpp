#include<iostream>
using namespace std;

/*
Enter the value of n:- 4
A 
B C 
C D E 
D E F G 
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
   
    while (j<=i)
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
