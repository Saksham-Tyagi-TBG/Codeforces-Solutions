#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"

bool isLucky(int n) {
  while (n > 0) {
    if (n % 10 != 7 && n % 10 != 4) {
      return false;
    }
    n /= 10;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  if (isLucky(n)) {
    YES;
    return 0;
  }
  for (int i = 4; i <= n / 2; i++) {
    if (isLucky(i)) {
      if (n % i == 0) {
        YES;
        return 0;
      }
    }
  }
  NO;
  return 0;
}