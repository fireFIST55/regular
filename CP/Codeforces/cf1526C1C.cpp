#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main(void){
    encoding_898;
    int n,mx=0;
    cin>>n;
    ll dp[n+1][n+1];
    vector<ll>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        memset(dp[i],0,sizeof(dp[i]));
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(dp[i-1][j-1]+vec[i-1]>=0){
                dp[i][j]=max(dp[i-1][j-1]+vec[i-1],dp[i-1][j]);
            }
            else    dp[i][j]=dp[i-1][j];
        }
    }
    cout<<mx<<endl;
    return 0;
}