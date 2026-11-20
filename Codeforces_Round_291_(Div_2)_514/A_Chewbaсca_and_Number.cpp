#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

lli reverseInt(lli n) {
    lli ans = 0;
    while (n > 0) {
        ans = (ans * 10) + (n % 10);
        n /= 10;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli x;
    cin >> x;
    lli ans = 0;
    int digit = 0;
    bool nonzero = false;
    lli power = 1;
    while (x > 0) {
        if (x % 10 != 0 && x % 10 != 9) {
            nonzero = true;
        }
        if (!nonzero) {
            power *= 10;
        }
        if (x % 10 >= 5) {
            digit = 9 - (x % 10);
        } else {
            digit = x % 10;
        }
        if (x == 9) {
            ans = ans * 10 + (9);
            break;
        }
        ans = ans * 10 + (digit);
        x /= 10;
    }
    if (!nonzero) {
        power /= 10;
    }
    cout << reverseInt(ans) * power;
    return 0;
}