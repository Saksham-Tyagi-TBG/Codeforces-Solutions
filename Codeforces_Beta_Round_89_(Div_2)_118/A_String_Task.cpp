// 118A

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int length = s.size();
    char vowels[12] = {'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'i', 'o', 'u', 'y'};

    for(int i=0; i<length; i++){
        // first check if it is a vowel
        // if vowel do nothing
        // if consonant first . then lowercase
        if(binary_search(vowels, vowels+12, s[i])){
            continue;
        }
        cout << "." << (char)tolower(s[i]);
    }
    return 0;    
}