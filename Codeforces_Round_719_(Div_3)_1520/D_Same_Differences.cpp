#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

long long int nC2(lli n) { return n * (n - 1) / 2; }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        lli n;
        cin >> n;
        int a[n];
        int diff[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            diff[i] = a[i] - i;
        }
        sort(diff, diff + n);
        lli ans = 0;
        lli count = 1;
        for (lli i = 1; i < n; i++) {
            if (diff[i] == diff[i - 1]) {
                count++;
            } else {
                ans += nC2(count);
                count = 1;
            }
        }
        cout << ans + nC2(count) << endl;
    }
    return 0;
}