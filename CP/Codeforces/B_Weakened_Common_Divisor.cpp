#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool yes = 1;
    int n; cin >> n;
    map<ll, int>taken;
    deque<ll>posD;

    for(int i = 0; i < n; i += 1){
        ll a, b; cin >> a >> b;

        if(!i){
            vector<ll>vc{a, b};
            for(ll x: vc){
                for(ll k = 2; k * k <= x; k += 2){
                    if(!(x % k)){
                        if(!taken[k]) posD.push_back(k); taken[k] = 1;
                        while(!(x % k))
                            x /= k;
                    }
                    if(k == 2) k -= 1;
                }

                if(x > 1 && !taken[x]) posD.push_back(x); 
            }
        }
        else if(yes){
            bool ok = 0;
            int m = posD.size();
            for(ll k = 0; k < m; k += 1){
                ll x = posD.front(); posD.pop_front();
                if(!(a % x) || !(b % x)){
                    ok = 1; posD.push_back(x);
                }
            }

            yes = yes & ok;
        }
    }

    if(yes) cout << posD.front() << '\n';
    else cout << - 1 << '\n';
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