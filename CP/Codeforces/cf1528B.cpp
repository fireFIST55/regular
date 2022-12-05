#include<bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define endl '\n'

void solve(){
    int n, a;
    cin>>n;
    vector<int>dp(n + 1);

    for(int i = 1; i<=n; i++){

        for(int j = i*2 ; j<=n; j += i)
            dp[j] += 1;
    }

    dp[0] = a = 1;
    for(int i = 1; i<=n; i++){
        dp[i] = (dp[i] + a)%MOD;

        a = (a + dp[i])%MOD;
    }

    cout<<dp[n]<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    while(t--)
        solve();

    return 0;
}