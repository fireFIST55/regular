#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, base; cin >> n;
    vector<int>vc(n), vis(n), ase[32];
    for(int &i: vc) cin >> i;
    sort(vc.rbegin(), vc.rend());
    for(int i = 0; i < n; i += 1){
        for(int k = log2(vc[i]); k >= 0; k -= 1){
            if(vc[i] & (1 << k)) ase[k].emplace_back(i);
        }
    } 
    base = (1 << 30) - 1; int prefix = vc[0]; vis[0] = 1;
    for(int i = 1; i < n; i += 1){
        int need = base ^ prefix;
        bool yes = 0;
        for(int k = 30; k >= 0; k -= 1){
            if((need & (1 << k)) && !ase[k].empty()){
                vector<int>take;
                for(int u: ase[k]){
                    if(!vis[u]) take.emplace_back(u); 
                }

                int index = - 1, mx = 0;
                for(int j = 0; j < take.size(); j += 1){
                    if(mx < (need & vc[take[j]])){
                        mx = need & vc[take[j]]; index = take[j];
                    }
                }
                if(index != - 1){
                    vis[index] = 1;
                    swap(vc[i], vc[index]), yes = 1; break;
                }
            }
        }
        if(!yes) break;
        else prefix |= vc[i];
    }
    for(int i: vc) cout << i << ' ';
    cout << '\n';
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