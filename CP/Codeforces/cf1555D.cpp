#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n, q, l, r, ans, curr = 0;
    cin>>n>>q;
    string s, t="abc";
    vector<vector<int>>dp(6, vector<int>(n+1));
    cin>>s;

    do{
        for(int i = 0; i<n; i++)
            dp[curr][i+1] = dp[curr][i] + (t[i%3]!=s[i]);

        curr+=1;
    }while(next_permutation(t.begin(), t.end()));

    for(int i = 0; i<q; i++){
        cin>>l>>r;

        ans = INT_MAX;
        for(int j = 0; j<6; j++)
            ans = min(ans, dp[j][r]-dp[j][l-1]);

        cout<<ans<<endl;
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    while(t--)
        solve();

    return 0;
}