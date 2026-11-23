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

void swapme(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// Main Solution
void solve() {
    int n;
    cin >> n;
    vector<int> heights(n, 0);
    read(heights, n);
    int max = *max_element(all(heights));
    int min = *min_element(all(heights));

    int max_pos = 0;
    int min_pos = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (heights[i] == max) {
            max_pos = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (heights[i] == min) {
            min_pos = i;
        }
    }

    int ans = 0;
    if (min_pos < max_pos) {
        min_pos++;
    }

    while (heights[0] != max) {
        swapme(&heights[max_pos], &heights[max_pos - 1]);
        max_pos--;
        ans++;
    }

    while (heights[n - 1] != min) {
        swapme(&heights[min_pos], &heights[min_pos + 1]);
        min_pos++;
        ans++;
    }

    cout << ans;
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