#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<pair<int, int>>vp;
    vector<int>suff(n), index(n), ans(n);
    vector<pair<pair<int, int>, int>> khela;
    for(int i = 0; i < n; i += 1){
        int u, v; cin >> u >> v;
        vp.emplace_back(u, v); khela.push_back({{u, v}, i});
    }
    sort(khela.rbegin(), khela.rend());
    for(int i = n - 1; i >= 0; i -= 1){
        if(i == n - 1) suff[i] = khela[i].first.second, index[i] = i;
        else{
            if(khela[i].first.second < suff[i + 1]){
                suff[i] = khela[i].first.second; index[i] = i;
            }
            else suff[i] = suff[i + 1], index[i] = index[i + 1];
        }
    }
    function<int(int x)>sml = [&](int x){
        int left = 0, right = n - 1, index = n;
        while(left <= right){
            int mid = (left + right) >> 1;
            if(khela[mid].first.first >= x) left = mid + 1;
            else{
                index = mid; right = mid - 1;
            }
        }

        return index;
    };
    
    for(int i = 0; i < n; i += 1){
        int indx = sml(vp[i].first);
        if(indx == n || suff[indx] >= vp[i].second){
            indx = sml(vp[i].second);
            if(indx == n || suff[indx] >= vp[i].first) ans[i] = - 1;
            else ans[i] = khela[index[indx]].second + 1;
        }
        else ans[i] = khela[index[indx]].second + 1;
    }
    for(int i: ans) cout << i << ' ';
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