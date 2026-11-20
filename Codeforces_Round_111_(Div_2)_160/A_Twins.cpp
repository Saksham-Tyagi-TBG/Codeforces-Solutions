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
    int arr[n];
    int summ = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        summ += arr[i];
    }
    int count = 0;
    int money = 0;
    sort(arr, arr + n);
    for (int i = n - 1; i >= 0; i--) {
        money += arr[i];
        count++;
        if (money > summ / 2) {
            cout << count;
            break;
        }
    }
    return 0;
}