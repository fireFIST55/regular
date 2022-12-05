#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int n,m;
    cin>>n>>m;
    ll ans=INT_MAX;
    vector<ll>a(n),b(n),c(n);
    for(ll &X: a)   cin>>X;
    for(ll &X: b)   cin>>X;

    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        ll x=(b[0]-a[i]+m)%m;
        for(int j=0;j<n;j++)
            c[j]=(a[j]+x)%m;
        sort(c.begin(),c.end());

        for(int j=0;j<n;j++){
            if(c[j]!=b[j])  break;
            else if(j==n-1) ans=min(ans,x);
        }
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