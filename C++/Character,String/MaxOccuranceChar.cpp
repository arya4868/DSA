#include<iostream>
using namespace std;

void maxOccuranceChar(string s){

    int arr[26] = {0};
    int number = 0;
    for(int i=0; i< s.length(); i++){
        char ch = s[i];
        if(ch >= 'a' && ch <= 'z'){
            number  = ch - 'a';
        }
        else{
            number = ch - 'A';
        }
    }
    arr[number]++;

    int max =-1, index = -1;
    for(int i=0; i<26; i++){
        if(arr[i] > max){
            index = i;
            max = arr[i];
            
        }
    }
    char ans = 'a' + index;
    cout << ans << endl;
}

int main(){
    string s ;
    cout << " Enter the string :- "<< endl;
    cin >> s;
    maxOccuranceChar(s);
}