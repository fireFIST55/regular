#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int n,m,cnt;
char place[25][25];
void DFS(int x,int y){
    if(x>=0&&y>=0&&x<m&&y<n&&place[x][y]=='.'){
        place[x][y]='#';
        cnt+=1;
        DFS(x-1,y);
        DFS(x+1,y);
        DFS(x,y-1);
        DFS(x,y+1);
    }
}
int main(void){
    encoding_898;
    int t,cs=1;
    cin>>t;
    while(t--){
        cnt=0;
        cin>>n>>m;
        for(int i=0;i<m;i++)    cin>>place[i];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(place[i][j]=='@'){
                    place[i][j]='.';
                    DFS(i,j);
                    break;
                }
            }
        }
        cout<<"Case "<<cs++<<": "<<cnt<<endl;
    }
    return 0;
}