#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n == 0) {
        cout << 1;
        return 0;
    }
    map<int, int> mp;
    mp[0] = 6;
    mp[1] = 8;
    mp[2] = 4;
    mp[3] = 2;
    cout << mp[n % 4];
    return 0;
}