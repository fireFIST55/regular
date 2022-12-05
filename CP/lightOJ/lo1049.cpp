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
    int t,cs=1;
    cin>>t;
    while(t--){
        int n,a,b,c,count=0,count1=0;
        cin>>n;
        vector<int>adjList[n+1],backupList[n+1],isVisited(n+1);
        map<pair<int,int>,int>pii,opt;
        for(int i=0;i<n;i++){
            cin>>a>>b>>c;
            adjList[a].push_back(b);
            backupList[b].push_back(a);
            pii[{a,b}]=c;
        }
        int j=1,y=0;
        bool flag=true;
        while(1&&flag){
            int x=0,i=0;
            while(adjList[j].size()&&flag){
                int k=i?adjList[j][0]:y==adjList[j][0]?adjList[j][1]:adjList[j][0];
                if(isVisited[j]){
                    flag=false;
                    break;
                }
                x+=pii[{j,k}];
                isVisited[j]=1;
                y=j;
                j=k;
            }
            count+=x;
            i=x=0;
            while(backupList[j].size()&&flag){
                int k=i?backupList[j][0]:y==backupList[j][0]?backupList[j][1]:backupList[j][0];
                if(i&&isVisited[j]){
                    flag=false;
                    break;
                }
                isVisited[j]=1;
                x+=pii[{k,j}];
                i+=1;
                y=j;
                j=k;
            }
            count1+=x;
        }
        cout<<"Case "<<cs++<<": "<<min(count,count1)<<endl;
    }
    return 0;
}