#include <bits/stdc++.h>
using namespace std;

int main(){
    string mystr;
    set<char> myset;
    cin >> mystr;
    for(int i=0; i<mystr.length(); i++){
        myset.insert(mystr[i]);
    }
    if(myset.size()%2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
    return 0;
}