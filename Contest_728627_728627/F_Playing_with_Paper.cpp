#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int mymin(lli a, lli b) {
    if (a <= b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int a;
    long long int b;
    cin >> a >> b;
    lli ans = 0;
    lli h = 0;
    while (a != b) {
        if (a > b && a % b == 0) {
            ans += a / b - 1;
            break;
        }
        if (b > a && b % a == 0) {
            ans += b / a - 1;
            break;
        }
        if (a < b) {
            h = b - (b % a);
            ans += b / a;
            b -= h;
        } else {
            h = a - (a % b);
            ans += a / b;
            a -= h;
        }
    }

    cout << ans + 1;
    return 0;
}