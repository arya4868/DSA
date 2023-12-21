#include <iostream>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>

using namespace std;

/* DEQUE 

int main(){

    deque<int> d;
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_front(1);

    for(int i= 0; i<d.size(); i++){
        cout<< d[i]<< " ";
    }
    cout<< endl ;

    // d.pop_back();
    // d.pop_front();



    for(int i= 0; i<d.size(); i++){
        cout<< d[i] <<" ";
    }
    cout<< endl ;
    cout<< "printing at index :- " << d.at(1) << endl;

    cout << "before erase " << d.size()<< endl;
    d.erase(d.begin(), d.begin() +1);

    cout << "after erase " << d.size()<<endl;

      for(int i= 0; i<d.size(); i++){
        cout<< d[i] <<" ";
    }
    cout<< endl ;
    


}
*/

/* LIST 

int main(){
    list<int > l(5,100);

    list<int> n(5,100);

    for (list<int>::iterator it = n.begin(); it != n.end(); ++it) {
        std::cout << *it << std::endl;
    }

    l.push_back(2);
    l.push_front(1);

   for (list<int>::iterator it = l.begin(); it != l.end(); ++it) {
        std::cout << *it << std::endl;
    }


}
*/


/* STACK 

int main(){
    stack<string> s;

    s.push("arya");
    s.push("kumar");
    s.push("sourav");

cout << " the top element is " << endl;
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
   
}
*/

/* QUEUE 

int main(){

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "printing :- " << q.front() << endl;
    cout << "checking empty or not :- " << q.empty() << endl;


}
*/

/* PRIORITY QUEUE 

int main(){

    // max Heap
    priority_queue<int> maxi;   // it will give the maximum element first

    maxi.push(0);
    maxi.push(1);
    maxi.push(6);
    maxi.push(8);
    maxi.push(5);
    maxi.push(2);

    int n = maxi.size();

    for(int i=0; i<n; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    //min heap
    priority_queue<int, vector<int>, greater<int> > mini; // it will give the minimum element first

    mini.push(0);
    mini.push(1);
    mini.push(6);
    mini.push(8);
    mini.push(5);
    mini.push(2);

     for(int i=0; i<n; i++){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;


}
*/

/* SET 

int main(){
    set<int> s;

    s.insert(1);
    s.insert(6);
    s.insert(8);
    s.insert(2);
    s.insert(0);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(1);
    s.insert(2);

    int n = s.size();

    cout << "size is :- " <<  n << endl;

    for(auto i : s){
        cout << i << " ";
    }
    cout << endl;


    s.erase(s.begin());

    for(auto i : s){
        cout << i << " ";
    }
    cout << endl;

    cout << " is this value present "<< s.count(5)<<endl;

}
*/
