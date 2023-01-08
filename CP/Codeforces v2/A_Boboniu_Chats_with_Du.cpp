#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, d; cin >> n >> m >> d;
    vector<int>extra, solid;
    for(int i = 0; i < n; i += 1){
        int a; cin >> a;
        if(a > m) extra.emplace_back(a);
        else solid.emplace_back(a);
    }
    sort(extra.rbegin(), extra.rend());
    sort(solid.rbegin(), solid.rend());
    deque<pair<int, int>>khela;
    for(int i = 0; i < solid.size(); i += 1){
        int j = i, cnt = 0, curr = 0;
        while(j < solid.size() && cnt < d + 1){
            curr += solid[j++]; cnt += 1;
        }
        i = j - 1; khela.push_back({curr, cnt});
    }
    ll ans = 0, j = n - 1, k = 0;
    for(int i = 0; i < extra.size() && j >= 0; i += 1){
        if(!khela.empty() && extra[i] < khela.front().first){
            k += khela.front().second; j -= khela.front().second;
            ans += (ll)khela.front().first; khela.pop_front(); i -= 1;
        }
        else ans += (ll)extra[i], j -= (d + 1);
    }
    while(!khela.empty() && j >= 0){
        if(j - khela.front().second >= 0){
            k += khela.front().second, j -= khela.front().second;
            ans += (ll)khela.front().first; khela.pop_front();
        }
        else break;
    }
    while(j >= 0 && k < solid.size()){
        ans += (ll)solid[k++]; j -= 1;
    }
    cout << ans << '\n';
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