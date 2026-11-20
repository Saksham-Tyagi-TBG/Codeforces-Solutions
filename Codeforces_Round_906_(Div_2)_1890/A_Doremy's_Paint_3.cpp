#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    sort(a, a+n);
    if(a[0] == a[n-1]){
        cout << "YES\n";
        return;
    }
    
    if(n%2 == 0){
        if(a[0] == a[(n-1)/2] && a[(n-1)/2 + 1] == a[n-1]){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }else{
        if(a[0] == a[n/2] && a[n/2 + 1] == a[n-1]){
            cout << "YES\n";
            return;
        }
        
        if(a[0] == a[n/2-1] && a[n/2] == a[n-1]){
            cout << "YES\n";
            return;
        }
        
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
	return 0;
}
