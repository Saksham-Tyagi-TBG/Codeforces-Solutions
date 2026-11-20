#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int twoPower(lli n) {
    int ans = 0;
    while (n > 0) {
        n = n / 2;
        ans += 1;
    }
    return ans - 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        lli n;
        cin >> n;
        int p = twoPower(n);
        int x = pow(2, p + 1) - 1;
        lli ans = (n) * (n + 1) / 2 - 2 * (x);
        cout << ans << endl;
    }
    return 0;
}
