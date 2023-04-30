#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 5;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>cnt(N), ans(n), cntd(N), khela[N];
    vector<pair<int, int>>vp;
    for(int i = 0; i < n; i += 1){
        int l, r; cin >> l >> r;
        vp.emplace_back(l, r); cnt[l] += 1; cnt[r + 1] -= 1;
        khela[l].emplace_back(i + 1); khela[r + 1].emplace_back( - i - 1);
    }
    for(int i = 1; i < N; i += 1){
        cnt[i] += cnt[i - 1];
    }
    int del = 0;
    set<pair<int, int>>currSeg;
    for(int i = 1; i < N; i += 1){
        del += cntd[i];
        for(int point: khela[i]){
            if(point > 0) currSeg.insert(vp[point - 1].second, point - 1);
            else{
                auto it = currSeg.find({vp[- point - 1].second, - point - 1});
                if(it != currSeg.end()) currSeg.erase(it);
            }
        }

        while(cnt[i] - del > k){
            del += 1;
            int pos = currSeg.rbegin() -> second;
            currSeg.erase(prev(currSeg.end()));
            cntd[vp[pos].second + 1] -= 1; ans[pos] = 1;
        }
    }
    for(int i = 0; i < n; i += 1){
        if(ans[i]) cout << i << ' ';
    }
    cout << '\n';
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