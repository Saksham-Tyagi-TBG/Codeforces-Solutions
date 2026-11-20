#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int x;
    long long sum = 0;
    for(int i=0; i<n; i++){
        cin >> x;
        sum += x;
    }
    if(sum>=0){
        cout << sum;
    }else{
        cout << -sum;
    }
}

int main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
