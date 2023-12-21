#include<iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s ;

    s.push(10);
    s.push(15);
    s.push(34);

    s.pop();


    cout << " Top elemnet is :- " << s.top() << endl;

    if(s.empty()){
        cout << " stack is empty" << endl;
    }else{
        cout << " stack is not empty "<< endl;
    }

    cout << " Size is :- " << s.size() << endl;

}