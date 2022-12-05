#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll in = 0, out = 0;

ll khela(ll a, ll start){
    ll left = 1, right = a, till = - 1;
    while(left <= right){
        ll mid = (left + right) / (ll)2, l = start, r = start + mid - 1, curr;
        curr = r*(r + 1)/2 - (l?l*(l - 1)/2: 0) + in;

        if(curr <= a){
            till = mid; left = mid + 1;
        }
        else right = mid - 1;
    }

    if(till != - 1){
        ll l = start, r = start + till - 1, curr;
        curr = r*(r + 1)/2 - (l?l*(l - 1)/2: 0) + in;
        if(curr < a) out = max((ll)1, till - a + curr);
    }
    
    vector<ll>ans;
    if(in && in <= a) ans.emplace_back(in);
    for(ll i = 0, l = start; i < till; i += 1, l += 1){
        if(out && l >= out) ans.emplace_back(l + 1);
        else ans.emplace_back(l);
    }

    cout << ans.size() << '\n';
    for(ll i: ans) cout << i << ' ';
    cout << '\n';

    ll x = max((ll)1, in?till + 2: till + 1);
    swap(in, out);

    return x;
}

void solve(){
    ll a, b; cin >> a >> b;
    ll from = khela(a, 1);
    khela(b, from);
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