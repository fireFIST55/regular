#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, k, ans = 0, cost = 0; cin >> n >> m >> k;
    vector<vector<int>>matt(n, vector<int>(m));
    for(int i = 0; i < n; i += 1){
        for(int &k: matt[i]) cin >> k;
    }

    for(int i = 0; i < m; i += 1){
        vector<int>dp(n);
        int currcost = 0, mx = 0, count = 0;
        for(int j = n - 1; j >= 0; j -= 1){
            dp[j] = (j != n - 1?dp[j + 1]: 0) + (matt[j][i] == 1);
        }
        for(int j = 0; j < n; j += 1){
            if(matt[j][i] != 1) continue;
            dp[j] = dp[j] - (j + k < n?dp[j + k]: 0);
            if(mx < dp[j]){
                currcost = count; mx = dp[j];
            }

            count += (matt[j][i] == 1);
        }

        cost += currcost; ans += mx;
    }
    cout << ans << " " << cost << '\n';
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