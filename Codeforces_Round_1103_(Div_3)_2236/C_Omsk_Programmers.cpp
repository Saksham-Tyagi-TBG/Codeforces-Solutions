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

int num_of_div(int a, int x) {
    if (x > a) {
        return 1;
    }
    int cnt = 0;
    while (a > 0) {
        cnt++;
        a /= x;
    }
    return cnt;
}

void solve() {
    int a, b, x;
    cin >> a >> b >> x;
    if (abs(a - b) == 1) {
        cout << 1 << endl;
        return;
    }
    int maybe = num_of_div(a, x) + num_of_div(b, x);
    int moves = 0;

    do {
        int sum = a + b;
        a = max(a, b);
        b = sum - (a);
        if (a - b + moves < maybe) {
            maybe = a - b + moves;
        }
        a /= x;
        moves++;
    } while (a != 0);
    cout << maybe << "\n";
}

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