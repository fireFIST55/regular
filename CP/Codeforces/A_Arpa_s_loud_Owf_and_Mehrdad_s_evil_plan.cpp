#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vis(n), adj[n];
    for(int i = 0; i < n; i += 1){
        int a; cin >> a; a -= 1;
        adj[i].emplace_back(a);
    }

    function<bool(int u)>cycle = [&](int u){
        bool curr = 0;
        for(int v: adj[u]){
            if(curr) break;
            if(v == u){
                curr = 1;
                break;
            }
            curr |= cycle(v);
        }

        return curr;
    };

    function<int(int u, int start, int cnt)>lngth = [&](int u, int start, int cnt){
        vis[u] = 1;
        for(int v: adj[u]){
            if(v == start) return cnt;
            else return lngth(v, start, cnt + 1);
        }
    };


    vector<int>vc;
    for(int i = 0; i < n; i += 1){
        if(vis[i]) continue;
        else{
            if(!cycle(i)){
                cout << - 1 << '\n';
                return;
            }
            vc.emplace_back(lngth(i, i, 1));
        }
    }

    int curr = vc[0];
    for(int i = 1; i < vc.size(); i += 1){
        curr = (curr * vc[i])/__gcd(curr, vc[i]);
    }
    cout << curr << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}