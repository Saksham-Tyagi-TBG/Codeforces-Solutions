#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a+b+c;
        int y = max(max(a,b),c);
        int z = sum-(y);
        if(z == y){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}