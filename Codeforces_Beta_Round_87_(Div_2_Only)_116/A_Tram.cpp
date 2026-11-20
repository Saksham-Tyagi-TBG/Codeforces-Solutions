#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  int passengers = 0;
  cin >> n;
  int maxi = 0;
  while (n--) {
    int a, b;
    cin >> a >> b;
    passengers = passengers + (b - a);
    if (passengers > maxi) {
      maxi = passengers;
    }
  }

  cout << maxi << "\n";
  return 0;
}