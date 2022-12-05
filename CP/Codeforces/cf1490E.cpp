#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(void){
    int n;
    cin>>n;
    vector<int>ans;
    vector<pair<ll,int>>pa;
    ll x,prefix[n]={0};
    for(int i=0;i<n;i++){
        cin>>x;
        pa.push_back(make_pair(x,i+1));
    }
    sort(pa.begin(),pa.end());
    for(int i=0;i<n;i++){
        prefix[i]+=pa[i].first;
        if(i)
            prefix[i]+=prefix[i-1];
    }
    ans.push_back(pa[n-1].second);
    for(int i=n-2;i>=0;i--){
        if(prefix[i]>=pa[i+1].first)
            ans.push_back(pa[i].second);
        else
            break;
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}