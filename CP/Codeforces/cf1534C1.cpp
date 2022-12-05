#include<bits/stdc++.h>
using namespace std;
#define M 400001
bool mark[M];
#define endl '\n'
#define ll long long
vector<int>node[M];
#define mod 1000000007
void dfs(int x){
    mark[x]=true;
    for(auto it:node[x]){
        if(!mark[it])    dfs(it);
    }
}
void solve(){
    int a,n;
    ll ans=1;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        node[i+1]=vector<int>();
        mark[i+1]=false;
    }
    for(int i=0;i<n;i++){
        cin>>a;
        node[a].push_back(vec[i]);
        node[vec[i]].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(!mark[i]){
            ans=(ans*(ll)2)%mod;
            dfs(i);
        }
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