#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, p, k;
  cin >> n >> p >> k;
  if (p != 1 && p - k > 1) {
    cout << "<< ";
  }
  for (int i = p - k; i <= p + k; i++) {
    if (i == p) {
      cout << "(" << p << ") ";
      continue;
    }
    if (i >= 1 && i <= n) {
      cout << i << " ";
    }
  }
  if (p != n && p + k < n) {
    cout << ">>";
  }
  cout << "\n";
  return 0;
}