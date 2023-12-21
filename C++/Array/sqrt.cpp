#include<iostream>
using namespace std;

int sqrt(int n){
    int start = 0;
    int end = n;
    int ans = -1;

    while(start <= end){
        long long int mid = start + (end-start)/2;
        if(mid*mid == n){
            return mid;
        }
        if(mid*mid > n){
            end = mid-1;
        }
        if(mid*mid < n){
            ans = mid;
            start = mid+1;
        }
    }
    return ans;
}

double presision(int tempsol, int n, int presesion){
    double factor = 1;
    double ans = tempsol;

    for(int i = 0; i<presesion; i++){
        factor = factor/10;
        for(double j = ans; j*j <n; j = j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n = 37;

    int tempsol = sqrt(n);
    double morepreciseSol = presision(tempsol, n, 3);
    
   // cout << " the sqrt of n is :- " << tempsol << endl; 
    
    cout << "The morePrecise ans is :- " << morepreciseSol << endl;


}