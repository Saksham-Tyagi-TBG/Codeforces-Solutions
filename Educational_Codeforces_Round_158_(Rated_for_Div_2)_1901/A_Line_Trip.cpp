#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    int arr[n] = {0};
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int myarr[n+1] = {0};
    myarr[n] = 2*(x - arr[n-1]);
    myarr[0] = arr[0];
    
    for(int i=1; i<=n-1; i++){
        myarr[i] = arr[i] - arr[i-1];
    }
    int ans = myarr[0];
    for(int i=1; i<=n; i++){
        if(myarr[i] > ans){
            ans = myarr[i];
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
