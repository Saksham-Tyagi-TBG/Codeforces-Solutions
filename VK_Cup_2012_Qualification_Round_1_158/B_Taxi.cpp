#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> mp;
    mp[1] = 0;
    mp[2] = 0;
    mp[3] = 0;
    mp[4] = 0;

    int n;
    cin >> n;

    int s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        mp[s]++;
    }

    int taxi = mp[4] + mp[2] / 2;
    int rem1 = mp[1];
    int rem2 = mp[2] % 2; // 1, 0
    int rem3 = mp[3];

    int mini = min(rem1, rem3);
    taxi += mini;
    rem1 -= mini;
    rem3 -= mini;

    if (rem3 > 0) {
        taxi += rem3;
        taxi += rem2;
    }
    if (rem1 > 0) {
        taxi += rem1 / 4;
        rem1 = rem1 % 4;
        int mini2 = min(rem1, rem2);
        rem1 -= mini2;
        rem2 -= mini2;

        if (rem1 > 0) {
            if (rem1 != 2 || mini2 == 0) {
                taxi++;
            } else {
                taxi += 2;
            }
        }

        if (rem1 == 0 && rem2 == 0) {
            if (mini2 != 0) {
                taxi++;
            }
        }
    }

    if (rem1 == 0 && rem3 == 0) {
        if (rem2 > 0) {
            taxi++;
        }
    }

    cout << taxi << "\n";
    return 0;
}