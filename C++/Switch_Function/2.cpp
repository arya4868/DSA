#include<iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for(int i =1; i<=b; i++ ){
        ans = ans*a;
    }
    return ans;
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;

    int result = power(n1, n2);
    cout << " The power of a and b is " << result << endl;
}