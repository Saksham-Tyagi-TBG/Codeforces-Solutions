#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    if (n < m) {
        cout << -1 << "\n";
        return 0;
    }
    if (n % 2 == 0) {
        int moves = n / 2;
        while (moves % m != 0) {
            moves++;
        }
        cout << moves << "\n";
        return 0;
    } else {
        int moves = (n + 1) / 2;
        while (moves % m != 0) {
            moves++;
        }
        cout << moves << "\n";
        return 0;
    }
    return 0;
}