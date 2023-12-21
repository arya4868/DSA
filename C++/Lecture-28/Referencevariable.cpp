#include <iostream>
using namespace std;

void update1(int &y){
    y = y+1;
}
void update(int y){
    y = y+1;
}

int main(){

    /*
    int i =5;

    int &j = i; // reference variable created

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;

    cout << j << endl;
    */

   int x = 5;
  // update(x);  // will give same value of x that is x = 5
   update1(x); // will make x = 6
   cout << x << endl;
}