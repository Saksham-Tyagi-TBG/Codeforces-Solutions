// 112A

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2, s3 = "", s4 = "";
    cin >> s1;
    cin >> s2;
    for(int i=0; i<s1.length(); i++){
        s3 += (tolower(s1[i]));
    }
    for(int i=0; i<s2.length(); i++){
        s4 += (tolower(s2[i]));
    }
    for(int i=0; i<s3.length(); i++){
        if(s3[i] == s4[i]){
            continue;
        }else if(s3[i] < s4[i]){
            cout << -1;
            return 0;
        }else{
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}