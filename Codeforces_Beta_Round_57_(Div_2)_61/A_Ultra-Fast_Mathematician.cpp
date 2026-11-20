#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1;
    cin >> s2;
    int n = s1.size();
    for (int i = 0; i < n; i++) {
        if (s1[i] == s2[i]) {
            cout << 0;
        } else {
            cout << 1;
        }
    }
    return 0;
}