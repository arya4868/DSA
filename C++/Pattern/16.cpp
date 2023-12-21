#include <iostream>
using namespace std;

/*

Enter the value of n :- 5
     *
    * *
   * * *
  * * * *
 * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *

*/

int main(){
    int n;
    cout << "Enter the value of n :- ";
    cin >> n;
    int i =1;
    int p =1;

    while (i<= n)
    {
        int space = n-i;
        int j = 1;
        while(space > 0){
            cout << " ";
            space --;
        }
        while (j <=i)
        {
            cout << " *";
            j++;
        }
        i++;
        cout << endl;
        
    }
    while (p<= n)
    {
        int space = p-1;
        int j = 1;
        while(space > 0){
            cout << " ";
            space --;
        }
        while (j <= n-p+1)
        {
            cout << " *";
            j++;
        }
        p++;
        cout << endl;
        
    }
}