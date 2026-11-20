#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> pairs;
    int x, y;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        pairs.push_back({x, y});
    }

    sort(pairs.begin(), pairs.end());

    for (int i = 0; i < n; i++) {
        if (s - pairs[i].first > 0) {
            s += pairs[i].second;
        } else {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}