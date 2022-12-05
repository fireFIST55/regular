#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, c; cin >> n >> c;
    vector<ll>v(n), vc, vis(c + 5), khela(c + 5);
    for(ll &i: v){
        cin >> i; khela[i] = 1; vis[i] = 1;
    }
    for(int i = 1; i <= c; i += 1){
        khela[i] += khela[i - 1];
        if(vis[i]) vc.emplace_back(i);
    }

    n = vc.size();
    for(ll r = 1; r <= c; r += 1){
        if(vis[r]) continue;
        for(ll y = 0; y < n && vc[y] * r <= c; y += (ll)1){
            ll left = vc[y] * r, right = min(c, vc[y] * r + vc[y] - 1);
            if(khela[right] - khela[left - 1]){
                cout << "No\n";
                return;
            }
        }
    }
    cout << "Yes\n";
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