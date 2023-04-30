#include "bits/stdc++.h"
#include <algorithm>
#include <locale>
#include <random>
#include <unordered_map>
#include <vector>

using namespace std;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
typedef long long ll;
typedef long double db;
typedef unsigned long long ull;

vector<int> shrink(vector<int> &a) {
  vector<int> a1;
  int n = a.size();
  int mx = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] > mx) {
      a1.emplace_back(a[i]);
      mx = a[i];
    }
  }
  return a1;
}

void solve() {
  int n;
  cin >> n;
  vector<vector<int>> a(n);
  int k;
  for (int i = 0; i < n; ++i) {
    int k;
    cin >> k;
    a[i].resize(k);
    for (auto &j : a[i]) {
      cin >> j;
    }
  }
  vector<vector<int>> a1(n);
  for (int i = 0; i < n; ++i) {
    a1[i] = shrink(a[i]);
  }
  map<int, vector<int>> b;
  for (int i = 0; i < n; ++i) {
    for (auto &j : a1[i]) {
      b[j].emplace_back(i);
    }
  }
  vector<int> dp(n);
  int closed = 0;
  for (auto &it : b) {
    int c = it.first;
    cout << c << " ";
    int newclosed = 0;
    for (auto &i : it.second) {
      if (c == a1[i].back()) {
        dp[i] = max(dp[i] + 1, closed + 1);
        newclosed = max(newclosed, dp[i]);
        continue;
      }
      if (c == a1[i].front()) {
        dp[i] = closed + 1;
        continue;
      }
      dp[i] = max(dp[i] + 1, closed + 1);
    }
    closed = max(closed, newclosed);
    cout << endl << endl;
  }
  cout << *max_element(all(dp));
}

signed main() {
  int t = 0;
  cin >> t;
  while (t --> 0) {
      solve();
      cout << '\n';
  }
  return 0;
}