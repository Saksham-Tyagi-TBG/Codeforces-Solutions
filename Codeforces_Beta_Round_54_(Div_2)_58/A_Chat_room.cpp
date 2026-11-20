#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES\n"
#define NO cout << "NO\n"

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  int length = s.size();
  char letters[5] = {'h', 'e', 'l', 'l', 'o'};
  int count = 0;
  for (int i = 0; i < length; i++) {
    if (s[i] == letters[count]) {
      count++;
    }
    if (count == 5) {
      break;
    }
  }
  if (count == 5)
    YES;
  else
    NO;
  return 0;
}