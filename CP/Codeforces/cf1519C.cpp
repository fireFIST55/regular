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
    ll a,tot=0;
    int n,mx=0,axis=0;
    cin>>n;
    vector<ll>ans(n);
    vector<int>tm(n);
    vector<vector<int>>vc(n);
    vector<vector<ll>>trck(n,vector<ll>(1,0));
    vector<pair<int,ll>>vec;
    for(auto &it:tm){
        cin>>it;
        mx=max(mx,it-1);
    }
    for(int i=0;i<n;i++){
        cin>>a;
        vc[tm[i]-1].push_back(a);
    }
    for(int i=0;i<=mx;i++)  sort(vc[i].begin(),vc[i].end(),greater<int>());
    for(int i=0;i<n;i++) for(auto it:vc[i]) trck[i].push_back(trck[i].back()+(ll)it);
    for(int i=0;i<n;i++)    for(int k=1;k<=trck[i].size();k++) ans[k-1]+=trck[i][(vc[i].size()/k)*k];
    for(auto it:ans)    cout<<it<<' ';
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