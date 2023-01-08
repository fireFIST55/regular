#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    int n;
    cin >> n;
    vector<int> p(n);
    for (int j = 0; j < n; j++){
      cin >> p[j];
      p[j]--;
    }
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int j = 0; j < n; j++){
      if (p[j] != j && p[j] == n - 1 - j){
        cnt1++;
      }
      if (p[j] == j && p[j] != n - 1 - j){
        cnt2++;
      }
      if (p[j] != j && p[j] != n - 1 - j){
        cnt3++;
      }
    }
    if (cnt1 + cnt3 <= cnt2){
      cout << "First" << endl;
    } else if (cnt2 + cnt3 < cnt1){
      cout << "Second" << endl;
    } else {
      cout << "Tie" << endl;
    }
  }
}