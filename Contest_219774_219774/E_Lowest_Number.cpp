#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    int mini = arr[0];
    int position = 0;
    for(int i=1; i<n; ++i){
        if(arr[i] < mini){
            mini = arr[i];
            position = i;
        }
    }
    cout << mini << " " << position+1;
}

int main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
