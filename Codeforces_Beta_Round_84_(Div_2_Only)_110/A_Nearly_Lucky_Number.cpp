// 110A

#include <bits/stdc++.h>
using namespace std;

int isLucky(int n){
    if(n==0) return 0;
    while(n > 0){
        if((n%10 == 4) || (n%10 == 7)){
            n /= 10;
            continue;
        }else{
            return 0;
        }
    }
    return 1;
}

int main(){
    int count=0;
    long long int n;
    cin >> n;
    while(n>0){
        if((n%10 == 4) || (n%10 == 7)){
            count++;
        }
        n /= 10;
    }
    if(isLucky(count)){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}