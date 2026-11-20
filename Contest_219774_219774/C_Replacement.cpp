#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> x;
        if(x == 0){
            arr[i] = 0;
        }else if(x > 0){
            arr[i] = 1;
        }else{
            arr[i] = 2;
        }
    }
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
