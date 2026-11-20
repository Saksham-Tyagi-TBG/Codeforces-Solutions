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
    int even = 0;
    int odd = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2) {
            odd++;
        } else {
            even++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (odd == 1 && arr[i] % 2) {
            cout << i + 1;
            return 0;
        } else if (even == 1 && arr[i] % 2 == 0) {
            cout << i + 1;
            return 0;
        }
    }
    return 0;
}