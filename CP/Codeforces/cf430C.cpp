#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(void){
    encoding_898;
    int n,x,u,v;
    cin>>n;
    bool arr[n+1];
    memset(arr,false,sizeof(arr));
    vector<int>adjList[n+1],init(n+1),expect(n+1),isVisited(n+1),ans;
    x=n-1;
    while(x--){
        cin>>u>>v;
        adjList[v].push_back(u);
        adjList[u].push_back(v);
    }
    for(int i=0;i<n;i++)
        cin>>init[i+1];
    for(int i=0;i<n;i++)
        cin>>expect[i+1];
    queue<int>q;
    q.push(1);
    while(!q.empty()){
        int artc=q.front();
        if(!isVisited[artc]){
            if(expect[artc]!=init[artc]){
                isVisited[artc]=1;
                ans.push_back(artc);
                arr[artc]=!arr[artc];
                init[artc]=expect[artc];
            }
        }
        q.pop();
        cout<<"Parent:\t"<<artc<<endl<<endl;
        arr[artc]?cout<<"On\n":cout<<"Off!\n";
        cout<<"total moves(before):\t"<<ans.size()<<endl;
        for(int j=0;j<adjList[artc].size();j++){
            int vrtc=adjList[artc][j];
            cout<<"Child:\t"<<vrtc<<endl;
            if(!isVisited[vrtc]){
                arr[artc]?init[vrtc]=!init[vrtc]:1;
                isVisited[vrtc]=1;
                q.push(vrtc);
                if(expect[vrtc]!=init[vrtc]){
                    arr[vrtc]=true;
                    init[vrtc]=expect[vrtc];
                    ans.push_back(vrtc);
                }
            }
        }
        cout<<"Size(afeter):\t"<<ans.size()<<endl;
    }
    cout<<ans.size()<<endl;
    for(auto it:ans)    cout<<it<<endl;
    return 0;
}