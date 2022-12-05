#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int mtrx[500][500]={0},n,dx[]={0,1,0,-1},dy[]={-1, 0,1,0};
bool dfs(int i,int j,int left,int curr){
    if(!left){
        if(curr+1==n)
            return true;
        if(dfs(curr+1,curr+1,mtrx[curr+1][curr+1]-1,curr+1))
            return true;
    }
    else{
        for(int m=0;m<4;m++){
            int x=i+dx[m],y=j+dy[m];
            if(x>=0&&y>=0&&x<n&&y<x&&!mtrx[x][y]){
                mtrx[x][y]=mtrx[curr][curr];
                if(dfs(x,y,left-1,curr))
                    return true;
                else    mtrx[x][y]=0;
            }
        }
    }
    return false;
}
int main(void){
    encoding_898;
    cin>>n;
    vector<int>xy(n);
    for(auto &it:xy)    cin>>it;
    for(int i=0;i<n;i++)
        mtrx[i][i]=xy[i];
    if(dfs(0,0,mtrx[0][0]-1,0)){
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++)   cout<<mtrx[i][j]<<' ';
            cout<<endl;
        }
    }
    else    cout<<-1<<endl;
    return 0;
}