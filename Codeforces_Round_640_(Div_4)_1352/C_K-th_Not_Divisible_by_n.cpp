#include <bits/stdc++.h>
using namespace std;

#define lli long long int

void solve() {
    lli n, k;
    cin >> n >> k;
    lli numerator = k * n;
    lli denominator = n - 1;
    lli ans = 0;
    if (numerator % denominator == 0) {
        ans = (numerator / denominator) - 1;
    } else {
        ans = (numerator / denominator);
    }

    cout << ans << "\n";
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