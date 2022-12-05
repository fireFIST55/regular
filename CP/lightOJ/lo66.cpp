#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int n,dx[]={-1,1,0,0},dy[]={0,0,-1,1};
char target,field[15][15];
struct node{
    int a,b,cnt;
    node(int a,int b,int cnt){this->a=a,this->b=b,this->cnt=cnt;}
};
int BFS(char curr,int x,int y,int cnt){

    if(curr>target)   return cnt;
    queue<node>q;
    node u(x,y,cnt);
    map<pair<int,int>,int>isVisited;
    isVisited[{x,y}]=1;
    q.push(u);
    while(!q.empty()){
        node v=q.front();
        q.pop();
        int x1=v.a,y1=v.b;
        for(int i=0;i<4;i++){
            int xx=x1+dx[i],yy=y1+dy[i];
            if(xx>=0&&xx<n&&yy>=0&&yy<n&&!isVisited[{xx,yy}]&&(field[xx][yy]==curr||field[xx][yy]=='.')){
                isVisited[{xx,yy}]=1;
                if(field[xx][yy]==curr){
                    field[xx][yy]='.';
                    return BFS(curr+1,xx,yy,v.cnt+1);
                }
                else{
                    node uv(xx,yy,v.cnt+1);
                    q.push(uv);
                }
            }
        }
    }
    return -1;
}
int main(void){
    encoding_898;
    int t,cs=1;
    cin>>t;
    while(t--){
        int x,y,ans;
        target='A';
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>field[i];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(field[i][j]>=65&&field[i][j]<=90){
                    if(field[i][j]==65) x=i,y=j;
                    target=target<field[i][j]?field[i][j]:target;
                }
            }
        }
        field[x][y]='.';
        ans=BFS('B',x,y,0);
        cout<<"Case "<<cs++<<": ";
        ans==-1?cout<<"Impossible":cout<<ans;
        cout<<endl;
    }
}