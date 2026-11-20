#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int solve(int n, int x, int y) {
    // assuming x>=y
    int m1 = 0;
    int m2 = 0;
    int ans = 0;
    while (x * m1 <= n) {
        int temp = 0;
        float m3 = (n - m1 * x) / float(y);
        if (m3 == (int)m3) {
            temp = m1 + m3;
        }
        m1++;
        if (temp > ans) {
            ans = temp;
        }
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int sum = a + b + c;

    int arr[3] = {a, b, c};
    sort(arr, arr + 3);
    c = arr[0];
    b = arr[1];
    a = arr[2];
    int m1 = 0;
    int m2 = 0;
    int ans = 0;
    while (a * m1 <= n) {
        if (solve(n - a * m1, b, c) == 0) {
            m1++;
            continue;
        }
        int temp = 0;
        temp = m1 + solve(n - a * m1, b, c);
        m1++;
        if (temp > ans) {
            ans = temp;
        }
    }
    if (ans == 0) {
        cout << n / a;
        return 0;
    }
    cout << ans;

    return 0;
}