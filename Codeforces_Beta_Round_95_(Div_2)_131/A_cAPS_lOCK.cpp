#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int length = s.size();

    int todo = 1;
    for (int i = 1; i < length; i++) {
        if (s[i] >= 'a') {
            todo = 0;
            break;
        }
    }
    if (todo) {
        if (s[0] >= 'a') {
            cout << (char)toupper(s[0]);
        } else {
            cout << (char)tolower(s[0]);
        }
        for (int i = 1; i < length; i++) {
            cout << (char)tolower(s[i]);
        }
        return 0;
    }

    cout << s;
    return 0;
}