#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, l;
  cin >> n >> l;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  double a = arr[0];
  double b = l - arr[n - 1];
  double maxi = 0;

  for (int i = 1; i < n; i++) {
    if (arr[i] - arr[i - 1] > maxi) {
      maxi = arr[i] - arr[i - 1];
    }
  }

  cout << fixed << setprecision(10) << max(max(a, b), maxi / 2);
  return 0;
}