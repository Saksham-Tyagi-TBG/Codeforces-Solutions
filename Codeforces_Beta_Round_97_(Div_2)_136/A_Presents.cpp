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
    int arr_ans[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        int a = arr[i];
        arr_ans[a - 1] = i + 1;
    }
    for (int i = 0; i < n; i++) {
        cout << arr_ans[i] << " ";
    }
    return 0;
}