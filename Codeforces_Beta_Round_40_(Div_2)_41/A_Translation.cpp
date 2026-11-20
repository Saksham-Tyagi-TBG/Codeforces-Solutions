#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, t;
  cin >> s;
  cin >> t;

  int length = s.size();
  if (length != t.size()) {
    cout << "NO\n";
    return 0;
  }
  for (int i = 0; i < length; i++) {
    if (s[i] == t[length - i - 1]) {
      continue;
    } else {
      cout << "NO\n";
      return 0;
    }
  }

  cout << "YES\n";
  return 0;
}