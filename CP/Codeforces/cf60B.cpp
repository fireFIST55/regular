#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
char s[15][15][15];
int k,n,m,x,y,cnt=0;
void DFS(int a,int b,int c){
    if(a<0||a>=k||b<0||b>=n||c<0||c>=m||s[a][b][c]=='#')
        return;
    s[a][b][c]='#';
    cnt+=1;
    DFS(a+1,b,c); 
	DFS(a-1,b,c);
	DFS(a,b+1,c);
	DFS(a,b-1,c);
	DFS(a,b,c+1);
	DFS(a,b,c-1);
}
int main(void){
    encoding_898;
    cin>>k>>n>>m;
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++)
            cin>>s[i][j];
    }
    cin>>x>>y;
    DFS(0,x-1,y-1);
    cout<<cnt<<endl;
    return 0;
}