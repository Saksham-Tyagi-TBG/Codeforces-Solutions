// 96A

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count=1, flag=0;
    int length = s.size();
    for(int i=0; i<length-1; i++){
        if(count >= 7){
            flag = 1;
            break;
        }
        if(s[i] == s[i+1]){
            count++;
        }else{
            count = 1;
        }
    }

    if(count >= 7) flag=1;

    if(flag){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}