#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n), ans(n + 5);
    for(int i = 0; i < n; i += 1) cin >> vc[i];
    for(int i = 0; i < n; i += 1){
        ans[n + 1 - vc[i]] = i + 1;
    }
    for(int i = 1; i < n + 1; i += 1) cout << ans[i] << ' ';
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}