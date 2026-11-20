#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int moves = 0;
    if (s[0] == 'B') {
        moves++;
    }
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            moves++;
        }
    }
    cout << moves << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}