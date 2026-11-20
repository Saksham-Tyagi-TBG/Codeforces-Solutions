#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string a, b;
        int flag = 1;
        int n, m;
        cin >> n >> m;
        cin >> a;
        cin >> b;
        if ((n - m) != 3) {
            cout << "NO\n";
            continue;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int j = 1;
        char arr[4];
        arr[0] = 'e';
        arr[1] = 'i';
        arr[2] = 's';
        arr[3] = 'x';
        int now = 0;
        int i;
        for (i = 0; i < n; i++) {

            // also take that case when it is the last element
            if (j < 4 && a[i] == arr[j]) {
                j++;
                continue;
            }

            if (now < m && b[now] == a[i]) {
                now++;
                continue;
            } else {
                cout << "NO\n";
                flag = 0;
                break;
            }
        }

        if (flag) {
            cout << "YES\n";
        }
    }
    return 0;
}