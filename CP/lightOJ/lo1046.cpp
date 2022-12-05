#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int n,m;
char board[15][15];
struct node{
    int x1,y1,cnt,moves,number;
    node(int a,int b,int c,int d,int e){x1=a;y1=b;cnt=c;moves=d;number=e;}
};
int BFS(){
    int total=0,dx[]={1,1,2,2,-1,-1,-2,-2},dy[]={2,-2,1,-1,2,-2,1,-1};
    queue<node>q;
    map<pair<pair<int,int>,int>,int>isVisited;
    map<pair<int,int>,int>xy,ttl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]-48>0){
                total+=1;
                isVisited[{{i,j},total}]=1;
                ttl[{i,j}]+=1;
                node v(i,j,0,board[i][j]-48,total);
                q.push(v);
            }
        }
    }
    while(!q.empty()){
        node v=q.front();
        queue<node>qx;
        qx.push(v);
        q.pop();
        while(!qx.empty()){
            node u=qx.front();
            qx.pop();
            int x=u.x1,y=u.y1,mov=u.moves,num=u.number,count=u.cnt+1;
            for(int j=0;j<8;j++){
                int xx=x+dx[j],yy=y+dy[j];
                if(xx>=0&&yy>=0&&xx<n&&yy<m&&!isVisited[{{xx,yy},num}]){
                    isVisited[{{xx,yy},num}]=1;
                    ttl[{xx,yy}]+=1;
                    xy[{xx,yy}]+=(count/mov)+(count%mov?1:0);
                    node h(xx,yy,count,mov,num);
                    qx.push(h);
                }
            }
        }
    }
    int ans=5e6;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ttl[{i,j}]==total)
                ans=min(ans,xy[{i,j}]);
        }
    }
    ans==5e6?ans=-1:1;
    return ans;
}
int main(void){
    encoding_898;
    int t,cs=1;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++)
            cin>>board[i];
        int ans=BFS();
        cout<<"Case "<<cs++<<": "<<ans<<endl;
    }
    return 0;
}