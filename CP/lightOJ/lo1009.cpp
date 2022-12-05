/*******Back to the underworld******/
#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
ll odd_count,even_count;
vector<ll>adjList[20005],isVisited;
void DFS(ll artc,bool odd,bool even){
    if(!isVisited[artc]){
        isVisited[artc]=1;
        for(int i=0;i<adjList[artc].size();i++){
            if(!isVisited[adjList[artc][i]]){
                odd?odd_count+=1:even_count+=1;
                DFS(adjList[artc][i],!odd,!even);
            }
        }
    }
}
int main(void){
    encoding_898;
    int t,cs=1;
    cin>>t;
    while(t--){
        for(int i=0;i<20005;i++)
            adjList[i].clear();
        ll n,u,v,ans=0;
        cin>>n;
        isVisited.assign(20005,0);
        while(n--){
            cin>>u>>v;
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        for(int i=0;i<20005;i++){
            if(!isVisited[i]&&!adjList[i].empty()){
                even_count=0;
                odd_count=1;
                DFS(i,0,1);
                ans+=max(odd_count,even_count);
            }
        }
        cout<<"Case "<<cs++<<": "<<ans<<endl;
    }
    return 0;
}