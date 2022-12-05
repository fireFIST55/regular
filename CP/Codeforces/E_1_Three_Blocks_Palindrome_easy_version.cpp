#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    deque<int>khela[27];
    vector<vector<int>>dp(n, vector<int>(n, 0));
    vector<vector<int>>freq(n, vector<int>(27, 0));
    for(int i = 0; i < n; i += 1){
        int a; cin >> a; freq[i][a] += 1;
        khela[a].push_back(i);

        if(!i) continue;
        for(int j = 1; j < 27; j += 1) freq[i][j] += freq[i - 1][j];
    }

    for(int i = 0; i < n; i += 1){
        for(int j = 0; j <= i; j += 1){
            int mx = 0;
            for(int k = 1; k < 27; k += 1){
                mx = max(mx, freq[i][k] - (j?freq[j - 1][k]: 0));
            }

            dp[j][i] = mx;
        }
    }

    int ans = 1;
    for(int i = 1; i < 27; i += 1){
        int total = 0;
        while(khela[i].size() > 1){
            int l = khela[i].front(); khela[i].pop_front();
            int r = khela[i].back(); khela[i].pop_back(); total += 2; ans = max(ans, total);

            l += 1; r -= 1; 
            if(l <= r) ans = max(ans, total + dp[l][r]);
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