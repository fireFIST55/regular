#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    int m; cin >> m;
    vector<int>v(m);
    map<int, int>khela;
    for(int &i: v) cin >> i, khela[i] = 1;
    int cnt = 0;
    for(int i = 0; i < n; i += 1){
        cnt += khela[vc[i]]; khela[vc[i]] = 0;
    }
    cout << cnt << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}