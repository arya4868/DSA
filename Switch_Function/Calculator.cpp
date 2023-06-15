#include<iostream>
using namespace std;

int main(){
    int n1;
    cout << " Enter the number n1 :- ";
    cin >> n1;

    int n2;
    cout << " Enter the number n2 :- ";
    cin >> n2;

    char operation;
    cout << " Enter the operation :- ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    
    case '-': 
        cout << n1 - n2 << endl;
        break;
    
    case '*': 
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1/n2<< endl;
    
    default:
        break;
    }
}