#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<pair<int, int>>vp;
    for(int i = 0; i < n; i += 1){
        int u, v; cin >> u >> v;
        vp.emplace_back(u, v);
    }
    sort(vp.begin(), vp.end());
    for(pair<int, int>pi: vp) cout << pi.first << " " << pi.second << endl;
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