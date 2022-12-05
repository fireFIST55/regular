#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll k, ans = 0; cin >> n >> k;
    vector<ll>vc(n);
    for(ll &i: vc) cin >> i;
    sort(vc.begin(), vc.end()); k = 2*k;

    for(int i = 0; i < n; i += 1){
        if(vc[i] <= k) k = max(k, 2*vc[i]);
        else{
            ll left = 1, right = 31, take = 0;
            while(left <= right){
                ll mid = (left + right) / (2);
                if((1 << mid)*k >= vc[i]){
                    take = mid; right = mid - 1;
                }
                else left = mid + 1;
            }

            ans += take; k = max((1 << take)*k, 2*vc[i]);
        }
    }
    cout << ans << '\n';
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