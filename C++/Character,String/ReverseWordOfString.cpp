#include<iostream>
using namespace std;

void reverseword(string s){
    vector<string> temp;
    string str = "";

    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            temp.push_back(str);
            str = "";
        }
        else{
            str = str + s[i];
        }
    }
    temp.push_back(str);

    // print from last 
    for(int i = temp.size()-1; i>=0; i--){
        cout << temp[i] << " ";
    }
}

int main(){
     string s = "i like this program very much";
     reverseword(s);
}