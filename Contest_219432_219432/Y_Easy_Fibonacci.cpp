#include <bits/stdc++.h>
using namespace std;

// int fib(int n){
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     return fib(n-1)+fib(n-2);
// }

int main(){
    int n=0;
    cin >> n;
    int a, b;
    a = 0;
    b = 1;
    int fib = a+b;
    if(n==1){
        cout << 0;
        return 0;
    }else if(n==2){
        cout << "0 1";
        return 0;
    }
    
    cout << "0 1 ";
    
    for(int i=3; i<=n; i++){
        cout << fib << " ";
        a = b;
        b = fib;
        fib = a+b;
    }
}