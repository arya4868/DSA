#include<iostream>
using namespace std;

bool isPalindrome(string & name, int i, int j){
    // while(i < j){
    //     if(name[i] != name[j]){
    //         return false;
    //     }
    //     i++;
    //     j--;
    // }
    // return true;
    if(i>j){
        return true;
    }
    if(name[i] != name[j]){
        return false;
    }
    return isPalindrome(name, i++, j--);
}

int main(){
    string name = "sourav";

    bool ans = isPalindrome(name, 0, name.length()-1);
        if(ans){
            cout << "Palindrome" << endl;
        }else{
            cout << " Not Palindrome" << endl;
        }
    }
