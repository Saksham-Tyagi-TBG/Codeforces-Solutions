// 281 A

#include <bits/stdc++.h>
using namespace std;

int main(){
    string mystr;
    cin >> mystr;
    if((int)mystr[0] >= 'a'){
        mystr[0] = (char)(mystr[0] - 32);
    }
    cout << mystr;
    return 0;
}