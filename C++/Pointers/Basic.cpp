#include <iostream>
using namespace std;



void print (int *p){
    cout << "1st :- " << *p << endl;
}
void update (int *p){
   // p = p+1;
    *p = *p +1;
    // cout << "1. inside update function :- "<< p << endl;
    // cout << "2. Indisde update function :- " << *p << endl;
}
//  int getSum(int arr[], int n){
    
//     cout << "size is :- " << sizeof(arr) << endl; // will return 8 because the argument passed is pointer 
//     int sum = 0;
//     for(int i=0; i<n;i++){
//         sum += arr[i];
//     }
//     return sum;
// }
int getSum(int *arr, int n){
    int size = sizeof(arr);
    cout << "size is :- " << size << endl; // will return 8 because the argument passed is pointer 
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + i[arr];
    }
    return sum;
}

int main(){
   // int num = 5;
    //cout << "Value of num is  :- "<< num << endl;

   // int *ptr = &num;
   // cout << " Address of ptr :- " << ptr << endl; // always give value in hexadecimal form.
   // cout << "Value of ptr is  :- "<< *ptr << endl;
  //  cout << " Size of pointer is :- "<< sizeof(ptr)<< endl;

   // int i =5;
   // int *p = 0;
   // cout <<  *p <<endl;  // segmentation fault

   // p = &i;
   // cout << " value of p :- " << *p << endl;

//     int x = 3;
//     int a = x;
//     a++;
   // cout << " value of x is :- " << x << endl;

    //int *q = &x;
   // cout << " before :- " << x << endl;
  //  (*q)++;
   // cout << " after :- "<< x << endl;

  //  int *r = q;
   // cout << q << " - "<< r << endl;
  //  cout << *q << " - "<< *r << endl;

    // int y = 3;
    // int *s = &y;
    // *s = *s +1;
    // //cout << " value of *s :- " << *s << endl;
   // cout << " before s is incresed " << s << endl;
   // s = s+1;
   // cout << " value of s = s+1 :-  " << s << endl;  // increased by 4 byte

/*
// ARRAY

int arr[10] = {2,5,6,8,9};
cout << "Address of the first memory block :- " << arr << endl;
cout << "Address of the first memory block :- " << &arr[0] << endl;

cout << "4th :- " << *arr << endl;
cout << "5th :- " << (*arr) +1 << endl;

cout << "6th :- " << *arr << endl;
cout << "7th :- " << *(arr +1) << endl;

int j = 3;
cout << "printing through index :- " << j[arr] << endl;
*/


/*
int temp[10] = {1,2,3,4,5,6};

int *p = &temp[0];

cout << "1st ;- " << sizeof(temp) << endl; // 40
cout << "2nd :- " << sizeof(*p) << endl; //4
cout << "3rd :- " << sizeof(&p) << endl; // 8
cout << "4th :- " << sizeof(*temp) << endl; // 4
cout << "5th :- " << sizeof(&temp) << endl; // 8
*/

/* // CHARACTER ARRAY
int arr[5] = {1,2,3,4,5};
char ch[6] = "abcde"; // size 6 has taken because character array ends with null character .

int *p = &arr[0];
char *c = &ch[0];
cout << "1st :- " << *p << endl;
cout << "2nd :- " << p << endl;

cout << "3rd :- " << *c << endl;
cout << "4th :- " << c << endl;
*/

    // int x = 2;
    // int *p = &x;
    // print(p); // method call 

    // cout << " before update call :- " << *p << endl;
    // update(p);
    // cout << "after update call :- " << *p << endl; 

    int arr[8] = {1,2,3,4,5,6,7,8};
    int ans = getSum(arr+3,5); // it will give the sum from array of index 3 
    cout << " The sum is :- " << ans << endl;


}



