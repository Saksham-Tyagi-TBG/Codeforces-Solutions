// 2167B

#include <bits/stdc++.h>
using namespace std;

int main(){
    int q, n;
    string s, t;
    cin >> q;
    int flag=0;
    while(q--){
        flag = 0;
        cin >> n;
        char arr1[n];
        char arr2[n];
        cin >> s >> t;
        for(int i=0; i<n; i++){
            arr1[i] = s[i];
            arr2[i] = t[i];
        }
        sort(arr1, arr1+n);
        sort(arr2, arr2+n);
        for(int i=0; i<n; i++){
            if(arr1[i] != arr2[i]){
                flag = 1;
                break;
            }
        }
        if(flag){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
    return 0;
}