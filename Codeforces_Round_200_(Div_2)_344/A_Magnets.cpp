#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int groups = 1;
    int n;
    cin >> n;
    string previous, current;
    cin >> previous;
    n--;
    while (n--) {
        cin >> current;
        if (previous != current) {
            groups++;
        }
        previous = current;
    }

    cout << groups << "\n";
    return 0;
}