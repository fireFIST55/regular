#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

ll calc(ll n){
    ll ans = ((n - 1)*n)/(ll)2; return ans;
}

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    vector<pair<int, int>>dummy;
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; dummy.emplace_back(vc[i], i);
    }
    sort(dummy.begin(), dummy.end());

    int l, r;
    ll ans = 0;
    for(int i = 0; i < n;){
        if(vc[i] != dummy[i].first){
            bool ok = 0;
            l = r = i; r = max(r, dummy[i++].second);
            while(i < n && i <= r){
                if(vc[i] != dummy[i].first){
                    r = max(r, dummy[i++].second); ok = 1;
                }
            }
            ans += (ll)8 * calc(r - l + 1);
        }
        else i += 1;
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    for(int i = 0; i < t; i += 1){
        solve();
        if(i != t - 1) cout << '\n';
    }
    
    return 0;
}