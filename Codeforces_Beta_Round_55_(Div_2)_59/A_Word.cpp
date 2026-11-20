// 59A

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int lower=0, upper=0;
    int length = s.size();
    for(int i=0; i<length; i++){
        if(s[i] <= 'Z'){
            upper++;
        }else{
            lower++;
        }
    }
    if(lower==upper){
        for(int i=0; i<length; i++){
            cout << (char)tolower(s[i]);
        }
    }else if(lower < upper){
        for(int i=0; i<length; i++){
            cout << (char)toupper(s[i]);
        }
    }else{
        for(int i=0; i<length; i++){
            cout << (char)tolower(s[i]);
        }
    }
    return 0;
}