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
    string t;
    cin >> t;
    int non_a = 0;
    int length = t.size();

    string s = "", s0 = "", temp = "";
    rep(i, 0, length) {
        if (t[i] != 'a') {
            non_a++;
        }
    }

    if (non_a == 0) {
        cout << t;
        return;
    }
    if (non_a % 2 != 0) {
        cout << ":(";
        return;
    }

    int half = non_a / 2;
    int cnt = 0;
    int index = 0;
    rep(i, 0, length) {
        if (t[i] != 'a') {
            cnt++;
            temp += t[i];
        }
        if (cnt == half + 1) {
            index = i;
            temp.erase(temp.size() - 1, 1);
            break;
        }
    }

    for (int i = index; i < length; i++) {
        if (t[i] == 'a') {
            cout << ":(";
            return;
        } else {
            s0 += t[i];
        }
    }

    if (temp != s0) {
        cout << ":(";
        return;
    } else {
        for (int i = 0; i < index; i++) {
            cout << t[i];
        }
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