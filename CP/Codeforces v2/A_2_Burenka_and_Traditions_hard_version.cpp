#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    map<int, int>last;
    vector<int>vc(n), dp(n + 1), prefix(n + 1);
    for(int &i: vc) cin >> i;
    for(int i = 0; i < n; i += 1) prefix[i + 1] = vc[i] ^ prefix[i];
    last[prefix[0]] = 0;
    for(int i = 1; i <= n; i += 1){
        dp[i] = dp[i - 1];
        if(last.count(prefix[i])) dp[i] = max(dp[i], 1 + dp[last[prefix[i]]]);
        last[prefix[i]] = i;
    }
    cout << n - dp[n] << '\n';
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