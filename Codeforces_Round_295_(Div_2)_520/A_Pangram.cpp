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

int position(char x) {
    if (x >= 'A' && x <= 'Z') {
        return (int)(x - 'A');
    }

    if (x >= 'a' && x <= 'z') {
        return (int)(x - 'a');
    }
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int arr[26] = {0};
    for (int i = 0; i < n; i++) {
        arr[position(s[i])]++;
    }
    for (int i = 0; i < 26; i++) {
        if (arr[i] == 0) {
            NO;
            return;
        }
    }
    YES;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}