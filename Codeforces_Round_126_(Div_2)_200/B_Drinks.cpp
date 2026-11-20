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
    int p;
    int summ = 0;
    for (int i = 0; i < n; i++) {
        cin >> p;
        summ += p;
    }
    cout << fixed << setprecision(12) << (double)summ / n << "\n";
    return 0;
}