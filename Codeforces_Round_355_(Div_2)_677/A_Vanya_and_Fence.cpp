#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, h;
  cin >> n >> h;
  int width = n;
  int num = 0;
  for (int i = 0; i < n; i++) {
    cin >> num;
    if (num > h) {
      width++;
    }
  }
  cout << width << "\n";
  return 0;
}