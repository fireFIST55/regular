#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<pair<int, int>, int>a, pair<pair<int, int>, int>b){
    if(a.first.first < b.first.first) return 1;
    else return 0;
}

void solve(){
    int n; cin >> n;
    vector<int>vc(n), ans(n);
    vector<pair<pair<int, int>, int>>vp;

    for(int &i: vc) cin >> i;
    for(int i = 0; i < n; i += 1){
        int x; cin >> x;    vp.push_back({{vc[i], x}, i});
    }
    sort(vp.begin(), vp.end(), cmp);

    int mn = INT_MAX, pos = 0;
    vector<int>dpmx(n);
    for(int i = 0; i < n; i += 1) dpmx[i] = i?max(dpmx[i - 1], vp[i].first.second): vp[i].first.second;
    for(int i = n - 1; i >= 0; i -= 1){
        mn = min(mn, vp[i].first.second);
        if(i && dpmx[i - 1] < mn){
            pos = i; break;
        }
    }

    for(int i = 0; i < pos; i += 1) ans[vp[i].second] = 0;
    for(int i = pos; i < n; i += 1) ans[vp[i].second] = 1;
    for(int i: ans) cout << i;
    cout << '\n';
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