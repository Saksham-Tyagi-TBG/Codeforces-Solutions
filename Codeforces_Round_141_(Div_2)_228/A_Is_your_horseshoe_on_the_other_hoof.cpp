#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[4];

    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    int count[4] = {0};
    for (int i = 0; i < 4; i++) {
        if (arr[0] == arr[i]) {
            count[0]++;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (arr[1] == arr[i]) {
            count[1]++;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (arr[2] == arr[i]) {
            count[2]++;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (arr[3] == arr[i]) {
            count[3]++;
        }
    }
    int count2 = 0;
    int maxi = *max_element(count, count + 4);
    if (maxi == 4) {
        cout << 3;
    } else if (maxi == 3) {
        cout << 2;
    } else if (maxi == 2) {
        for (int i = 0; i < 4; i++) {
            if (count[i] == 2) {
                count2++;
            }
        }
        if (count2 == 4) {
            cout << 2;
        } else {
            cout << 1;
        }
    } else {
        cout << 0;
    }
    return 0;
}