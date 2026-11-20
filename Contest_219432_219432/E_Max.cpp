#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int x;
    cin >> x;
    int maxi = x;
    for(int i=0; i<n-1; i++){
        cin >> x;
        if(x>maxi){
            maxi = x;
        }
    }
    cout << maxi;
}

int main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
