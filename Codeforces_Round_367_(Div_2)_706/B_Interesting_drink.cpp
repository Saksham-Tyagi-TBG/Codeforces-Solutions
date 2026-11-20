#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> x(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int q;
    cin >> q;
    vector<int> m(q, 0);
    for (int i = 0; i < q; i++) {
        cin >> m[i];
    }
    for (int i = 0; i < q; i++) {
        auto upper = upper_bound(x.begin(), x.end(), m[i]);
        if (upper == x.begin()) {
            cout << 0 << endl;
        } else {
            cout << (upper - x.begin()) << endl;
        }
    }
    return 0;
}