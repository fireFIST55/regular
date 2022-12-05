#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll>khela;
const ll M = 1e12 + 5;

void solve(){
    int m = khela.size(), ans = INT_MAX;
    ll n; cin >> n;
    for(int i = 0; i < (1 << m) + 1; i += 1){
        int l = log2(i) + 1, curr = 0;
        ll x = 0;
        
        for(int k = 0; k < l; k += 1){
            if(i&(1 << k)){
                x += khela[k]; curr += 1;
            }
        }

        if(n >= x){
            ll baki = n - x, xx = 1;
            ll lim = log2(baki);
            for(ll r = 0; r < lim + 1; r += 1){
                if(baki&(xx<<r)) curr += 1;
            }

            ans = min(curr, ans);
        }
    }

    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    ll x = 1;
    for(int i = 1; x < M; i += 1){
        x = x*(ll)i;
        if(x < M) khela.push_back(x);
    }


    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}