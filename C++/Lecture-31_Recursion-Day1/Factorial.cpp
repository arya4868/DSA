// #include <iostream>
// using namespace std;

// int factorial(int n){
//     if(n == 0){
//         return 1;
//     }
//     return n* factorial(n-1);
// }

// int main(){
//     int n;
//     cin >> n;

//     int ans = factorial(n);
//     cout << ans << endl;

// }

#include <iostream>
using namespace std;

int  factorial (int x){
    if(x == 0){
        return 1;
    }
    return x*factorial(x-1);
}

int main(){
    int n;
    cin >> n;

   int ans =  factorial(n);
   cout << " the factorial is " << ans << endl;
}