#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int u, v, n;
    cin >> n;
    bool no = 0;
    vector<int>vis(n + 1, 0), ans(n - 1), vp[n + 1];
    map<pair<int, int>, int>ind;

    for(int i = 0; i < n - 1; i += 1){
        cin >> u >> v;
        vp[u].push_back(v); vp[v].push_back(u);

        if(vp[u].size() > 2 || vp[v].size() > 2) no = 1;
        ind[{max(u, v), min(u, v)}] = i;
    }

    if(no)  cout << - 1;
    else{
        function<void(int, int, int last)>dfs = [&](int u, int v, int last){
            for(int x: vp[u]){
                if(x != v){
                    if(last == 2){
                        ans[ind[{max(u, x), min(u, x)}]] = 5;
                        dfs(x, u, 5);
                    }
                    else{
                        ans[ind[{max(u, x), min(u, x)}]] = 2;
                        dfs(x, u, 2);
                    }
                }
            }
        };

        dfs(u, -1, 2);

        for(int x: ans) cout << x << " ";
    }
    cout << '\n';
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