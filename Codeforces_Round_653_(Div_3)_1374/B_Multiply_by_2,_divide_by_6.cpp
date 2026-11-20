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

// bool isPrime(int n) {
//     if (n <= 1) {
//         return false;
//     }
//     if (n == 2) {
//         return true;
//     }
//     if (n % 2 == 0) {
//         return false;
//     }
//     int root = (int)sqrt(n);
//     for (int i = 3; i <= root; i += 2) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

int twos(int n) {
    while (n % 2 == 0) {
        n /= 2;
    }
    return n;
}

int threes(int n) {
    while (n % 3 == 0) {
        n /= 3;
    }
    return n;
}

int ntwo(int n) {
    int cnt = 0;
    while (n % 2 == 0) {
        cnt++;
        n /= 2;
    }
    return cnt;
}

int nthree(int n) {
    int cnt = 0;
    while (n % 3 == 0) {
        cnt++;
        n /= 3;
    }
    return cnt;
}

// Main Solution
void solve() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 0 << "\n";
        return;
    }
    if (twos(threes(n)) != 1) {
        cout << -1 << "\n";
        return;
    }
    int x = ntwo(n);
    int y = nthree(n);
    if (y < x) {
        cout << -1 << "\n";
    } else {
        cout << 2 * y - x << "\n";
    }
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