#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll last; cin >> n >> last; n += 1;
    vector<ll>vc(n), lit(n), off(n);
    for(int i = 0; i < n; i += 1){
        if(i == n - 1) vc[i] = last;
        else cin >> vc[i];
    }
    for(int i = 0; i < n; i += 1){
        if(i&1){
            off[i] += off[i - 1] + (vc[i] - vc[i - 1]);
            lit[i] = lit[i - 1];
        }
        else{
            off[i] = (i?off[i - 1]: 0);
            lit[i] = (i?lit[i - 1]: 0) + (i?vc[i] - vc[i - 1]: vc[i]);
        }
    }
    

    ll ans = lit[n - 1];
    for(int i = 0; i < n; i += 1){
        ll curr = i?lit[i - 1]: (ll)0;
        ll dif = i?vc[i] - vc[i - 1]: vc[i];
        if(dif == 1) continue;

        if(i&1) curr += (vc[i] - vc[i - 1] - (ll)1) + (off[n - 1] - off[i]);
        else curr += (i?vc[i] - (ll)1 - vc[i - 1]: vc[i] - (ll)1) + (off[n - 1] - off[i]);

        ans = max(ans, curr);
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