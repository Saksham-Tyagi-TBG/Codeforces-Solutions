#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int solve(int n) {
    if (n <= 10) {
        return n;
    }
    int ans = 9;
    int power = 100;
    while (n > power) {
        ans += 9;
        power *= 10;
    }
    power /= 10;
    ans = ans + (n / power);
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}