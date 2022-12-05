#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void solve(){
    int n,a,b;
    cin>>n;
    ll sum=0;
    vector<int>vec;
    map<int,int>mp;
    vector<ll>weight(n);
    vector<pair<int,int>>vp;
    for(auto &it:weight){
        cin>>it;
        sum+=it;
    }
    for(int i=0;i<n-1;i++){
        cin>>a>>b;
        if(mp[a]==1)    vec.push_back(a);
        if(mp[b]==1)    vec.push_back(b);
        mp[a]+=1;
        mp[b]+=1;
    }
    for(auto it:vec)
        vp.push_back({weight[it-1],mp[it]});
    sort(vp.begin(),vp.end());
    cout<<sum<<' ';
    for(int i=vp.size()-1;i>=0;i--){
        int x=vp[i].first,y=vp[i].second;
        y-=1;
        while(y--){
            sum+=x;
            cout<<sum<<' ';
        }
    }
    cout<<endl;
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}