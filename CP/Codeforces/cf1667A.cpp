#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    ll moves = 1e18;
    vector<ll>vc(n);
    for(ll &i: vc) cin >> i;
    for(int fix = 0; fix < n; fix += 1){
        ll prev = 0, curr = 0;
        for(int i = fix - 1; i >= 0; i -= 1){
            if(prev < vc[i]) prev = vc[i];
            else{
                curr += (prev)/vc[i]; prev = vc[i] + ((prev)/vc[i])*vc[i];
            }

            curr = curr + (ll)1;
        }

        prev = 0;
        for(int i = fix + 1; i < n; i += 1){
            if(prev < vc[i]) prev = vc[i];
            else{
                curr += (prev)/vc[i]; prev = vc[i] + ((prev)/vc[i])*vc[i];
            }

            curr = curr + (ll)1;
        }

        moves = min(moves, curr);
    }

    cout << moves << '\n';
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