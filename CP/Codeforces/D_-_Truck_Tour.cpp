#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<pair<int, int>>vp;
    vector<int>def(n), mn(n), prefix(n);
    for(int i = 0; i < n; i += 1){
        int p, dis; cin >> p >> dis;    vp.emplace_back(p, dis);
        prefix[i] = (i?prefix[i - 1]: 0) + vp[i].first - vp[i].second;
    }
    for(int i = n - 1; i >= 0; i -= 1){
        def[i] = (i < n - 1?def[i + 1]: 0) + vp[i].first - vp[i].second;
    }

    int khela = 0;
    for(int i = n - 1; i >= 0; i -= 1){
        khela += vp[i].first - vp[i].second;
        mn[i] = min(vp[i].first - vp[i].second, (i < n - 1?mn[i + 1]: 0) + vp[i].first - vp[i].second);
    }

    int prevDef = 0;
    for(int i = 0; i < n; i += 1){
        if(prevDef + def[i] >= 0 && (mn[i] >= 0 || (mn[i] < 0 && mn[i] + prevDef >= 0))){
            cout << i << '\n';
            return;
        }
        else prevDef += vp[i].first - vp[i].second;
    }
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