#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // my logic is to see how many 1's are there in its binary representation

    int x;
    cin >> x;
    int ans = 0;
    for (int i = 0; i < 32; i++) {
        if (x % 2 == 1) {
            ans++;
        }
        x /= 2;
    }

    cout << ans;
    return 0;
}