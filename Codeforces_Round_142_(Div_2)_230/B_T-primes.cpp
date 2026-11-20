#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define lli long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int upper = 1000005;
    bool NotprimeArr[upper] = {false};
    NotprimeArr[1] = true;
    for (int i = 2; i * i < upper; i++) {
        if (NotprimeArr[i] == false) {
            for (long long int j = i * i; j < upper; j += i) {
                if (NotprimeArr[j] == false) {
                    NotprimeArr[j] = true;
                }
            }
        }
    }

    int n;
    cin >> n;
    vector<lli> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        double y = sqrt(arr[i]);
        int x = (int)sqrt(arr[i]);
        if (x != y) {
            cout << "NO\n";
            continue;
        }
        if (!NotprimeArr[x]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}