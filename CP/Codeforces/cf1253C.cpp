#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int n,k;
    ll sm=0;
    cin>>n>>k;
    vector<ll>vc(n),dp(n);
    for(ll &X: vc) cin>>X;

    sort(vc.begin(),vc.end());

    for(int i=0;i<n;i++){
        sm+=vc[i];
        dp[i]=sm+((i-k)>=0?dp[i-k]:0);
        cout<<dp[i]<<' ';
    }
    cout<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t=1;
    while(t--)
        solve();

    return 0;
}