#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,ans=0;
    cin>>n;
    vector<int>vc(n),dp(n);
    vector<bool>changed(n,0);
    for(auto &X: vc)    cin>>X;

    for(int i=0;i<n;i++){
        dp[i]=1;
        if(i){
            if(vc[i]>vc[i-1]) dp[i]=max(dp[i],dp[i-1]+1),changed[i]=changed[i]|changed[i-1];
            if(i-2>=0&&vc[i]>vc[i-2]&&!changed[i-2]&&dp[i]<dp[i-2]+1)   dp[i]=dp[i-2]+1,changed[i]=1;
        }

        ans=max(ans,dp[i]);
    }

    cout<<ans<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t=1;
    while(t--)
        solve();
    
    return 0;
}