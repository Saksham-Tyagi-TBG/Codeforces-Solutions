#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int maxi = max(max(a, b), c);
        int mini = min(min(a, b), c);
        int ans = a + b + c - (mini + maxi);
        cout << ans << endl;
    }
    return 0;
}