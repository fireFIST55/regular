#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve(){
    int n, k;
  cin >> n >> k;
  if (k == 1) {
    cout << "YES" << endl;
    for (int i = 1; i <= n * k; i++) {
      cout << i << endl;
    }
    return;
  }
  if (n % 2 == 1) {
    cout << "NO" << endl;
    return;
  }
  cout << "YES" << endl;
  int cont = 1;
  for (int i = 1; i <= n * k; i += 2, cont++) {
    cout << i << " ";
    if (cont % k == 0) {
      cout << endl;
    }
  }
  cont = 1;
  for (int i = 2; i <= n * k; i += 2, cont++) {
    cout << i << " ";
    if (cont % k == 0) {
      cout << endl;
    }
  }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}