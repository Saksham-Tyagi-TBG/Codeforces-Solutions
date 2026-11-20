#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    int opinion;
    cin >> n;
    while(n--){
        cin >> opinion;
        if(opinion == 1){
            cout << "HARD\n";
            return 0;
        }
    }
    cout << "EASY\n";
    return 0;
}