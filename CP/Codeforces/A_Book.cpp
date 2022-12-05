#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    deque<int>dq;
    vector<int>indegree(n + 5), rep(n + 5), khela[n + 5];
    for(int i = 0; i < n; i += 1){
        int k; cin >> k; indegree[i + 1] = k;
        if(!k) dq.push_back(i + 1);
        for(int j = 0; j < k; j += 1){
            int a; cin >> a; khela[a].emplace_back(i + 1);
        }
    }
    
    int comp = dq.size();
    while(!dq.empty()){
        int u = dq.front(); dq.pop_front();
        for(int k: khela[u]){
            rep[k] = max(rep[k], (u <= k?rep[u]: rep[u] + 1));
            indegree[k] -= 1;
            if(!indegree[k]) dq.push_back(k), comp += 1;
        }
    }
    if(comp == n){
        int ans = 0;
        for(int i = 1; i <= n; i += 1) ans = max(ans, rep[i]);
        cout << ans + 1 << '\n';
    }
    else cout << - 1 << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}