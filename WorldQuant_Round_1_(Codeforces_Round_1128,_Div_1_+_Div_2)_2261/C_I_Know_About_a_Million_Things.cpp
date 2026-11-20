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
    int n;
    cin >> n;
    int arr[n];
    int oddcount = 0;
    int evencount = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] % 2) {
            oddcount++;
        } else {
            evencount++;
        }
    }
    if (n == 1 || oddcount % 2 == 0) {
        cout << "Moggity\n";
        return;
    } else if (n == 2) {
        cout << "Larpity\n";
        return;
    }

    if (oddcount == 1) {
        cout << "Moggity\n";
        return;
    }

    if (oddcount == 3) {
        if (evencount == 0) {
            cout << "Larpity\n";
            return;
        } else {
            cout << "Moggity\n";
            return;
        }
    }
    cout << "Moggity\n";
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