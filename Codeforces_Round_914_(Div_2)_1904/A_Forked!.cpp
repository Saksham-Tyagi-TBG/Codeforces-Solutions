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
    int a, b;
    int xk, yk;
    int xq, yq;
    cin >> a >> b;
    cin >> xk >> yk;
    cin >> xq >> yq;

    vector<pair<int, int>> posk(8);
    posk[0].first = xk - b, posk[0].second = yk + a;
    posk[1].first = xk + b, posk[1].second = yk + a;
    posk[2].first = xk + a, posk[2].second = yk + b;
    posk[3].first = xk + a, posk[3].second = yk - b;
    posk[4].first = xk + b, posk[4].second = yk - a;
    posk[5].first = xk - b, posk[5].second = yk - a;
    posk[6].first = xk - a, posk[6].second = yk + b;
    posk[7].first = xk - a, posk[7].second = yk - b;

    vector<pair<int, int>> posq(8);
    posq[0].first = xq - b, posq[0].second = yq + a;
    posq[1].first = xq + b, posq[1].second = yq + a;
    posq[2].first = xq + a, posq[2].second = yq + b;
    posq[3].first = xq + a, posq[3].second = yq - b;
    posq[4].first = xq + b, posq[4].second = yq - a;
    posq[5].first = xq - b, posq[5].second = yq - a;
    posq[6].first = xq - a, posq[6].second = yq + b;
    posq[7].first = xq - a, posq[7].second = yq - b;

    set<pair<int, int>> st;
    for (const auto &p1 : posk) {
        for (const auto &p2 : posq) {
            if (p1 == p2) {
                st.insert(p1);
            }
        }
    }
    cout << st.size() << "\n";
}

// Main Function
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}