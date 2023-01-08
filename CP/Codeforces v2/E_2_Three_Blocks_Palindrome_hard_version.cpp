#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, ans = 0; cin >> n;
    vector<int>vc(n), cnt[n + 5];
    vector<vector<int>>prefix(n, vector<int>(205, 0));
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; cnt[vc[i]].emplace_back(i);
        ans = max(ans, (int)cnt[vc[i]].size());
        prefix[i][vc[i]] += 1;
        if(!i) continue;
        for(int k = 1; k <= 200; k += 1) prefix[i][k] += prefix[i - 1][k];
    }
    bool yes = 1;
    for(int i = 1; i <= n && yes; i += 1){
        yes = 0;
        for(int k = 1; k <= 200; k += 1){
            if(cnt[k].size() < 2 * i) continue;
            else if(cnt[k].size() == 2 * i) ans = max(ans, 2 * i);
            else{
                yes = 1;
                int l = cnt[k][i - 1] + 1, r = cnt[k][(int)cnt[k].size() - i - 1] - 1;
                for(int j = 1; j <= 200; j += 1){
                    ans = max(ans, 2 * i + prefix[r][j] - prefix[l - 1][j]);
                }
            }
        }
    }
    cout << ans << '\n';
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