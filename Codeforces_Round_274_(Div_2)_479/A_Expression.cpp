#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int arr[6];
    arr[0] = a + b + c;
    arr[1] = a * b * c;
    arr[2] = a + b * c;
    arr[3] = (a + b) * c;
    arr[4] = a * b + c;
    arr[5] = a * (b + c);
    int maxi = arr[0];
    for (int i = 1; i < 6; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    cout << maxi << "\n";
    return 0;
}