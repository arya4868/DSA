#include<iostream>
using namespace std;

void update (int** p){
    //p = p+1;

   // *p = *p +1;

   // **p = **p + 1;
}

int main(){
    int i = 6;
    int* ptr = &i;
    int** ptr2 = &ptr;
    /*
    cout << "1st :- " << ptr << endl;            // 0x16b4e740c
    cout << "Address of ptr :-" << &ptr << endl; // 0x16b4e7400
    cout << "2nd :-" << *ptr << endl;            // 6
    cout << "3rd :- " << ptr2 << endl;           // 0x16b4e7400
    cout << "4th :- " << *ptr2 << endl;          // 0x16b4e740c
    cout << "5th :- " << **ptr2 << endl;         // 6
    */

   cout << "before :- " << i << endl;
   cout << "before :- " << ptr << endl;
   cout << "before :- " << ptr2 << endl;

    update(ptr2);

   cout << "after :- " << i << endl;
   cout << "after :- " << ptr << endl;
   cout << "after :- " << ptr2 << endl;
   cout << "after :- " << *ptr << endl;
   cout << " before :- " << ptr << endl;





}

