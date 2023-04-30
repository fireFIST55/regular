#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, q; cin >> n >> q;
    vector<int>ans(n);
    vector<pair<int, int>>adj[n + 5];
    for(int i = 0; i < q; i += 1){
        int l, r, x; cin >> l >> r >> x;
        adj[--l].emplace_back(--r, x), adj[r].emplace_back(l, x);
        ans[l] = (ans[l]?ans[l] & x: x), ans[r] = (ans[r]?ans[r] & x: x);
    }
    for(int i = 0; i < n; i += 1){
        int must = 0;
        bool leave = 0;
        for(pair<int, int> pi: adj[i]){
            int index = pi.first, x = pi.second;
            if(index == i) leave = 1;
            must |= (x ^ ans[index]);
        }
        if(leave) continue;
        for(int k = 0; k < 31; k += 1){
            if((ans[i] & (1 << k)) && !(must & (1 << k))) ans[i] ^= (1 << k);
        }
    }
    for(int i: ans) cout << i << ' ';
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}