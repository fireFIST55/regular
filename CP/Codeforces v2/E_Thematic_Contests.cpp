#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll calc(ll n){
    ll res = (ll)1 << n; res = res - (ll)1;
    return res;
}

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    vector<ll>khela;
    map<int, int>freq;
    for(int &i: vc) cin >> i, freq[i] += 1;
    for(pair<int, int>p: freq) khela.emplace_back(p.second);
    sort(khela.begin(), khela.end());
    ll mx = 0; int m = khela.size();
    for(int i = m - 1; i >= 0; i -= 1){
        if(i == m - 1) mx = max(mx, khela[i]);
        else{
            if(khela[i + 1] & 1) khela[i + 1] -= 1;
            ll mn = khela[i + 1] / (ll) 2; mn = min(mn, khela[i]); khela[i] = mn;
            khela[i + 1] = mn * (ll) 2; mx = max(mx, mn * calc(m - 1 - i + 1));
        }
    }
    cout << mx << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}