#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, rook, nneed = 0; cin >> n >> rook;
    vector<int>vis(n + 1), khela[n + 1];
    for(int i = 0; i < rook; i += 1){
        int x, y; cin >> x >> y;
        if(x == y) nneed += 1;
        else khela[x].emplace_back(y);
    }

    function<bool(int, int)> isCycle = [&](int u, int a){
        bool ok = 0; vis[u] = 1;
        for(int v: khela[u]){
            if(v == a)  ok = 1;
            if(ok) break;
            if(vis[v]) continue;
            ok |= isCycle(v, a);
        }

        return ok;
    };

    int cycle = 0;
    for(int i = 1; i <= n; i += 1){
        if(vis[i] || khela[i].empty()) continue;
        else{
            vis[i] = 1;
            if(isCycle(i, i)) cycle += 1;
        }
    }

    cout << rook - nneed + cycle << '\n';
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