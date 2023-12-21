#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n :- ";
    cin >> n;

    int i =1;

    while(i <=n ){
        int space = n-i, j =1, start = i-1;
        while(space > 0){
            cout << " ";
            space --;
        }
        while (j <=i)
        {
            cout << j;
            j++;
            
        }
        while (start)
        {
           cout << start;
           start --;

        }
        i++;
        cout << endl;

        
        
    }


}
