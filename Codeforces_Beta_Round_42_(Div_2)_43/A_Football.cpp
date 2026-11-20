#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s1 = "", s2 = "", temp="";
    cin >> s1;
    int count1 = 1;
    int count2 = 0;
    n--;
    while(n--){
        cin >> temp;
        if(temp == s1){
            count1++;
        }else{
            s2 = temp;
            count2++;
        }
    }
    
    if(count1 > count2){
        cout << s1;
    }else{
        cout << s2;
    }
    return 0;
}
