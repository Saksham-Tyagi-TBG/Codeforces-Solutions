#include <bits/stdc++.h>
using namespace std;

// Type Aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

// Shortcuts
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())

// Loop Macros
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define per(i, a, b) for (int i = (a); i >= (b); i--)

// Output Shortcuts
#define YES cout << "YES\n"
#define NO cout << "NO\n"

// Constants
const ll MOD = 1000000007LL;
const ll INF = 1e18;
const double PI = acos(-1.0);

void solve() {
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int x, y;
    cin >> x >> y;

    // convert them to indexes
    x--;
    y--;
    vector<pair<int, int>> pairs;
    if (x + 1 < n) {
        pairs.push_back({x + 1, y});
        if (y + 1 < m) {
            pairs.push_back({x, y + 1});
            pairs.push_back({x + 1, y + 1});
        }

        if (y - 1 >= 0) {
            pairs.push_back({x, y - 1});
            pairs.push_back({x + 1, y - 1});
        }
    } else {
        if (y + 1 < m) {
            pairs.push_back({x, y + 1});
        }
        if (y - 1 >= 0) {
            pairs.push_back({x, y - 1});
        }
    }

    if (x - 1 >= 0) {
        pairs.push_back({x - 1, y});
        if (y + 1 < m) {
            pairs.push_back({x - 1, y + 1});
        }
        if (y - 1 >= 0) {
            pairs.push_back({x - 1, y - 1});
        }
    }

    for (auto pp : pairs) {
        if (arr[pp.first][pp.second] != 'x') {
            cout << "no\n";
            return;
        }
    }
    cout << "yes\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}