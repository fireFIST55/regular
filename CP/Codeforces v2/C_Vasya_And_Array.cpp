#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool yes = 1;
    int n, m; cin >> n >> m;
    vector<int>prefix(n + 5), khela(n + 5);
    vector<pair<int, int>>srtd, unsrtd, rfs;
    for(int i = 0; i < m; i += 1){
        int a, u, v; cin >> a >> u >> v;
        if(a) srtd.emplace_back(u, v);
        else unsrtd.emplace_back(u, v);
    }
    sort(srtd.begin(), srtd.end());
    sort(unsrtd.begin(), unsrtd.end()); int last = - 1;
    for(int i = 0; i < srtd.size(); i += 1){
        for(int k = last + 1; k < srtd[i].first; k += 1) prefix[k] = k?prefix[k - 1]: 0;
        int j = i + 1, l = srtd[i].first, r = srtd[i].second;
        while(j < srtd.size() && srtd[j - 1].second >= srtd[j].first){
            r = srtd[j++].second;
        }
        for(int k = l; k <= r; k += 1) prefix[k] = (k?prefix[k - 1]: 0) + 1, khela[k] = 1;
        i = j - 1;
    }
    for(int i = 0; i < unsrtd.size(); i += 1){
        int j = i + 1, l = unsrtd[i].first, r = unsrtd[i].second;
        while(j < n && unsrtd[j - 1].second >= unsrtd[j].first) r = unsrtd[j++].second;
        if(prefix[r] - (l?prefix[l - 1]: 0) == r - l + 1) yes = 0;
        for(int k = l; k <= r; k += 1){
            if(khela[k]) continue;
            khela[k] = - 1;
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}