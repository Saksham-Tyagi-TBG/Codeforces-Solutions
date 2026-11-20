#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long int n;
  cin >> n;
  (n % 2) ? cout << ((-n - 1) / 2) : cout << n / 2;
  cout << "\n";
  return 0;
}