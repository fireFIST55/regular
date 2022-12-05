#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,u,v,cnt=0;
    cin>>n;
    vector<vector<int>>edge(n+1);
    vector<int>ans(n+1,-1);

    for(int i=1;i<n;i++){
        cin>>u>>v;
        edge[u].push_back(i);
        edge[v].push_back(i);
    }
    for(int i=1;i<=n;i++){
        if(edge[i].size()>=3){
            for(auto x:edge[i]){
                if(ans[x]==-1)
                    ans[x]=cnt++;
            }
        }
    }
    for(int i=1;i<n;i++){
        if(ans[i]==-1)  cout<<cnt++<<endl;
        else cout<<ans[i]<<endl;
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t=1;
    while(t--)
        solve();

    return 0;
}