#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int>adjList[100005],goal,ini,ans,isVisited;
void DFS(int x,bool odd,bool even,int status){
    if(!isVisited[x]){
        isVisited[x]=1;
        if(((status&1)&&odd)||(!(status&1)&&even))
            ini[x-1]=!ini[x-1];
        if(ini[x-1]!=goal[x-1]){
            ans.push_back(x);
            status&1?odd=!odd:even=!even;
        }
        for(auto child: adjList[x])
            DFS(child,odd,even,status+1);
    }
}
int main(void){
    encoding_898;
    int n,u,v;
    cin>>n;
    isVisited.assign(n+1,0);
    for(int i=1;i<n;i++){
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        cin>>u;
        ini.push_back(u);
    }
    for(int i=0;i<n;i++){
        cin>>u;
        goal.push_back(u);
    }
    DFS(1,0,0,0);
    cout<<ans.size()<<endl;
    for(auto it:ans)    cout<<it<<endl;
    cout<<endl;
    return 0;
}