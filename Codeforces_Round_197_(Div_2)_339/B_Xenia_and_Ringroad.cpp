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
    int arr[m];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    if (m == 1) {
        cout << 0;
        return 0;
    }

    int initial = 1;
    lli time = arr[0] - 1;

    for (int i = 1; i < m; i++) {
        if (arr[i] > arr[i - 1]) {
            time += arr[i] - arr[i - 1];
        } else if (arr[i] == arr[i - 1]) {
            continue;
        } else {
            time += (n - arr[i - 1]) + (arr[i]);
        }
    }

    cout << time;
    return 0;
}