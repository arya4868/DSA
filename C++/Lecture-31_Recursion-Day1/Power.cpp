// #include <iostream>
// using namespace std;

// int getPower(int n){
//     if(n==0){
//         return 1;
//     }
//     return 2*getPower(n-1);
// }

// int main(){
//     int n;

//     cin >> n;

//     int ans = getPower(n);

//     cout << " the power is :- " << ans << endl;
// }

#include <iostream>
using namespace std;

// int getPower(int n){
//     if(n == 0){
//         return 1;
//     }
//     return n*getPower(n-1);
// }

// int main(){
//     int n;
//     cin >> n;

//     int ans = getPower(n);

//     cout << ans << endl;
// }

void  getCount(int n){
    if(n == 0){
        return;
    }
    getCount(n-1);
    cout << n << " ";
    
}

void reachHome(int src, int dest){
    if(src == dest){
        cout << "pauch gya" << endl;
        return;
    }
    cout << " source is :- " << src ;
    cout << " dest is :- " << dest ;
    src++;
    reachHome(src,dest);
}

int fabonacci(int n){
    if(n ==0 ){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    
    return fabonacci(n-1) + fabonacci(n-2);
}



int  main(){
//     int n;
//     cin >> n;

//   getCount(n);
//reachHome(1, 10);



int ans = fabonacci(6);
cout << " the term of fabonacci series is :- " << ans; 
}
