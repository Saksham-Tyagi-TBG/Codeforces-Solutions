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
    string s1, s2;
    cin >> s1;
    cin >> s2;
    if (s1.compare(s2) <= 0) {
        cout << s1;
    } else {
        cout << s2;
    }
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