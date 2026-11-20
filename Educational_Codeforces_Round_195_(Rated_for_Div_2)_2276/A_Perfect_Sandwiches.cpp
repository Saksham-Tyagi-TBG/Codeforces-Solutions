#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  int a, b;
  while (t--) {
    cin >> a >> b;

    int count = b;
    int req_cheese = 2 * b;
    int total_cheese = a;
    if (a <= b) {
      cout << -1 << "\n";
      continue;
    }
    while (total_cheese < req_cheese) {
      count--;
      req_cheese--;
    }

    cout << count << "\n";
  }
  return 0;
}