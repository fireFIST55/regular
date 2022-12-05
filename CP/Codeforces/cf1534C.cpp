#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 1000000007
void solve(){
    int a,n;
    ll ans=2;
    cin>>n;
    vector<int>v(n);
    map<pair<int,int>,int>mp;
    for(auto &it:v) cin>>it;
    for(int i=0;i<n;i++){
        cin>>a;
        if(mp[{v[i],a}])
            ans=(ans*2)%mod;
        mp[{a,v[i]}]=1;
    }
    if(n==2)   cout<<2<<endl;
    else    cout<<ans<<endl;
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