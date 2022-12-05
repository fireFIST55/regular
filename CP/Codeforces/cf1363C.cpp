#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x, ans = 0, mx = INT_MIN;  cin >> n >> x;
    vector<int>adj[n + 1], vc;
    map<pair<int, int>, bool>freq;

    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        if(!freq[{max(u, v), min(u,v)}]){
            adj[u].push_back(v); adj[v].push_back(u);
            freq[{max(u, v), min(u, v)}] = 1;
        }
    }

    if(adj[x].size() == 1){
        cout << "Ayush\n";
        return;
    }
    for(int i: adj[x]){
        int cnt = 1;
        deque<int>dq;
        dq.push_back(i);

        while(!dq.empty()){
            int u = dq.front(); dq.pop_front();
            for(int y: adj[u]){
                if(y != u && y != x && y != i){
                    cnt += 1; dq.push_front(y);
                }
            }
        }

        ans += cnt; mx = max(mx, cnt);
    }

    ans -= mx;
    !(ans&1)?cout << "Ayush\n": cout << "Ashish\n";
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