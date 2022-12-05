#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void solve(){
    ll ans=0;
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>vec(n);
    for(auto &it:vec)   cin>>it;
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++){
        ans+=upper_bound(vec.begin(),vec.end(),r-vec[i])-vec.begin();
        ans-=lower_bound(vec.begin(),vec.end(),l-vec[i])-vec.begin();
        if(vec[i]*2<=r&&vec[i]*2>=l)
            ans-=1;
    }
    ans/=2;
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