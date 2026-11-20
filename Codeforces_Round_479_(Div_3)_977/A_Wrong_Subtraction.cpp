// 977A

#include <bits/stdc++.h>
using namespace std;

int main(){
    // just making an algorithm to follow Tanya's method will work because k is very small
    int n, k;
    cin >> n >> k;
    while(k--){
        if(n%10==0){
            n /= 10;
            continue;
        }
        n -= 1;
    }
    cout << n;
    return 0;
}