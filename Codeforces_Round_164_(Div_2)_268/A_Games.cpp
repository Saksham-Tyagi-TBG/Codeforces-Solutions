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
using vpii = vector<pii>;
using vpll = vector<pll>;

// Shortcuts
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())

// Output Shortcuts
#define YES cout << "YES\n"
#define NO cout << "NO\n"

// Constants
const ll MOD = 1000000007LL;
const ll INF = 1e18;
const double PI = acos(-1.0);

// Mathematical Functions
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll power(ll a, ll b) {
    ll ans = 1;
    while (b > 0) {
        if (b & 1)
            ans *= a;
        a *= a;
        b >>= 1;
    }
    return ans;
}

// Vector Input
template <typename T> void read(vector<T> &v, int n) {
    v.resize(n);
    for (auto &x : v)
        cin >> x;
}

// Vector Output
template <typename T> void print(vector<T> &v) {
    for (auto x : v)
        cout << x << " ";
    cout << "\n";
}

// Main Solution
void solve() {
    int n;
    cin >> n;
    vi h(n, 0);
    vi a(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> h[i] >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (h[i] == a[j]) {
                count++;
            }
        }
    }
    cout << count;
}

// Main Function
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