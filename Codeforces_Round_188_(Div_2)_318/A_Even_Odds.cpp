#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli n, k;
    cin >> n >> k;
    if (n % 2 == 0) {
        if (k <= n / 2) {
            cout << 2 * k - 1 << "\n";
        } else {
            cout << (k - n / 2) * 2 << "\n";
        }
    } else {
        if (k <= (n + 1) / 2) {
            cout << 2 * k - 1 << "\n";
        } else {
            cout << (k - (n + 1) / 2) * 2 << "\n";
        }
    }
    return 0;
}