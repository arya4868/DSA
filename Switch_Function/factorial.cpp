#include<iostream>
using namespace std;

int printfactorial(int x){
    int ans =1;
    for(int i = 1; i<= x; i++){
        ans = ans * i;
    }
    return ans;
}
int answer(int a, int b){
    return printfactorial(a)/(printfactorial(b)*printfactorial(a-b));
}

int main(){
    int n1, n2;
    cout << " Enter the value of n1 and n2";
    cin >> n1 >> n2;

    int result = answer(n1, n2);

    cout << " The answer is :- " << result << endl;
}