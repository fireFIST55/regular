#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int n,ans=0;
    ll mx=LONG_LONG_MIN,mxdef=0;
    cin>>n;
    vector<ll>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        if(i)   mxdef=max({mxdef,mx-vec[i]});
        mx=max(mx,vec[i]);
    }
    while(mxdef){
        ans+=1;
        mxdef>>=1;
    }
    cout<<ans<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}