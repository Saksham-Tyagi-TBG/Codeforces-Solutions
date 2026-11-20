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
        int n, k;
        cin >> n >> k;
        lli v1[n];
        lli v2[n];

        for (int i = 0; i < n; i++) {
            cin >> v1[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> v2[i];
        }

        int even1 = 0, even2 = 0;
        int odd1 = 0, odd2 = 0;
        for (int i = 0; i < n; i++) {
            if (v1[i] % 2 == 0) {
                even1++;
            } else {
                odd1++;
            }

            if (v2[i] % 2 == 0) {
                even2++;
            } else {
                odd2++;
            }
        }

        if (even1 > even2) {
            if (k % 2 == 0) {
                cout << "NO\n";
                continue;
            }
        } if (odd1 > odd2) {
            if (k % 2 == 1) {
                cout << "NO\n";
                continue;
            }
        } 
        cout << "YES\n";
    }
    return 0;
}