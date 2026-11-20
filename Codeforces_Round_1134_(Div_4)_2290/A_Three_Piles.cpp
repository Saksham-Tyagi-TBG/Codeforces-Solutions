#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int arr[3] = {a, b, c};
    sort(arr, arr + 3);
    if ((arr[1] == arr[0] + 1) && (arr[2] == arr[1] + 1)) {
        YES;
    } else {
        NO;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}