#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

void solve() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    if (n == 1) {
        cout << 1 << "\n";
        cout << h[0] << "\n";
        return;
    }
    sort(h.begin(), h.end());

    vector<int> left;
    vector<int> right;

    int ans = n;

    left.push_back(h[0]);
    right.push_back(h[1]);

    for (int i = 2; i < n; i++) {
        if ((*(left.end() - 1) == *(right.end() - 1)) &&
            *(left.end() - 1) == h[i]) {
            ans--;
            left.push_back(h[i]);
            continue;
        }
        if (*(left.end() - 1) == h[i]) {
            right.push_back(h[i]);
        } else {
            left.push_back(h[i]);
        }
    }

    cout << ans << "\n";
    for (auto it = left.begin(); it < left.end(); it++) {
        cout << *it << " ";
    }
    for (auto it = right.end() - 1; it >= right.begin(); it--) {
        cout << *it << " ";
    }
    cout << "\n";
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