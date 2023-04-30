#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    ll cost = 0; cin >> n >> k;
    vector<int>program(n), cold(k), hot(k), prev(k + 5, - 1), khela, freq(k + 5);
    for(int &i: program) cin >> i;
    for(int &i: cold) cin >> i;
    for(int &i: hot) cin >> i;

    for(int i = 0; i < n; i += 1){
        freq[program[i]] += 1;
        if(freq[program[i]] == 1) cost += cold[program[i] - 1];
        else if(freq[program[i]] == 2) cost -= cold[program[i] - 1], khela.emplace_back(program[i]);
        if(freq[program[i]] > 1) khela.emplace_back(program[i]); 
    }
    int m = khela.size();
    //cout << m << " " << cost << endl;
    vector<ll>prefix(m);
    vector<vector<ll>>dp(m, vector<ll>(2, INT_MAX));
    for(int i = 0; i < m; i += 1){
        prefix[i] = (i?prefix[i - 1]: 0LL) + cold[khela[i] - 1];
        if(prev[khela[i]] == - 1) dp[i][0] = dp[i][1] = (!i?0LL: min(dp[i - 1][0], dp[i - 1][1])) + cold[khela[i] - 1];
        else{
            int j = prev[khela[i]];
            dp[i][0] = (i?min(dp[i - 1][0], dp[i - 1][1]): 0LL) + cold[khela[i] - 1];
            dp[i][1] = (j?min(dp[j - 1][0], dp[j - 1][1]): 0LL) + cold[khela[i] - 1] + hot[khela[i] - 1] + (i - 1 - j?prefix[i - 1] - prefix[j]: 0LL);
        }
        prev[khela[i]] = i;
    }
    cout << min(dp[m - 1][0], dp[m - 1][1]) + cost << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}