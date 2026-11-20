#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (k != 1) {
        cout << "YES\n";
        return;
    } else {
        for (int i = 0; i < n - 1; i++) {
            if (a[i + 1] < a[i]) {
                cout << "NO\n";
                return;
            }
        }

        cout << "YES\n";
    }
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