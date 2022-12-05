#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll roof = LONG_LONG_MIN;
    int n; cin >> n;
    vector<ll>vc(n);
    for(ll &i: vc){
        cin >> i; roof = max(roof, i);
    }

    ll ans = 1e18;
    for(ll need: {roof, roof + 1}){
        ll l = 0, r = 1e18, res = - 1;
        while(l <= r){
            ll mid = (l + r)/2;
            ll cnt1 = (mid + 1)/2, cnt2 = (mid - cnt1), leftover = 0;

            for(ll khela: vc){
                ll curr = (need - khela)/2;

                if((need - khela)%2) leftover += 1;
                if(curr <= cnt2)    cnt2 -= curr;
                else{
                    curr -= cnt2; cnt2 = 0;
                    leftover += curr*2;
                }
            }

            if(leftover <= cnt1){
                r = mid - 1; res = mid;
            }
            else l = mid + 1;
        }

        ans = min(ans, res);
    }

    cout << ans << '\n';
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