#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        ch = ch - 'A' + 'a';
    }
    return ch;
}

bool checkPalindrome(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(toLowerCase(name[s])!= toLowerCase(name[e])){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

void reverse(char name[], int n){
    int start =0;
    int end = n-1;

    while(start<=end){
        swap(name[start++], name[end--]);
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!= '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;

    cout << " Your name is :- " << name << endl;

    int length = getLength(name);
    cout <<" The length of the string is :- " << length << endl;

    reverse(name, length);
    cout << " The reverse string is :- " << name << endl;

    bool palindrome = checkPalindrome(name, length );
    cout << " Palindrome ? :- YES or NO : ---   " << palindrome << endl;


}