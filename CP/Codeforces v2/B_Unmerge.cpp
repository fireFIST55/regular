#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>index(2 * n + 5), vc;
    for(int i = 0; i < 2 * n; i += 1){
        int a; cin >> a;
        index[a] = i;
    }
    int next = 2 * n, last_index = 2 * n;
    while(next > 0){
        int length = last_index - index[next];
        vc.emplace_back(length); last_index = index[next];
        next -= 1;
        while(next > 0 && index[next] > last_index) next -= 1;
    }
    int m = vc.size();
    vector<vector<bool>>dp(m, vector<bool>(n + 5, 0));
    for(int i = 0; i < m; i += 1){
        for(int j = vc[i]; j < n + 1; j += 1){
            dp[i][j] = dp[i - 1][j];
            if(dp[i][j - vc[i]]) dp[i][j - vc[i]] = 1;
        }
    }
    cout << (dp[m - 1][n]?"YES\n": "NO\n");
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